# <h1 align="center">Laporan Praktikum Modul 3 - ABSTRACT DATA TYPE (ADT) </h1>

<p align="center">Raga Prasetyo - 109082500028</p>

## Dasar Teori
A. Penggunaan struct dalam C++
struct merupakan salah satu fitur dalam C++ yang digunakan untuk membuat tipe data sendiri. Di dalamnya, kita dapat menggabungkan beberapa variabel dengan tipe data berbeda ke dalam satu kelompok. Dalam penerapan ADT, struct dapat digunakan untuk mendefinisikan data beserta komponen yang dimilikinya.
Contohnya, ADT mahasiswa dapat memiliki komponen berupa NIM, nilai UTS, dan nilai UAS. Dengan menggunakan struct, seluruh komponen tersebut dapat disimpan dalam satu variabel mahasiswa sehingga pengelolaan data menjadi lebih teratur. 

Microsoft Learn
+1



B. Penggunaan fungsi dan prosedur dalam ADT
Fungsi dan prosedur digunakan untuk menjalankan operasi terhadap data dalam ADT. Fungsi dapat mengembalikan suatu nilai, sedangkan prosedur digunakan untuk menjalankan serangkaian instruksi tertentu. Pada contoh di modul, inputMhs() digunakan untuk memasukkan data mahasiswa, sedangkan rata2() digunakan untuk menghitung nilai rata-rata.
Pemisahan operasi ke dalam fungsi atau prosedur membantu program menjadi lebih terstruktur, memudahkan pengujian, dan mengurangi pengulangan kode. Modul 03 STUKDAT.pdf


Microsoft Learn
+1



C. Konsep pointer dalam C++
Pointer merupakan variabel yang menyimpan alamat memori dari variabel atau objek lain. Pointer dapat digunakan untuk mengakses nilai yang berada pada alamat tersebut melalui operasi dereference (*). Sementara itu, operator & dapat digunakan untuk memperoleh alamat suatu variabel.
Dalam latihan pada modul, pointer digunakan untuk menukarkan nilai dari dua variabel yang ditunjuk. Konsep ini juga penting dalam mempelajari struktur data yang menggunakan hubungan alamat memori antarelemen. Modul 03 STUKDAT.pdf


Microsoft Learn
+1



D. Array satu dimensi dan multidimensi
Array adalah kumpulan elemen dengan tipe data yang sama yang disimpan secara berurutan di memori. Array satu dimensi menggunakan satu indeks untuk mengakses elemen, sedangkan array multidimensi menggunakan lebih dari satu indeks, misalnya array dua dimensi yang berbentuk baris dan kolom.
Pada latihan modul, array digunakan untuk menyimpan data mahasiswa dengan jumlah terbatas dan untuk mengelola dua array integer berukuran 3 × 3. Elemen array dapat diakses atau diubah melalui indeksnya.

### A. ...<br/>

...

#### 1. ...

#### 2. ...

#### 3. ...

### B. ...<br/>

...

#### 1. ...

#### 2. ...

#### 3. ...

## Guided

### 1. ...

```C++
source code buku.h
#ifndef BUKU_H
#define BUKU_H
#include <iostream>

using namespace std;

struct buku {
    string judul;
    int halaman;
    string penulis;
};

void editIsi(string judul, int halaman, string penulis, buku &buku);
void tampilkanIsiBuku(buku buku);
bool checkPenulis(buku buku);

#endif
}
```

penjelasan singkat guided 1

