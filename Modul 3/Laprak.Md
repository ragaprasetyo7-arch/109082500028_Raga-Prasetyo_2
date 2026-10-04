# <h1 align="center">Laporan Praktikum Modul 2 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Raga Prasetyo - 109082500028</p>

## Dasar Teori

1. Hubungan Array dan Pointer

Dalam C++, array dan pointer memiliki hubungan yang erat. Nama array pada banyak konteks dapat digunakan sebagai alamat dari elemen pertama array. Sebagai contoh, arr dapat digunakan untuk menunjuk ke arr[0]. Karena itu, elemen array juga dapat diakses menggunakan operasi pointer, misalnya *(arr + 1) untuk mengakses elemen kedua.

Hubungan tersebut juga menyebabkan array dapat dikirim sebagai parameter ke sebuah fungsi. Ketika array diberikan sebagai argumen fungsi, yang diteruskan pada dasarnya adalah pointer ke elemen pertama sehingga fungsi tidak menerima salinan seluruh array. Oleh karena itu, ukuran array biasanya perlu diberikan melalui parameter tambahan.

2. Perbedaan Pointer dan Reference

Pointer merupakan variabel yang digunakan untuk menyimpan alamat suatu objek dan dapat diarahkan ke objek lain. Pointer juga dapat memiliki nilai nullptr. Sementara itu, reference merupakan alias atau nama lain untuk suatu objek. Setelah reference diinisialisasi, reference tersebut tidak dapat diarahkan untuk merujuk ke objek lain.

Contohnya:

int x = 10;

int *p = &x;
int &r = x;

Pada contoh tersebut, p menyimpan alamat dari x, sedangkan r menjadi nama lain dari x. Perubahan melalui *p maupun r akan memengaruhi nilai x.

3. Penggunaan const pada Parameter

Dalam pemrograman C++, parameter dapat menggunakan const untuk menunjukkan bahwa fungsi tidak diperbolehkan mengubah data yang diterima melalui parameter tersebut. Hal ini sangat berguna ketika fungsi hanya perlu membaca data, misalnya ketika memproses array tanpa mengubah isinya. Microsoft juga menjelaskan bahwa array yang dikirim ke fungsi tidak disalin, sehingga penggunaan parameter yang menunjuk ke data asli perlu diperhatikan agar fungsi tidak mengubah data secara tidak sengaja.

Contoh:

void tampilArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

Dengan const, fungsi hanya dapat membaca isi array dan tidak dapat mengubah elemennya melalui parameter tersebut.

4. Prinsip Fungsi yang Baik

Fungsi tidak hanya digunakan untuk memecah program menjadi beberapa bagian, tetapi juga sebaiknya dirancang agar setiap fungsi mempunyai tanggung jawab yang jelas. C++ Core Guidelines menyarankan agar operasi yang memiliki tujuan tertentu dikemas dalam fungsi dengan nama yang bermakna serta fungsi sebaiknya melakukan satu operasi logis.

Contohnya, daripada membuat satu fungsi besar untuk mengolah seluruh array, program dapat dipisahkan menjadi:

int cariMaksimum(int arr[], int n);
int cariMinimum(int arr[], int n);
void tampilArray(int arr[], int n);

Dengan cara tersebut, setiap fungsi mempunyai tugas yang lebih spesifik sehingga program lebih mudah dibaca, diuji, dan dikembangkan.

5. Pemilihan Cara Passing Parameter

Pemilihan metode passing parameter bergantung pada kebutuhan fungsi. Parameter sederhana seperti int atau double biasanya dapat dikirim berdasarkan nilai. Sementara itu, reference dapat digunakan ketika fungsi perlu bekerja langsung terhadap objek yang diberikan oleh pemanggil. Pointer dapat digunakan ketika alamat objek memang diperlukan atau ketika kondisi "tidak ada objek" perlu dapat direpresentasikan. C++ Core Guidelines juga memberikan aturan khusus mengenai penggunaan pointer dan reference berdasarkan makna parameter tersebut. 
Secara sederhana:

