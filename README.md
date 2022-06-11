# GAS-SENSOR-ESP8266

> Dibuat oleh tim Mekatronika dan Kecerdasan Buatan 2021 UPI Purwakarta
>>  + Muhammad Ajis - <muhazis02@upi.edu>
>>  + [Fauzie Salman](https://github.com/FauzieSlmn) - <fauziesalman@upi.edu>
>>  + [Sajidah Layali Robbaniyah](https://github.com/slayalir) - <slayalir@upi.edu>
>>  + Tiara Yusti Dinanti - <tiarayustid@upi.edu>
>>  + [Muhammad Ihsan Hilmi](https://github.com/MIhsanHilmi) - <ihsanhilmi822@upi.edu>

## Daftar Isi
> 1. [Tentang](#Tentang)
> 2. [Demo](#Demo)
> 3. [Analisis](#Analisis)
> 4. [Referensi](#Referensi)

## Tentang
> Dalam kehidupan kita sehari - hari, banyak kegiatan kita yang tanpa kita ketahui itu berhubungan dengan penggunaan gas. Penggunaan gas dalam kondisi yang tidak sesuai
bisa menimbulkan kecelakaan yang berbahaya tergantung gas yang digunakan. Untuk mencegah hal tersebut terjadi maka kita perlu mengetahui tingkat intensitas gas yang ada
pada ruangan tersebut dan perlu mengetahui kapan intensitas gas tersebut melewati batas.  
>
> Berdasarkan permasalahan tersebut, maka kami membuat projek ini bertujuan membuat sebuah alat untuk mendeteksi dan memberitahu intensitas gas yang ada di sekitarnya
dan memberi peringatan bila melewati batas.

## Demo
> Pada projek ini, digunakan 1 buah sensor gas, 1 buah Arduino NodeMCU, 1 buah buzzer yang dihubungkan seperti di gambar dibawah ini
> 
> <img alt="Wiring Diagram" src="https://i.imgur.com/DkHyMSi.jpeg" width="50%" height="50%">
>
> Video demo dari projek bisa dilihat di [sini](https://youtu.be/HUIGL3a5dAU)

## Analisis
> Alat projek ini dapat diimplementasikan di tempat - tempat yang perlu dideteksi ruangannya. Daya yang digunakan untuk menyalakan alat ini cukup kecil sehingga
cukup fleksibel untuk digunakan, akan tetapi jarak sensor gas dari sumber gas perlu diperhatikan. Buzzer yang digunakan seperti pada video, memiliki malfungsi.
Buzzer ini bisa diganti dengan perangkat aktif lain seperti speaker atau motor yang bisa memberi aksi yang nantinya ditanggulangi kembali untuk menjadi sebuah 
peringatan gas. 
> Melewati aplikasi [Blynk](https://blynk.io/), data digital hasil deteksi sensor yang berupa tingkat intensitas gas yang terdeteksi bisa diambil melalui API yang
disediakan. Data digital ini bisa diolah kembali menjadi tampilan aplikasi lain seperti web atau android.

## Referensi
> Referensi dan sumber yang digunakan untuk projek ini antara lain:
> + [Blynk IoT](https://blynk.io/)
> 