Program tersebut merupakan header file `buku.h` dalam bahasa C++ yang digunakan untuk mendefinisikan struktur data dan mendeklarasikan fungsi yang berkaitan dengan pengelolaan informasi buku. Pada program ini, `struct buku` memiliki tiga atribut, yaitu `judul` bertipe data `string` untuk menyimpan judul buku, `halaman` bertipe data `int` untuk menyimpan jumlah halaman, dan `penulis` bertipe data `string` untuk menyimpan nama penulis. Selain itu, terdapat tiga deklarasi fungsi, yaitu `editIsi()` untuk mengubah informasi buku, `tampilkanIsiBuku()` untuk menampilkan informasi buku, dan `checkPenulis()` untuk memeriksa nama penulis dengan nilai kembalian berupa `boolean` (`true` atau `false`). Parameter referensi `buku &buku` pada fungsi `editIsi()` memungkinkan perubahan data dilakukan secara langsung pada variabel buku yang dikirimkan. Sementara itu, penggunaan `#ifndef`, `#define`, dan `#endif` bertujuan untuk mencegah header file diproses berulang kali. Dengan demikian, header file ini berfungsi sebagai dasar pengelolaan data buku yang implementasi fungsi-fungsinya dituliskan dalam file sumber lain, seperti `buku.cpp`.

### 2. ...

```C++
source code buku.cpp
#include "buku.h"

void editIsi(string judul, int halaman, string penulis, buku &buku) {
    buku.judul = judul;
    buku.halaman = halaman;
    buku.penulis = penulis;
}

void tampilkanIsiBuku(buku buku) {
    cout << "Judul Buku : " << buku.judul << endl;
    cout << "Jumlah Halaman : " << buku.halaman << endl;
    cout << "Penulis : " << buku.penulis << endl;
}

bool checkPenulis(buku buku)
{
    return buku.penulis == "";
}

penjelasan singkat guided 2

Program `buku.cpp` merupakan implementasi dari fungsi-fungsi yang telah dideklarasikan pada header file `buku.h` untuk mengelola informasi buku. Fungsi `editIsi()` digunakan untuk mengisi atau mengubah data buku yang terdiri dari judul, jumlah halaman, dan nama penulis. Parameter `buku &buku` menggunakan referensi sehingga perubahan data dilakukan secara langsung pada variabel buku yang dikirimkan. Selanjutnya, fungsi `tampilkanIsiBuku()` digunakan untuk menampilkan informasi buku ke layar menggunakan `cout`, meliputi judul buku, jumlah halaman, dan nama penulis. Sementara itu, fungsi `checkPenulis()` digunakan untuk memeriksa apakah atribut penulis masih berupa string kosong (`""`). Fungsi ini akan mengembalikan nilai `true` apabila nama penulis belum diisi dan `false` apabila nama penulis sudah terisi. Dengan demikian, program ini berfungsi untuk mengelola, menampilkan, dan memeriksa kelengkapan data buku melalui penerapan struktur data `struct` dan fungsi dalam bahasa C++.

### 3. ...

```C++
source code main.cpp
```
#include <iostream>
#include "buku.h"
using namespace std;

int main() {
    buku novel;
    string judul, penulis;
    int halaman;

    cout << "Masukkan judul buku : ";
    getline(cin, judul);

    cout << "Masukkan jumlah halaman : ";
    cin >> halaman;
    cin.ignore();

    cout << "Masukkan nama penulis : ";
    getline(cin, penulis);

    editIsi(judul, halaman, penulis, novel);

    cout << endl;
    cout << "Judul Buku : " << novel.judul << endl;
    cout << "Jumlah Halaman : " << novel.halaman << endl;
    cout << "Penulis : " << novel.penulis << endl;

    cout << endl;
    cout << "Check Penulis : " << checkPenulis(novel) << endl;

    return 0;
}

penjelasan singkat guided 3
Program `main.cpp` merupakan program utama yang digunakan untuk menjalankan proses penginputan, penyimpanan, dan penampilan data buku. Pada awal program, dibuat variabel `novel` bertipe `buku` untuk menyimpan informasi buku, serta variabel `judul`, `penulis`, dan `halaman` untuk menampung data yang dimasukkan oleh pengguna. Program kemudian meminta pengguna memasukkan judul buku dan nama penulis menggunakan `getline()`, serta jumlah halaman menggunakan `cin`. Perintah `cin.ignore()` digunakan untuk mengabaikan karakter newline yang tersisa setelah input jumlah halaman agar proses pembacaan nama penulis berjalan dengan benar. Setelah semua data dimasukkan, fungsi `editIsi()` dipanggil untuk menyimpan data ke dalam variabel `novel`. Selanjutnya, program menampilkan judul buku, jumlah halaman, dan nama penulis yang telah dimasukkan. Terakhir, fungsi `checkPenulis()` dipanggil untuk memeriksa apakah nama penulis kosong, kemudian hasilnya ditampilkan melalui perintah `cout`. Nilai `0` menunjukkan bahwa nama penulis telah terisi, sedangkan nilai `1` menunjukkan bahwa nama penulis masih kosong. Dengan demikian, program ini menerapkan konsep struktur data `struct`, fungsi, dan parameter referensi dalam bahasa C++ untuk mengelola informasi buku.


## Unguided

### 1. (isi dengan soal unguided 1)
Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array
dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3*uts+0.4*uas+0.3*tugas.
```C++
source code unguided 1
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Masukkan jumlah mahasiswa (maks. 10): ";
    cin >> n;
    cin.ignore();

    if (n < 1 || n > 10) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;

        cout << "Nama          : ";
        getline(cin, mhs[i].nama);

        cout << "NIM           : ";
        getline(cin, mhs[i].nim);

        cout << "Nilai UTS     : ";
        cin >> mhs[i].uts;

        cout << "Nilai UAS     : ";
        cin >> mhs[i].uas;

        cout << "Nilai Tugas   : ";
        cin >> mhs[i].tugas;
        cin.ignore();

        mhs[i].nilaiAkhir = hitungNilaiAkhir(
            mhs[i].uts, mhs[i].uas, mhs[i].tugas
        );
    }

    cout << "\n===== DATA NILAI MAHASISWA =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama         : " << mhs[i].nama << endl;
        cout << "NIM          : " << mhs[i].nim << endl;
        cout << "UTS          : " << mhs[i].uts << endl;
        cout << "UAS          : " << mhs[i].uas << endl;
        cout << "Tugas        : " << mhs[i].tugas << endl;
        cout << "Nilai Akhir  : " << mhs[i].nilaiAkhir << endl;
    }

    return 0;
}