Metode	Yang diteruskan	Bisa mengubah data asli?
Call by Value	Salinan nilai	Tidak
Call by Pointer	Alamat	Ya
Call by Reference	Referensi/alias	Ya
6. Pointer sebagai Parameter Array

Karena array dapat mengalami pointer decay ketika dikirim ke fungsi, fungsi dapat menerima array dalam bentuk parameter pointer. Contohnya:

void tampil(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

Pada pemanggilan:

int data[5] = {10, 20, 30, 40, 50};

tampil(data, 5);

data digunakan untuk memberikan akses kepada fungsi terhadap elemen array. Ukuran array tetap diberikan melalui n karena pointer sendiri tidak membawa informasi jumlah elemen array.

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
#define MAX 5
using namespace std;

int main(){
int i,j;
float nilai_total, rata_rata;
float nilai[MAX];
static int nilai_tahun[MAX][MAX]=
{ {0,2,2,0,0},
{0,1,1,1,0},
{0,3,3,3,0},
{4,4,0,0,4},
{5,0,0,0,5}
};

/*inisialisasi array dua dimensi */
for (i=0; i<MAX; i++){
cout<<"masukkan nilai ke-"<<i+1<<endl;
cin>>nilai[i];
}
cout<<"\ndata nilai siswa :\n";
/*menampilkan array satu dimensi */
for (i=0; i<MAX; i++)
cout<<"nilai k-"<<i+1<<"=" <<nilai[i]<<endl;
cout<<"\n nilai tahunan : \n";

/* menampilkan array dua dimensi */
for(i=0; i<MAX; i++){
for(j=0; j<MAX; j++)
cout<<nilai_tahun[i][j];
cout<<"\n";
}
return 0;
}
```

penjelasan singkat guided 1

Program menggunakan array satu dimensi nilai[MAX] untuk menyimpan nilai 5 siswa yang dimasukkan oleh pengguna. Setelah itu, nilai tersebut ditampilkan kembali menggunakan perulangan for. Program juga menggunakan array dua dimensi nilai_tahun[MAX][MAX] yang berukuran 5 × 5. Data pada array tersebut sudah diinisialisasi sebelumnya, kemudian ditampilkan menggunakan perulangan for bersarang.


### 2. ...

```C++
source code guided 2
#include <iostream>
using namespace std;

int main(){
    int x, y; // x dan y bertipe int
    int *px; // px merupakan variabel pointer menunjuk ke variabel int  
    
    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x= " << &x << endl;
    cout << "Isi px= " << px << endl;
    cout << "Isi X= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;
    
    return 0;
}

penjelasan singkat guided 2

Program menggunakan variabel x dengan nilai 87 dan pointer px yang menyimpan alamat memori dari x. Perintah px = &x digunakan untuk menyimpan alamat x ke dalam pointer, sedangkan *px digunakan untuk mendapatkan nilai yang ditunjuk oleh pointer tersebut. Nilai *px kemudian disimpan ke variabel y.

### 3. ...

```C++
source code guided 3
```
#include <iostream>
using namespace std;

int maks3(int a, int b, int c);

/*mendeklarasikan prototype fungsi*/
int main() {
    int x, y, z;

    cout << "masukkan nilai bilangan ke-1 = ";
    cin >> x;

    cout << "masukkan nilai bilangan ke-2 = ";
    cin >> y;

    cout << "masukkan nilai bilangan ke-3 = ";
    cin >> z;

    cout << "nilai maksimumnya adalah = " << maks3(x, y, z) << endl;

    return 0;
}

/*badan fungsi*/
int maks3(int a, int b, int c) {

    /* deklarasi variabel lokal dalam fungsi */
    int temp_max = a;

    if (b > temp_max)
        temp_max = b;

    if (c > temp_max)
        temp_max = c;

    return temp_max;
}

penjelasan singkat guided 3
Program ini digunakan untuk menentukan nilai terbesar dari tiga bilangan yang dimasukkan oleh pengguna. Program menggunakan fungsi maks3() dengan tiga parameter, yaitu a, b, dan c. Nilai a dijadikan nilai maksimum sementara, kemudian dibandingkan dengan b dan c. Jika terdapat nilai yang lebih besar, maka temp_max akan diperbarui. Setelah proses perbandingan selesai, nilai terbesar dikembalikan menggunakan return temp_max.

### 4. ...

```C++
source code guided 4
```
#include <iostream>
using namespace std;

/*prototype fungsi*/
void tulis(int x);

int main()
{
    int jum;
    cout << "jumlah baris kata = ";
    cin >> jum;
    tulis(jum);
    return 0;
}

/*badan prosedur*/
void tulis(int x) {
    for (int i = 0; i < x; i++)
        cout << "baris ke-" << i + 1 << endl;
}

penjelasan singkat guided 4

Program meminta pengguna memasukkan jumlah baris melalui variabel jum. Nilai tersebut kemudian dikirim ke prosedur tulis() melalui parameter x. Di dalam prosedur, perulangan for digunakan untuk menampilkan tulisan baris ke- sebanyak jumlah yang telah dimasukkan.

### 5. ...

```C++
source code guided 5
```
#include <iostream>
using namespace std;

// 1. Call by Value: variabel asli TIDAK berubah
void tukarValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// 2. Call by Pointer: variabel asli IKUT berubah (pakai *)
void tukarPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 3. Call by Reference: variabel asli IKUT berubah (pakai &)
void tukarReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4, b = 6;

    // Tes Call by Value
    tukarValue(a, b);
    cout << "Setelah Call by Value    -> a = " << a << ", b = " << b << " (Tetap)" << endl;

    // Tes Call by Pointer (kirim alamatnya pakai &)
    tukarPointer(&a, &b);
    cout << "Setelah Call by Pointer  -> a = " << a << ", b = " << b << " (Berubah!)" << endl;

    // Tes Call by Reference (mengembalikan posisi semula)
    tukarReference(a, b);
    cout << "Setelah Call by Reference -> a = " << a << ", b = " << b << " (Berubah lagi!)" << endl;

    return 0;
}

