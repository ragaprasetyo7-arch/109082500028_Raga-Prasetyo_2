# <h1 align="center">Laporan Praktikum Modul 2 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Raga Prasetyo - 109082500028</p>

## Dasar Teori

1. Algoritma

Algoritma merupakan serangkaian langkah yang tersusun secara sistematis dan logis untuk menyelesaikan suatu permasalahan. Dalam pemrograman, algoritma menjadi dasar dalam menentukan proses penyelesaian masalah sebelum solusi tersebut diterjemahkan ke dalam bahasa pemrograman. Algoritma dapat direpresentasikan menggunakan beberapa bentuk, seperti flowchart dan pseudocode, sehingga langkah penyelesaian masalah dapat dipahami dengan lebih terstruktur [1].

2. Pemrograman C++

C++ merupakan salah satu bahasa pemrograman yang dapat digunakan untuk mengimplementasikan algoritma menjadi sebuah program yang dapat dijalankan oleh komputer. Pembelajaran C++ dasar mencakup pengenalan struktur program, tipe data, variabel, operator, input dan output, percabangan, serta perulangan [1][2]. Bahasa C++ juga banyak digunakan dalam pembelajaran algoritma karena memungkinkan konsep penyelesaian masalah diterapkan secara langsung dalam bentuk kode program [2].

3. Variabel dan Tipe Data

Variabel merupakan tempat penyimpanan data yang digunakan oleh program selama proses eksekusi. Setiap variabel memiliki tipe data yang menentukan jenis nilai yang dapat disimpan. Dalam C++, beberapa tipe data dasar yang umum digunakan adalah int untuk bilangan bulat, float dan double untuk bilangan pecahan, serta char untuk menyimpan karakter [2]. Penggunaan variabel dan tipe data merupakan bagian dasar dalam pembuatan program karena data yang diolah harus disimpan dalam bentuk yang sesuai dengan kebutuhan program.

4. Operator

Operator merupakan simbol yang digunakan untuk melakukan operasi terhadap nilai atau variabel. Dalam C++, operator aritmatika meliputi penjumlahan (+), pengurangan (-), perkalian (*), pembagian (/), dan modulus (%). Operator aritmatika dapat digunakan untuk melakukan perhitungan matematis dalam program, seperti menghitung hasil operasi dari dua bilangan [2].

5. Input dan Output

Input merupakan data yang diberikan kepada program untuk diproses, sedangkan output merupakan hasil yang diberikan program setelah melakukan proses terhadap data tersebut. Dalam C++, proses input dan output pada konsol dapat dilakukan menggunakan cin dan cout. cin digunakan untuk menerima data dari pengguna, sedangkan cout digunakan untuk menampilkan data atau informasi ke layar [2]. Konsep input dan output merupakan bagian penting dalam program karena memungkinkan adanya interaksi antara pengguna dengan program.

6. Perulangan

Perulangan merupakan struktur pemrograman yang digunakan untuk menjalankan suatu perintah secara berulang. Dalam C++, struktur perulangan yang umum digunakan antara lain for, while, dan do-while. Perulangan dapat digunakan ketika suatu proses perlu dilakukan beberapa kali berdasarkan kondisi atau jumlah pengulangan tertentu [2]. Penggunaan perulangan juga dapat diterapkan dalam pembuatan pola menggunakan angka atau karakter dengan memanfaatkan nested loop atau perulangan bersarang.

7. Compiler dan IDE

Kode program C++ perlu melalui proses kompilasi agar dapat diterjemahkan menjadi program yang dapat dijalankan oleh komputer. Compiler berfungsi menerjemahkan kode sumber yang ditulis programmer ke bentuk yang dapat dieksekusi oleh komputer. Sementara itu, IDE (Integrated Development Environment) menyediakan lingkungan yang membantu programmer dalam menulis, mengompilasi, dan menjalankan program. Penggunaan lingkungan pengembangan tersebut membantu proses pembelajaran pemrograman karena penulisan kode dan pengujian program dapat dilakukan dalam satu lingkungan kerja [2].

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
source code guided 1
#include <iostream>
using namespace std;
int main() {
    int W, X, Y; float Z;
    X = 7; Y = 3; W = 1;
    Z = (X + Y) / (Y + W);
    cout << "Nilai z = " << Z << endl;
    return 0;
}
```

penjelasan singkat guided 1

Program tersebut digunakan untuk menghitung nilai `Z` berdasarkan operasi aritmatika dari variabel `X`, `Y`, dan `W`. Nilai `X = 7`, `Y = 3`, dan `W = 1` dimasukkan, kemudian dihitung dengan rumus `(X + Y) / (Y + W)`. Hasil perhitungan disimpan dalam variabel `Z` bertipe `float` dan ditampilkan menggunakan `cout`.


### 2. ...

```C++
source code guided 2
#include <iostream>
using namespace std;