### Output Unguided 1 :
Masukkan jumlah mahasiswa (maks. 10): 2

Data Mahasiswa ke-1
Nama          : Toyib
NIM           : 10908244
Nilai UTS     : 90
Nilai UAS     : 98
Nilai Tugas   : 100

Data Mahasiswa ke-2
Nama          : Nafis Pebrian
NIM           : 90
Nilai UTS     : 89
Nilai UAS     : 100
Nilai Tugas   : 100

===== DATA NILAI MAHASISWA =====

Mahasiswa ke-1
Nama         : Toyib
NIM          : 10908244
UTS          : 90
UAS          : 98
Tugas        : 100
Nilai Akhir  : 96.2

Mahasiswa ke-2
Nama         : Nafis Pebrian
NIM          : 90
UTS          : 89
UAS          : 100
Tugas        : 100
Nilai Akhir  : 96.7

##### Output 1

contoh :
![Screenshot Output Unguided 1_1](https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided1-1.png)


penjelasan unguided 1

### Penjelasan Soal 1
Program tersebut dibuat untuk menyimpan dan mengolah data maksimal 10 mahasiswa menggunakan bahasa C++. Pada program ini, `struct Mahasiswa` digunakan untuk menampung data mahasiswa yang terdiri dari nama, NIM, nilai UTS, nilai UAS, nilai tugas, dan nilai akhir. Data mahasiswa disimpan dalam array `mhs[10]`, sehingga program dapat menampung beberapa data mahasiswa dalam satu variabel array. Selanjutnya, program meminta pengguna memasukkan jumlah mahasiswa yang akan didata dan memeriksa apakah jumlah tersebut berada dalam rentang 1 sampai 10. Proses input data dilakukan menggunakan perulangan `for`, yang meminta pengguna memasukkan nama, NIM, serta nilai UTS, UAS, dan tugas setiap mahasiswa. Nilai akhir dihitung melalui fungsi `hitungNilaiAkhir()` dengan rumus \\(0.3 \times UTS + 0.4 \times UAS + 0.3 \times Tugas\\), kemudian hasilnya disimpan pada field `nilaiAkhir`. Setelah seluruh data dimasukkan dan nilai akhir dihitung, program menggunakan perulangan `for` kembali untuk menampilkan seluruh data mahasiswa beserta nilai akhirnya. Dengan demikian, program ini menerapkan konsep `struct`, array, fungsi, dan perulangan untuk mempermudah proses penyimpanan, perhitungan, dan penampilan data nilai mahasiswa.