penjelasan singkat guided 5

Program ini membandingkan tiga cara pengiriman parameter pada fungsi, yaitu Call by Value, Call by Pointer, dan Call by Reference. Pada Call by Value, fungsi menerima salinan nilai sehingga perubahan di dalam fungsi tidak memengaruhi variabel asli. Pada Call by Pointer, fungsi menerima alamat variabel sehingga nilai asli dapat diubah menggunakan operator *. Sedangkan pada Call by Reference, fungsi menerima referensi langsung ke variabel sehingga perubahan yang dilakukan di dalam fungsi juga mengubah variabel asli.

## Unguided

### 1. (isi dengan soal unguided 1)
Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian
matriks 3x3.
```C++
source code unguided 1
#include <iostream>
using namespace std;

#define N 3

void inputMatriks(int matriks[N][N], char nama) {
    cout << "Masukkan matriks " << nama << ":\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << nama << "[" << i << "][" << j << "] = ";
            cin >> matriks[i][j];
        }
    }
}

void tampilMatriks(int matriks[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int A[N][N], B[N][N];
    int tambah[N][N], kurang[N][N], kali[N][N];
    int pilihan;

    inputMatriks(A, 'A');
    cout << endl;

    inputMatriks(B, 'B');
    cout << endl;

    cout << "--- Menu Operasi Matriks ---" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                tambah[i][j] = A[i][j] + B[i][j];
            }
        }

        cout << "\nHasil Penjumlahan Matriks:\n";
        tampilMatriks(tambah);
    }
    else if (pilihan == 2) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                kurang[i][j] = A[i][j] - B[i][j];
            }
        }

        cout << "\nHasil Pengurangan Matriks:\n";
        tampilMatriks(kurang);
    }
    else if (pilihan == 3) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                kali[i][j] = 0;

                for (int k = 0; k < N; k++) {
                    kali[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "\nHasil Perkalian Matriks:\n";
        tampilMatriks(kali);
    }
    else {
        cout << "Pilihan tidak tersedia." << endl;
    }

    return 0;
}

### Output Unguided 1 :

Masukkan matriks A:
A[0][0] = 2
A[0][1] = 2
A[0][2] = 2
A[1][0] = 2
A[1][1] = 2
A[1][2] = 2
A[2][0] = 2
A[2][1] = 2
A[2][2] = 2

Masukkan matriks B:
B[0][0] = 3
B[0][1] = 3
B[0][2] = 3
B[1][0] = 3
B[1][1] = 3
B[1][2] = 3
B[2][0] = 3
B[2][1] = 3
B[2][2] = 3

--- Menu Operasi Matriks ---
1. Penjumlahan
2. Pengurangan
3. Perkalian
Pilihan: 3

Hasil Perkalian Matriks:
18      18      18
18      18      18
18      18      18    

Masukkan matriks A:
A[0][0] = 1
A[0][1] = 1
A[0][2] = 1
A[1][0] = 1
A[1][1] = 1
A[1][2] = 1
A[2][0] = 1
A[2][1] = 1
A[2][2] = 1

Masukkan matriks B:
B[0][0] = 3
B[0][1] = 3
B[0][2] = 3
B[1][0] = 3
B[1][1] = 3
B[1][2] = 3
B[2][0] = 3
B[2][1] = 3
B[2][2] = 3

--- Menu Operasi Matriks ---
1. Penjumlahan
2. Pengurangan
3. Perkalian
Pilihan: 2

Hasil Pengurangan Matriks:
-2      -2      -2
-2      -2      -2
-2      -2      -2

Masukkan matriks A:
A[0][0] = 3
A[0][1] = 3
A[0][2] = 3
A[1][0] = 3
A[1][1] = 3
A[1][2] = 3
A[2][0] = 3
A[2][1] = 3
A[2][2] = 3

Masukkan matriks B:
B[0][0] = 4
B[0][1] = 4
B[0][2] = 4
B[1][0] = 4
B[1][1] = 4
B[1][2] = 4
B[2][0] = 4
B[2][1] = 4
B[2][2] = 4

--- Menu Operasi Matriks ---
1. Penjumlahan
2. Pengurangan
3. Perkalian
Pilihan: 1

Hasil Penjumlahan Matriks:
7       7       7
7       7       7
7       7       7

##### Output 1

contoh :
![Screenshot Output Unguided 1_1](https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided1-1.png)


penjelasan unguided 1

### Penjelasan Soal 1

rogram ini digunakan untuk melakukan operasi penjumlahan, pengurangan, dan perkalian pada dua matriks berukuran 3×3. Program menggunakan array dua dimensi untuk menyimpan elemen matriks A dan matriks B. Pengguna terlebih dahulu memasukkan seluruh nilai dari kedua matriks, kemudian memilih operasi yang ingin dilakukan melalui menu.

Pada operasi penjumlahan dan pengurangan, setiap elemen matriks A dihitung dengan elemen matriks B yang berada pada posisi yang sama. Sedangkan pada operasi perkalian, digunakan tiga perulangan for untuk mengalikan setiap baris pada matriks A dengan setiap kolom pada matriks B. Hasil dari operasi yang dipilih kemudian ditampilkan dalam bentuk matriks 3×3. Program juga menggunakan fungsi inputMatriks() untuk memasukkan data dan tampilMatriks() untuk menampilkan hasil matriks.


### 2. (isi dengan soal unguided 2)
Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar
nilai dari 3 variabel.
```C++
source code unguided 2
```
#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukarReference(int &a, int &b, int &c) {
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a, b, c;

    cout << "Masukkan nilai a = ";
    cin >> a;

    cout << "Masukkan nilai b = ";
    cin >> b;

    cout << "Masukkan nilai c = ";
    cin >> c;

    cout << "\nNilai awal:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    tukarPointer(&a, &b, &c);

    cout << "\nSetelah Call by Pointer:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    tukarReference(a, b, c);

    cout << "\nSetelah Call by Reference:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}

### Output Unguided 2 :
Masukkan nilai a = 5
Masukkan nilai b = 3
Masukkan nilai c = 6

Nilai awal:
a = 5, b = 3, c = 6

Setelah Call by Pointer:
a = 3, b = 6, c = 5

Setelah Call by Reference:
a = 6, b = 5, c = 3

##### Output 1

contoh :
![Screenshot Output Unguided 2_1](https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided2-1.png)


penjelasan unguided 2
### Penjelasan Soal 2

Program ini digunakan untuk menukar nilai dari tiga variabel menggunakan metode pointer dan reference. Program menerima tiga nilai dari pengguna, kemudian menampilkan nilai awal sebelum dilakukan proses pertukaran.

Proses pertukaran pertama dilakukan menggunakan fungsi tukarPointer() yang menerima alamat dari ketiga variabel melalui pointer. Operator * digunakan untuk mengakses dan mengubah nilai yang berada pada alamat tersebut sehingga nilai variabel asli dapat berubah. Setelah itu, proses pertukaran dilakukan kembali menggunakan fungsi tukarReference() yang menggunakan reference sebagai parameter. Dengan reference, fungsi dapat mengakses variabel asli secara langsung tanpa menggunakan operator dereference. Pada kedua metode tersebut, nilai tiga variabel ditukar secara berurutan menggunakan variabel sementara temp.


### 3. (isi dengan soal unguided 3)
Diketahui sebuah array 1 dimensi sebagai berikut :
arrA = {48, 2, 7 , 21, 5, 20, 77, 9, 10, 1}
Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari
array tersebut! Kerjakan soal dengan ketentuan :
- Untuk mencari nilai minimum dan maksimum, harus dibuat menjadi sebuah function.
- Untuk mencari rata-rata harus dibuat menjadi sebuah procedure.
- Buat output di fungsi utama (main) untuk menampilkan nilai rata-rata yang sudah
didapatkan melalui procedure sebelumnya. (Gunakan metode pass by reference atau
pass by pointer)
- Buat menu sederhana untuk menjalankan setiap procedure
```C++
source code unguided 3
```
#include <iostream>
using namespace std;

#define N 10

int cariMaksimum(int arr[], int n) {
    int maks = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }

    return maks;
}

int cariMinimum(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

void hitungRataRata(int arr[], int n, float &rataRata) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    rataRata = (float) total / n;
}

void tampilArray(int arr[], int n) {
    cout << "Isi array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i];

        if (i < n - 1) {
            cout << ", ";
        }
    }

    cout << endl;
}

int main() {
    int arrA[N] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};

    int pilihan;
    float rataRata;

    do {
        cout << "\n--- Menu Program Array ---" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. Cari nilai maksimum" << endl;
        cout << "3. Cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata-rata" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilArray(arrA, N);
                break;

            case 2:
                cout << "Nilai maksimum = "
                     << cariMaksimum(arrA, N) << endl;
                break;

            case 3:
                cout << "Nilai minimum = "
                     << cariMinimum(arrA, N) << endl;
                break;

            case 4:
                hitungRataRata(arrA, N, rataRata);

                cout << "Nilai rata-rata = "
                     << rataRata << endl;
                break;

            case 5:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak tersedia." << endl;
        }

    } while (pilihan != 5);

    return 0;
}

### Output Unguided 3 :

--- Menu Program Array ---
1. Tampilkan isi array
2. Cari nilai maksimum
3. Cari nilai minimum
4. Hitung nilai rata-rata
5. Keluar
Pilihan: 1
Isi array: 48, 2, 7, 21, 5, 20, 77, 9, 10, 1

--- Menu Program Array ---
1. Tampilkan isi array
2. Cari nilai maksimum
3. Cari nilai minimum
4. Hitung nilai rata-rata
5. Keluar
Pilihan: 2
Nilai maksimum = 77

--- Menu Program Array ---
1. Tampilkan isi array
2. Cari nilai maksimum
3. Cari nilai minimum
4. Hitung nilai rata-rata
5. Keluar
Pilihan: 3
Nilai minimum = 1

--- Menu Program Array ---
1. Tampilkan isi array
2. Cari nilai maksimum
3. Cari nilai minimum
4. Hitung nilai rata-rata
5. Keluar
Pilihan: 4
Nilai rata-rata = 20

--- Menu Program Array ---
1. Tampilkan isi array
2. Cari nilai maksimum
3. Cari nilai minimum
4. Hitung nilai rata-rata
5. Keluar
Pilihan: 5
Program selesai.
##### Output 1

contoh :
![Screenshot Output Unguided 3_1] (https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul2/Output-Unguided2-1.png)

penjelasan unguided 3
### Penjelasan Soal 3
Program ini digunakan untuk mengolah array satu dimensi yang berisi 10 nilai, yaitu {48, 2, 7, 21, 5, 20, 77, 9, 10, 1}. Program menyediakan menu untuk menampilkan isi array, mencari nilai maksimum, mencari nilai minimum, dan menghitung nilai rata-rata.

Untuk mencari nilai maksimum digunakan function cariMaksimum(), sedangkan nilai minimum dicari menggunakan function cariMinimum(). Kedua function membandingkan setiap elemen array untuk menentukan nilai terbesar dan terkecil. Untuk menghitung rata-rata digunakan procedure hitungRataRata() yang menggunakan pass by reference melalui parameter rataRata, sehingga hasil perhitungan dapat digunakan kembali pada fungsi main(). Nilai rata-rata diperoleh dengan menjumlahkan seluruh elemen array kemudian membaginya dengan jumlah elemen. Menu program menggunakan switch-case dan perulangan do-while agar pengguna dapat menjalankan beberapa operasi sebelum memilih menu keluar.



## Kesimpulan
Berdasarkan praktikum Struktur Data Modul 2, dapat disimpulkan bahwa array, pointer, fungsi, prosedur, serta metode pelewatan parameter merupakan bagian penting dalam pemrograman C++. Array digunakan untuk menyimpan sekumpulan data dengan tipe yang sama, baik dalam bentuk satu dimensi maupun dua dimensi. Selain itu, pointer digunakan untuk menyimpan alamat memori suatu variabel sehingga nilai variabel dapat diakses melalui alamat tersebut.

Praktikum ini juga memberikan pemahaman mengenai penggunaan fungsi dan prosedur untuk membuat program menjadi lebih terstruktur serta mengurangi pengulangan kode. Perbedaan cara melewatkan parameter melalui call by value, call by pointer, dan call by reference juga dapat dipahami, terutama dalam hal perubahan nilai variabel yang digunakan dalam program.

Melalui latihan yang dilakukan, konsep-konsep tersebut dapat diterapkan untuk menyelesaikan berbagai permasalahan, seperti pengolahan array, operasi matriks, pertukaran nilai variabel, serta pencarian nilai minimum, maksimum, dan rata-rata. Dengan demikian, materi pada Modul 2 dapat menjadi dasar untuk memahami pengelolaan data dan pembuatan program yang lebih terstruktur menggunakan bahasa C++.
...

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi: STRUKTUR DATA. Medan: Universitas Islam Negeri Sumatera Utara Medan.

<br>

[2] Indahyati, Uce., Rahmawati Yunianita. (2020). BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++. Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.

<br>

[3] Munir, R. (2016). Algoritma dan Pemrograman dalam Bahasa Pascal, C, dan C++ (Edisi Keenam). Bandung: Informatika.

<br>

[4] Kadir, A., & Heriyanto. (2005). Algoritma Pemrograman Menggunakan C++. Yogyakarta: Andi Publisher.

<br>

[5] Sanders, P., Mehlhorn, K., Dietzfelbinger, M., & Dementiev, R. (2019). Sequential and Parallel Algorithms and Data Structures: The Basic Toolbox. Springer. DOI: 10.1007/978-3-030-25209-0.

<br>

[6] Microsoft. (2026). Arrays (C++). Microsoft Learn. Diakses pada 4 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/arrays-cpp.

<br>

[7] Microsoft. (2026). References (C++). Microsoft Learn. Diakses pada 4 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/references-cpp.

<br>

[8] Microsoft. (2026). Raw Pointers (C++). Microsoft Learn. Diakses pada 4 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/raw-pointers.

<br>

[9] Stroustrup, B., & Sutter, H. (eds.). (2026). C++ Core Guidelines. Diakses pada 4 Oktober 2026 melalui C++ Core Guidelines.

<br>

[10] Microsoft. (2026). Passing Arrays to Functions (C++). Microsoft Learn. Diakses pada 4 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/arrays-cpp