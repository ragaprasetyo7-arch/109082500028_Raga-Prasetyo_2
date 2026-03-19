# <h1 align="center">Laporan Praktikum Modul 2 - ... </h1>
<p align="center"> Raga Prasetyo - [NIM]</p>

## Unguided 

### 1. [Soal]
#### soal1.go
Telusuri program berikut dengan cara mengkompilasi dan mengeksekusi program. Silakan masukan data yang sesuai sebanyak yang diminta program. Perhatikan keluaran yang diperoleh. Coba terangkan apa sebenarnya yang dilakukan program tersebut?
```go
package main
import "fmt"

func main() {

    var satu, dua, tiga string
    var temp string

    fmt.Print("Masukan input string: ")
    fmt.Scan(&satu)

    fmt.Print("Masukan input string: ")
    fmt.Scan(&dua)

    fmt.Print("Masukan input string: ")
    fmt.Scan(&tiga)

    fmt.Println("Output awal =", satu, dua, tiga)

    temp = satu
    satu = dua
    dua = tiga
    tiga = temp

    fmt.Println("Output akhir =", satu, dua, tiga)
}


```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/ragaprasetyo7/109082500028_Raga-Prasetyo_2/blob/main/modul2/output/output-soal1.png)
[penjelasan]
Program ini digunakan untuk membaca tiga buah data bertipe string dari pengguna. Setelah pengguna memasukkan tiga string, program akan menampilkan urutan data tersebut sebagai output awal. Selanjutnya program menggunakan sebuah variabel sementara untuk menukar posisi nilai antar variabel sehingga urutan data bergeser. Nilai pada variabel pertama akan berpindah ke variabel ketiga melalui proses pertukaran, sehingga urutan string berubah dari urutan awal menjadi urutan baru. Setelah proses pertukaran selesai, program menampilkan hasil akhir dari perubahan urutan tersebut.

### 2. [Soal]
#### soal2.go
Siswa kelas IPA di salah satu sekolah menengah atas di Indonesia sedang mengadakan
praktikum kimia. Di setiap percobaan akan menggunakan 4 tabung reaksi, yang mana
susunan warna cairan di setiap tabung akan menentukan hasil percobaan. Siswa diminta
untuk mencatat hasil percobaan tersebut. Percobaan dikatakan berhasil apabila susunan
warna zat cair pada gelas 1 hingga gelas 4 secara berturutan adalah ‘merah’, ‘kuning’,
‘hijau’, dan ‘ungu’ selama 5 kali percobaan berulang. Buatlah sebuah program yang menerima input berupa warna dari ke 4 gelas reaksi sebanyak 5 kali percobaan. Kemudian program akan menampilkan true apabila urutan warna sesuai dengan informasi yang diberikan pada paragraf sebelumnya, dan false untuk urutan warna lainnya.
```go
package main
import "fmt"

func main() {

    var w1, w2, w3, w4 string
    berhasil := true

    for i := 1; i <= 5; i++ {

        fmt.Print("Percobaan ", i, ": ")
        fmt.Scan(&w1, &w2, &w3, &w4)

        if !(w1 == "merah" && w2 == "kuning" && w3 == "hijau" && w4 == "ungu") {
            berhasil = false
        }
    }

    fmt.Println("BERHASIL:", berhasil)
}


```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/ragaprasetyo7/109082500028_Raga-Prasetyo_2/blob/main/modul2/output/output-soal2.png)
[penjelasan]
Program ini bertujuan untuk memeriksa apakah urutan warna yang dimasukkan pengguna sudah sesuai dengan urutan yang ditentukan. Program meminta pengguna memasukkan empat warna dalam lima kali percobaan. Urutan warna yang dianggap benar adalah merah, kuning, hijau, dan ungu. Pada setiap percobaan, program akan membandingkan input pengguna dengan urutan warna yang benar. Jika semua percobaan sesuai dengan urutan yang ditentukan, maka program akan menampilkan nilai true. Namun jika terdapat satu atau lebih percobaan yang tidak sesuai, maka program akan menampilkan nilai false.

### 3. [Soal]
#### soal3.go
PT POS membutuhkan aplikasi perhitungan biaya kirim berdasarkan berat parsel. Maka,
buatlah program BiayaPos untuk menghitung biaya pengiriman tersebut dengan ketentuan
sebagai berikut! Dari berat parsel (dalam gram), harus dihitung total berat dalam kg dan sisanya (dalam gram). Biaya jasa pengiriman adalah Rp. 10.000,- per kg. Jika sisa berat tidak kurang dari 500 gram, maka tambahan biaya kirim hanya Rp. 5,- per gram saja. Tetapi jika kurang dari 500 gram, maka tambahan biaya akan dibebankan sebesar Rp. 15,- per gram. Sisa berat (yang kurang dari 1kg) digratiskan biayanya apabila total berat ternyata lebih dari 10kg.
```go
package main
import "fmt"

func main() {

    var gram int
    var kg, sisa int
    var biayaKg, biayaSisa, total int

    fmt.Print("Berat parsel (gram): ")
    fmt.Scan(&gram)

    kg = gram / 1000
    sisa = gram % 1000

    biayaKg = kg * 10000

    if sisa >= 500 {
        biayaSisa = sisa * 5
    } else {
        biayaSisa = sisa * 15
    }

    total = biayaKg + biayaSisa

    if kg > 10 {
        total = biayaKg
    }

    fmt.Println("Detail berat:", kg, "kg +", sisa, "gr")
    fmt.Println("Detail biaya: Rp.", biayaKg, "+ Rp.", biayaSisa)
    fmt.Println("Total biaya: Rp.", total)
}



```
### Output Unguided :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/ragaprasetyo7/109082500028_Raga-Prasetyo_2/blob/main/modul2/output/output-soal3.png)
[penjelasan]
Program ini digunakan untuk menghitung biaya pengiriman parsel berdasarkan berat barang dalam satuan gram. Program terlebih dahulu meminta pengguna memasukkan berat parsel, kemudian berat tersebut diubah menjadi kilogram dan sisa gram. Biaya dihitung dengan tarif Rp10.000 per kilogram. Untuk sisa berat dalam gram, jika sisa berat kurang dari 500 gram maka dikenakan biaya Rp15 per gram, sedangkan jika sisa berat sama dengan atau lebih dari 500 gram maka dikenakan biaya Rp5 per gram. Namun apabila berat parsel melebihi 10 kilogram, maka biaya untuk sisa gram akan digratiskan. Setelah semua perhitungan selesai, program akan menampilkan detail berat, detail biaya, dan total biaya pengiriman. 