int main(){
int r = 10;
int s;
s=10 + ++r;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}

penjelasan singkat guided 2

Program menggunakan operator pre-increment (++r) yang menaikkan nilai r terlebih dahulu sebelum digunakan dalam perhitungan. Nilai awal r adalah 10, kemudian menjadi 11. Selanjutnya s = 10 + 11, sehingga nilai s adalah 21.

### 3. ...

```C++
source code guided 3
```
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
int r = 10;
int s;
s=10 + r++;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}

penjelasan singkat guided 3

Program menggunakan operator post-increment (r++), yaitu nilai r digunakan terlebih dahulu dalam operasi, kemudian nilainya ditambah 1. Nilai awal r adalah 10, sehingga perhitungan yang dilakukan adalah s = 10 + 10, menghasilkan s = 20. Setelah perhitungan selesai, nilai r bertambah menjadi 11.

### 4. ...

```C++
source code guided 4
```
#include <iostream>
using namespace std;

int main() {
    double tot_pembelian, diskon;
    cout<<"total pembelian: Rp";
    cin>>tot_pembelian;
    diskon = 0;
    if(tot_pembelian >= 100000)
        diskon = 0.5*tot_pembelian;
        cout<<"besar diskon = Rp"<<diskon;
}

penjelasan singkat guided 4

Program digunakan untuk menghitung besar diskon berdasarkan total pembelian. Jika total pembelian minimal Rp100.000, maka pembeli mendapatkan diskon sebesar 50% dari total pembelian. Jika kurang dari Rp100.000, nilai diskon tetap 0.

### 5. ...

```C++
source code guided 5
```
#include <iostream>
using namespace std;

int main(){
double tot_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>tot_pembelian;
diskon = 0;
if(tot_pembelian >= 100000)
diskon = 0.05*tot_pembelian;
else
diskon = 0;
cout<<"besar diskon = Rp" <<diskon;
}

penjelasan singkat guided 5

Program menghitung besar diskon berdasarkan total pembelian. Jika total pembelian lebih dari atau sama dengan Rp100.000, maka diberikan diskon sebesar 5%. Jika total pembelian kurang dari Rp100.000, maka tidak mendapatkan diskon atau nilai diskon adalah 0.

### 6. ...

```C++
source code guided 6
```
#include <iostream>
using namespace std;

int main() {
    int kode_hari;
    puts("Menentukan hari kerja/libur\n");
    puts("1=Senin 3=Rabu 5=Jumat 7=Minggu ");
    puts("2=Selasa 4=Kamis 6=Sabtu ");
    cin>>kode_hari;
    switch (kode_hari) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout<<"Hari Kerja";
            break;
        case 6:
        case 7:
            cout<<"Hari Libur";
            break;
        default:
        cout<<"Kode masukan salah!!!";
    }
    return 0;
 }

penjelasan singkat guided 6

Program digunakan untuk menentukan apakah suatu hari termasuk hari kerja atau hari libur berdasarkan kode hari yang dimasukkan. Struktur switch-case digunakan untuk memeriksa nilai kode_hari. Kode 1–5 menghasilkan "Hari Kerja", sedangkan kode 6–7 menghasilkan "Hari Libur". Jika kode yang dimasukkan selain 1–7, program menampilkan "Kode masukan salah!!!".

### 7. ...

```C++
source code guided 7
```
#include <iostream>
using namespace std;

int main() {
    int jum;
    cout<<"jumlah perulangan: ";
    cin>>jum;
    for(int i=0; i<jum; i++) {
        cout<<"saya pintar\n";
    }
    return 0;
}
penjelasan singkat guided 7