### 2. (isi dengan soal unguided 2)
Buatlah ADT pelajaran sebagai berikut di dalam file “pelajaran.h”:
Type pelajaran <
namaMapel : string
kodeMapel : string
>
function create_pelajaran( namapel : string,
kodepel : string ) → pelajaran
procedure tampil_pelajaran( input pel : pelajaran )
Buatlah implementasi ADT pelajaran pada file “pelajaran.cpp”
Cobalah hasil implementasi ADT pada file “main.cpp”
using namespace std;
int main(){
string namapel = "Struktur Data";
string kodepel = "STD";
pelajaran pel = create_pelajaran(namapel,kodepel);
tampil_pelajaran(pel);
return 0;
}
```C++
source code soal 2_pelajaran.h
```

#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <iostream>
#include <string>

using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran input_pel);

#endif

source code soal 2_pelajaran.cpp
 #include "soal 2_pelajaran.h"

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;

    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;

    return pel;
}

void tampil_pelajaran(pelajaran input_pel) {
    cout << "nama pelajaran : " << input_pel.namaMapel << endl;
    cout << "nilai : " << input_pel.kodeMapel << endl;
}

source code soal 2_main.cpp
#include "soal 2_pelajaran.h"
#include <iostream>
#include <string>
#include "soal 2_pelajaran.h"

using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);

    tampil_pelajaran(pel);

    return 0;
}

### Output Unguided 2 :
nama pelajaran : Struktur Data
nilai : STD

##### Output 1

contoh :
![Screenshot Output Unguided 2_1](https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided2-1.png)


penjelasan unguided 2
### Penjelasan Soal 2
: ADT pelajaran digunakan untuk mengelola data mata pelajaran yang terdiri dari nama dan kode mata pelajaran. Fungsi create_pelajaran() mengisi kedua atribut tersebut dan mengembalikan data bertipe pelajaran, sedangkan prosedur tampil_pelajaran() menampilkan data yang telah dibuat. Pemisahan program menjadi file header, implementasi, dan program utama membuat kode lebih terstruktur serta memudahkan pengelolaan program C++.



