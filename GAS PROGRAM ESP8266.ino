
#define BLYNK_TEMPLATE_ID "TMPLLchlr1F5"
#define BLYNK_DEVICE_NAME "gas sensor project"
#define BLYNK_AUTH_TOKEN "QPhRYOKbGK8VufP6q-Cc-b5E5YrxuVKa"


char ssid[] = "device hotspot name";
char pass[] = "password wifi";
char auth[] = BLYNK_AUTH_TOKEN;

#define Buzzer D5
#define MQ2_SENSOR    A0 
#define WIFI_LED      16 

//#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

int MQ2_SENSOR_Value = 0;

bool isconnected = false;


#define VPIN_BUTTON_1    V2 

BlynkTimer timer;

void checkBlynkStatus() { 
  getSensorData();
  isconnected = Blynk.connected();
  if (isconnected == true) {
    digitalWrite(WIFI_LED, LOW);
    sendSensorData();
    Serial.println("Blynk Connected");
  }
  else{
    digitalWrite(WIFI_LED, HIGH);
    
    Serial.println("Blynk Not Connected");
  }
}

void getSensorData()
{
  MQ2_SENSOR_Value = map(analogRead(MQ2_SENSOR), 0, 1024, 0, 100); 
}

void sendSensorData()
{  
  Blynk.virtualWrite(VPIN_BUTTON_1, MQ2_SENSOR_Value);
  if (MQ2_SENSOR_Value > 50 )
  {
    Blynk.logEvent("gas", "Waspada ada gas terdeteksi!");
    tone(Buzzer,1000);
  }
  else
  {
    digitalWrite(Buzzer, LOW); 
  }
}

void setup()
{
  Serial.begin(9600);
 
  pinMode(MQ2_SENSOR, INPUT);
  pinMode(WIFI_LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  digitalWrite(WIFI_LED, HIGH);
  WiFi.begin(ssid, pass);
  timer.setInterval(2000L, checkBlynkStatus); // check if Blynk server is connected every 2 seconds
  Blynk.config(auth);
  delay(100);
}

void loop()
{
  Blynk.run();
  timer.run();
}