Program digunakan untuk menampilkan teks "saya pintar" sebanyak jumlah perulangan yang dimasukkan oleh pengguna. Perulangan for dimulai dari i = 0 dan terus berjalan selama i < jum. Setiap perulangan, nilai i bertambah satu dan teks "saya pintar" ditampilkan.

### 8. ...

```C++
source code guided 8
```
#include <iostream>
using namespace std;

int main() {
    int i=1;
    int jum;
    cout<<"masukkan banyak baris: ";
    cin>>jum;
    while(i<=jum){
        cout<<"baris ke-"<<i<<endl;
        i++; //sama dengan 
    }
    return 0;
}

penjelasan singkat guided 8

Program digunakan untuk menampilkan nomor baris sebanyak jumlah yang dimasukkan pengguna. Perulangan while akan terus dijalankan selama nilai i kurang dari atau sama dengan jum. Setelah setiap perulangan, i++ digunakan untuk menambah nilai i sebesar 1 hingga kondisi perulangan tidak terpenuhi.

### 9. ...

```C++
source code guided 9
```
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int jum;

    cout << "Masukkan jumlah baris: ";
    cin >> jum;

    do {
        cout << "baris ke-" << i << endl;
        i++;
    } while (i <= jum);

    return 0;
}

penjelasan singkat guided 9

Program digunakan untuk menampilkan nomor baris sesuai jumlah yang dimasukkan pengguna. Perulangan do-while menjalankan perintah terlebih dahulu, kemudian memeriksa kondisi i <= jum. Setiap perulangan, nilai i bertambah satu menggunakan i++ hingga kondisi bernilai salah.

### 10. ...

```C++
source code guided 10
```
#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int i;

    struct data {
        char nama[40];
        int nilai;
    };

    data siswa[MAX];

    for (i = 0; i < MAX; i++) {
        cout << "Masukkan data ke-" << i + 1 << endl;
        cout << "Nama = ";
        cin >> siswa[i].nama;
        cout << "Nilai = ";
        cin >> siswa[i].nilai;
    }

    cout << "\nData siswa\n";
    cout << "==========";

    for (i = 0; i < MAX; i++) {
        cout << "\nData ke-" << i + 1;
        cout << "\nNama = " << siswa[i].nama;
        cout << "\nNilai = " << siswa[i].nilai;
    }

    return 0;
}

penjelasan singkat guided 10

Program digunakan untuk memasukkan dan menampilkan data 5 siswa yang terdiri dari nama dan nilai. struct data digunakan untuk mengelompokkan data nama dan nilai, sedangkan array siswa[MAX] digunakan untuk menyimpan data setiap siswa. Perulangan for pertama digunakan untuk memasukkan data, kemudian perulangan for kedua digunakan untuk menampilkan seluruh data siswa.

### 11. ...

```C++
source code guided 11
```
#include <iostream>
using namespace std;

float ctof(float celcius);
int main() {
float celcius, fahrenheit;
cout <<"nilai Celcius? ";
cin >> celcius;
fahrenheit = ctof(celcius);
cout<<celcius<<" Celcius adalah "<<fahrenheit<<" Fahrenheit"<<endl;
return 0;
}

float ctof(float celcius){
return (celcius * 1.8) + 32;
}

penjelasan singkat guided 11

Program digunakan untuk mengubah suhu dari Celcius ke Fahrenheit. Fungsi ctof() menerima nilai Celcius sebagai parameter, kemudian menghitungnya menggunakan rumus (Celcius × 1.8) + 32. Hasil perhitungan dikembalikan ke variabel fahrenheit dan ditampilkan ke layar.


## Unguided

### 1. (isi dengan soal unguided 1)
Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian
memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua
bilangan tersebut.