### 3. (isi dengan soal unguided 3)
Buatlah program dengan ketentuan :
- 2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer
- fungsi/prosedur yang menampilkan isi sebuah array integer 2D
- fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu
- fungsi/prosedur yang akan menukarkan isi dari variabel yang ditunjuk oleh 2 buah pointer
source code unguided 3
```

#include <iostream>
using namespace std;

const int N = 3;

void tampilArray(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray(int A[N][N], int B[N][N],
                int baris, int kolom) {
    int temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[N][N] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int x = 100;
    int y = 200;

    int *p1 = &x;
    int *p2 = &y;

    cout << "Array A sebelum ditukar:" << endl;
    tampilArray(A);

    cout << "\nArray B sebelum ditukar:" << endl;
    tampilArray(B);

    tukarArray(A, B, 1, 1);

    cout << "\nArray A setelah pertukaran elemen:" << endl;
    tampilArray(A);

    cout << "\nArray B setelah pertukaran elemen:" << endl;
    tampilArray(B);

    cout << "\nNilai sebelum pertukaran pointer:" << endl;
    cout << "x = " << *p1 << endl;
    cout << "y = " << *p2 << endl;

    tukarPointer(p1, p2);

    cout << "\nNilai setelah pertukaran pointer:" << endl;
    cout << "x = " << *p1 << endl;
    cout << "y = " << *p2 << endl;

    return 0;
}


### Output Unguided 3 :
Array A sebelum ditukar:
1       2       3
4       5       6
7       8       9

Array B sebelum ditukar:
10      20      30
40      50      60
70      80      90

Array A setelah pertukaran elemen:
1       2       3
4       50      6
7       8       9

Array B setelah pertukaran elemen:
10      20      30
40      5       60
70      80      90

Nilai sebelum pertukaran pointer:
x = 100
y = 200

Nilai setelah pertukaran pointer:
x = 200
y = 100

##### Output 1

contoh :
![Screenshot Output Unguided 3_1] (https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided2-1.png)

penjelasan unguided 3
### Penjelasan Soal 3
Program tersebut dibuat menggunakan bahasa C++ untuk mengolah dua array integer dua dimensi berukuran 3×3 dan melakukan pertukaran nilai menggunakan pointer. Pada awal program, konstanta `N` ditetapkan sebesar 3 sebagai ukuran array, kemudian array `A` dan `B` diinisialisasi dengan sembilan bilangan bulat masing-masing. Fungsi `tampilArray()` digunakan untuk menampilkan seluruh elemen array dengan memanfaatkan dua perulangan `for` untuk mengakses baris dan kolom. Selanjutnya, fungsi `tukarArray()` digunakan untuk menukarkan elemen dari kedua array pada posisi tertentu, yaitu baris kedua dan kolom kedua, dengan bantuan variabel sementara `temp` agar nilai awal tidak hilang. Program juga mendeklarasikan dua variabel integer, yaitu `x` dan `y`, serta dua pointer `p1` dan `p2` yang menyimpan alamat kedua variabel tersebut. Fungsi `tukarPointer()` kemudian digunakan untuk menukarkan nilai yang ditunjuk oleh kedua pointer menggunakan operator dereferensi `*` dan variabel sementara. Setelah proses pertukaran selesai, program menampilkan kembali isi kedua array dan nilai variabel `x` serta `y`. Dengan demikian, program ini menerapkan konsep array dua dimensi, fungsi, perulangan, pointer, dan pertukaran nilai dalam bahasa C++.


## Kesimpulan
## Kesimpulan

Berdasarkan materi dan pengerjaan laporan praktikum Modul 3 Struktur Data tentang Abstract Data Type (ADT), dapat disimpulkan bahwa ADT merupakan konsep yang digunakan untuk mengelompokkan data beserta operasi yang dapat dilakukan terhadap data tersebut. Dalam penerapannya menggunakan bahasa C++, ADT dapat dibuat dengan `struct`, fungsi, dan prosedur untuk mengelola data agar program lebih terstruktur dan mudah dipahami.

Melalui pengerjaan praktikum, konsep ADT diterapkan dengan membuat tipe data mahasiswa dan pelajaran, memisahkan program ke dalam file header (`.h`), implementasi (`.cpp`), dan program utama (`main.cpp`), serta menggunakan fungsi untuk mengolah dan menampilkan data. Selain itu, latihan array dua dimensi dan pointer membantu memahami cara mengakses, mengubah, dan menukarkan nilai data. Dengan demikian, praktikum ini memberikan pemahaman mengenai penerapan ADT, fungsi dan prosedur, array, serta pointer dalam pemrograman C++ sebagai dasar untuk mempelajari struktur data yang lebih kompleks.
...

## Referensi

[1] Microsoft. (Tanpa tahun). *Classes and Structs (C++)*. Microsoft Learn. Diakses pada 13 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/classes-and-structs-cpp.

[2] Microsoft. (Tanpa tahun). *C++ Language Reference*. Microsoft Learn. Diakses pada 13 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/cpp-language-reference.

[3] Microsoft. (2021). *Pointers (C++)*. Microsoft Learn. Diakses pada 13 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/pointers-cpp.

[4] Microsoft. (Tanpa tahun). *Arrays (C++)*. Microsoft Learn. Diakses pada 13 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/arrays-cpp.