```C++
source code unguided 1
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Penjumlahan = " << a + b << endl;
    cout << "Pengurangan = " << a - b << endl;
    cout << "Perkalian = " << a * b << endl;
    cout << "Pembagian = " << a / b << endl;

    return 0;
}

### Output Unguided 1 :

Masukkan bilangan pertama: 100
Masukkan bilangan kedua: 100
Penjumlahan = 200
Pengurangan = 0
Perkalian = 10000
Pembagian = 1

##### Output 1

contoh :
![Screenshot Output Unguided 1_1](https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided1-1.png)


penjelasan unguided 1

### Penjelasan Soal 1

Program digunakan untuk melakukan **empat operasi aritmatika**, yaitu penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan bertipe `float`. Kedua bilangan dimasukkan oleh pengguna melalui `cin`, kemudian hasil dari setiap operasi dihitung dan ditampilkan menggunakan `cout`. Variabel bertipe `float` digunakan agar program dapat mengolah bilangan yang memiliki nilai desimal.


### 2. (isi dengan soal unguided 2)
Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai
angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat
positif mulai dari 0 s.d 100

```C++
source code unguided 2
```
#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan",
        "sepuluh", "sebelas"
    };

    if (angka >= 0 && angka <= 11) {
        cout << satuan[angka] << endl;
    }
    else if (angka < 20) {
        cout << satuan[angka - 10] << " belas" << endl;
    }
    else if (angka < 100) {
        cout << satuan[angka / 10] << " puluh";

        if (angka % 10 != 0) {
            cout << " " << satuan[angka % 10];
        }

        cout << endl;
    }
    else if (angka == 100) {
        cout << "seratus" << endl;
    }
    else {
        cout << "Angka tidak valid" << endl;
    }

    return 0;
}

### Output Unguided 2 :
Masukkan angka (0-100): 20 
dua puluh

##### Output 1

contoh :
![Screenshot Output Unguided 2_1](https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided2-1.png)


penjelasan unguided 2
### Penjelasan Soal 2

Program digunakan untuk **mengubah bilangan yang dimasukkan pengguna menjadi bentuk tulisan dalam bahasa Indonesia**. Program menerima input bilangan dari **0 sampai 100**, kemudian menggunakan percabangan `if-else` untuk menentukan bentuk tulisan yang sesuai. Bilangan satuan, belasan, puluhan, hingga `100` diproses dengan aturan yang berbeda, kemudian hasilnya ditampilkan menggunakan `cout`.


### 3. (isi dengan soal unguided 3)
Buatlah program yang dapat memberikan input dan output sbb.

```C++
source code unguided 3
```
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;

    for (int i = n; i >= 1; i--) {

        for (int j = n; j > i; j--) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "*";

        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }

        cout << endl;
    }

    return 0;
}

### Output Unguided 3 :
Input: 3
Output:
3 2 1 * 1 2 3
  2 1 * 1 2
    1 * 1
##### Output 1

contoh :
![Screenshot Output Unguided 3_1] (https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided2-1.png)

penjelasan unguided 3
### Penjelasan Soal 3

Program digunakan untuk **membuat pola angka berbentuk mirror** berdasarkan angka yang dimasukkan oleh pengguna. Program menggunakan perulangan `for` untuk mengatur jumlah baris, posisi spasi, serta angka yang ditampilkan pada setiap baris. Pada setiap baris, angka ditampilkan dari nilai tertentu menuju `1`, kemudian karakter `*`, dan dilanjutkan dengan angka secara berurutan sehingga membentuk pola seperti pada soal.


## Kesimpulan
Berdasarkan praktikum Modul 1, dapat disimpulkan bahwa bahasa pemrograman C++ dapat digunakan untuk mengimplementasikan algoritma dalam menyelesaikan berbagai permasalahan. Pada praktikum ini dipelajari dasar-dasar pemrograman C++, seperti penggunaan variabel dan tipe data, operator, input dan output, percabangan if-else dan switch-case, perulangan for, while, dan do-while, struct, array, serta fungsi. Selain itu, praktikum juga memberikan pemahaman mengenai penggunaan operator increment dan implementasi fungsi untuk melakukan proses tertentu. Melalui latihan yang dilakukan, konsep-konsep dasar tersebut dapat diterapkan dalam pembuatan program dan menghasilkan output sesuai dengan proses yang telah ditentukan.
...

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>
[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br> 
[3] Munir, R. (2016). Algoritma dan Pemrograman dalam Bahasa Pascal, C, dan C++ (Edisi Keenam). Bandung: Informatika.
<br> 
[4] Kadir, A., & Heriyanto. (2005). Algoritma Pemrograman Menggunakan C++. Yogyakarta: Andi Publisher.
<br> 
[5] Sanders, P., Mehlhorn, K., Dietzfelbinger, M., & Dementiev, R. (2019). Sequential and Parallel Algorithms and Data Structures: The Basic Toolbox. Springer. DOI: 10.1007/978-3-030-25209-0