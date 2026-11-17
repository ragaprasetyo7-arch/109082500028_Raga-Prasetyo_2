# <h1 align="center">Laporan Praktikum Modul 7 - STACK
 </h1>

<p align="center">Raga Prasetyo - 109082500028</p>

1. Pengertian Stack
Stack merupakan salah satu struktur data linear yang menggunakan prinsip LIFO (Last In First Out), yaitu elemen yang terakhir dimasukkan akan menjadi elemen pertama yang dikeluarkan. Struktur data ini hanya memungkinkan proses penambahan dan penghapusan elemen melalui satu bagian yang disebut TOP. Konsep Stack dapat dianalogikan dengan tumpukan piring, ketika piring terakhir yang diletakkan di bagian atas akan menjadi piring pertama yang diambil. Prinsip tersebut membuat Stack banyak digunakan dalam pengelolaan data yang membutuhkan urutan pemrosesan tertentu [1].

2. Komponen dan Karakteristik Stack
Stack memiliki komponen utama berupa TOP yang berfungsi menunjukkan posisi elemen paling atas. Pada implementasi menggunakan ARRAY, Stack disimpan dalam sekumpulan elemen yang memiliki indeks tertentu dan kapasitas maksimal yang telah ditentukan. Variabel TOP digunakan untuk mengetahui posisi elemen terakhir yang dimasukkan ke dalam Stack.

Karakteristik utama Stack adalah hanya elemen yang berada pada posisi TOP yang dapat diakses secara langsung melalui operasi penambahan dan penghapusan. Selain itu, implementasi menggunakan ARRAY memiliki kapasitas terbatas sehingga perlu dilakukan pemeriksaan kondisi kosong (underflow) dan penuh (overflow) sebelum menjalankan operasi tertentu [1][2].

3. Operasi Dasar pada Stack
Operasi dasar pada Stack terdiri dari beberapa fungsi yang digunakan untuk mengelola elemen di dalamnya. Operasi tersebut meliputi createStack(), push(), pop(), isEmpty(), dan printInfo(). Fungsi createStack() digunakan untuk menginisialisasi Stack dalam kondisi kosong, sedangkan push() digunakan untuk menambahkan elemen baru ke posisi TOP.

Operasi pop() digunakan untuk mengambil atau menghapus elemen yang berada pada posisi TOP. Sementara itu, isEmpty() berfungsi memeriksa apakah Stack tidak memiliki elemen, dan printInfo() digunakan untuk menampilkan seluruh elemen yang tersimpan. Pada implementasi ARRAY, operasi PUSH dan POP umumnya memiliki kompleksitas waktu O(1) karena hanya melibatkan perubahan indeks TOP dan akses terhadap satu elemen [1][3].

4. Implementasi Stack Menggunakan ARRAY
Implementasi Stack menggunakan ARRAY dilakukan dengan menyediakan sejumlah ruang penyimpanan yang memiliki kapasitas tetap. Setiap elemen disimpan berdasarkan indeks ARRAY, sedangkan variabel TOP digunakan sebagai penanda posisi elemen paling atas. Ketika Stack dibuat, TOP diinisialisasi dengan nilai -1 untuk menunjukkan bahwa belum terdapat elemen di dalamnya.

Pada proses penambahan data, nilai TOP akan bertambah satu sebelum elemen baru ditempatkan pada indeks tersebut. Sebaliknya, ketika elemen dihapus menggunakan POP, nilai TOP akan dikurangi satu sehingga posisi elemen sebelumnya menjadi TOP yang baru. Implementasi ini memiliki kelebihan berupa akses data yang sederhana dan efisien, tetapi kapasitas penyimpanannya terbatas sesuai ukuran ARRAY yang telah ditentukan [2][3].

5. Membalik Urutan Elemen Stack
Pembalikan urutan elemen Stack merupakan proses mengubah susunan data sehingga elemen yang sebelumnya berada di posisi paling atas berpindah ke posisi paling bawah, begitu pula sebaliknya. Proses ini dapat dilakukan dengan memanfaatkan Stack sementara sebagai tempat penyimpanan data.

Dalam implementasinya, setiap elemen dari Stack awal dikeluarkan menggunakan operasi POP, kemudian dimasukkan kembali ke Stack sementara menggunakan PUSH. Karena Stack menerapkan prinsip LIFO, proses pemindahan tersebut akan menghasilkan urutan elemen yang berlawanan dengan susunan sebelumnya. Teknik ini dapat digunakan untuk memahami penerapan prinsip LIFO dalam manipulasi urutan data [1].

6. Pengurutan Data Menggunakan pushAscending()
Pengurutan data menggunakan prosedur pushAscending() merupakan pengembangan dari operasi PUSH yang memungkinkan elemen baru dimasukkan dengan mempertahankan urutan tertentu. Berbeda dengan PUSH biasa yang langsung menempatkan data pada posisi TOP, prosedur ini perlu memeriksa elemen yang telah tersimpan sebelum menentukan posisi penyisipan.

Pada implementasi Stack dengan TOP berada pada indeks terakhir ARRAY, elemen dapat digeser untuk memberikan ruang bagi data baru. Dengan demikian, data dapat disusun secara ascending dari bagian bawah menuju TOP. Apabila data ditampilkan dari TOP ke bawah, hasilnya akan terlihat dalam urutan descending. Teknik ini menunjukkan bahwa operasi penyisipan Stack dapat dikembangkan untuk mempertahankan susunan data tertentu [1][2].
7. Penggunaan Input Stream pada Stack
Input stream merupakan mekanisme untuk menerima data dari masukan pengguna melalui aliran karakter. Dalam bahasa C++, fungsi cin.get() dapat digunakan untuk membaca karakter satu per satu, termasuk karakter spasi dan karakter newline. Hal ini berbeda dengan operator cin biasa yang umumnya melewati karakter whitespace ketika membaca input bertipe tertentu.

Pada implementasi Stack, input stream dapat dimanfaatkan untuk membaca setiap karakter yang dimasukkan pengguna dan menyimpannya ke dalam Stack. Proses pembacaan dapat dihentikan ketika pengguna menekan tombol Enter yang direpresentasikan dengan karakter '\n'. Setiap karakter yang diterima kemudian dimasukkan menggunakan operasi PUSH sehingga urutan input dapat dikelola berdasarkan prinsip LIFO [4][5].

8. Kelebihan dan Kekurangan Stack Menggunakan ARRAY
Implementasi Stack menggunakan ARRAY memiliki kelebihan berupa struktur penyimpanan yang sederhana, penggunaan memori yang terorganisasi, serta proses penambahan dan penghapusan elemen yang relatif cepat. Selain itu, akses terhadap elemen dapat dilakukan melalui indeks ARRAY sehingga pengelolaan posisi TOP menjadi lebih mudah.

Namun, implementasi ini memiliki keterbatasan kapasitas karena ukuran ARRAY ditentukan sejak awal. Apabila seluruh ruang penyimpanan telah digunakan, elemen baru tidak dapat ditambahkan sebelum terdapat ruang yang tersedia. Oleh karena itu, pemeriksaan kondisi Stack penuh dan Stack kosong diperlukan untuk menjaga agar operasi yang dilakukan tidak menyebabkan kesalahan pengaksesan data [2][3].

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

## Guided 1

### 1. ...

```C++
source code stack.h
#ifndef STACK_TABLE
#define STACK_TABLE
#include <iostream>
using namespace std;
const int MAX = 10;

struct stackTable
{
    int data[MAX];
    int top;
};
bool isEmpty(stackTable s);
bool isFull(stackTable s);
void createStack(stackTable &s);
void push(stackTable &s, int angka);
void pop(stackTable &s);
void update(stackTable &s, int posisi);
void view(stackTable s);
void searchData(stackTable s, int data);
#endif
```

penjelasan singkat stack.h
File tersebut merupakan `stack.h`, yaitu file header yang digunakan untuk mendefinisikan struktur data Stack berbasis ARRAY dengan kapasitas maksimal 10 elemen. Di dalamnya terdapat konstanta `MAX` yang menentukan jumlah maksimal data yang dapat disimpan serta struktur `stackTable` yang memiliki ARRAY `data` bertipe integer sebagai tempat penyimpanan elemen dan variabel `top` sebagai penanda posisi elemen paling atas. File ini juga berisi deklarasi beberapa fungsi yang digunakan untuk mengelola Stack, yaitu `isEmpty()` untuk memeriksa kondisi Stack kosong, `isFull()` untuk memeriksa kondisi Stack penuh, `createStack()` untuk menginisialisasi Stack, `push()` untuk menambahkan data, `pop()` untuk menghapus data paling atas, `update()` untuk mengubah data berdasarkan posisi, `view()` untuk menampilkan seluruh isi Stack, dan `searchData()` untuk mencari data tertentu. Selain itu, penggunaan `#ifndef`, `#define`, dan `#endif` berfungsi sebagai *include guard* untuk mencegah file header diproses berulang kali ketika disertakan dalam beberapa file program. Dengan demikian, file `stack.h` menjadi penghubung antara file utama `main.cpp` dan file implementasi `stack.cpp` agar seluruh fungsi Stack dapat dikenali dan digunakan dalam program.

### 2. ...

```C++
source code stack.cpp
#include "stack.h"
#include <iostream>
using namespace std;

bool isEmpty(stackTable s)
{
    return s.top == -1;
}
bool isFull(stackTable s)
{
    return s.top == MAX - 1;
}
void createStack(stackTable &s)
{
    s.top = -1;
}
void push(stackTable &s, int angka)
{

    if (isFull(s))
    {
        cout << "Stack penuh!" << endl;
    }
    else
    {
        s.top++;
        s.data[s.top] = angka;
        cout << "Data" << angka << "berhasil ditambahkan kedalam stack !" << endl;
    }
}

void pop(stackTable &s)
{
    if (isEmpty(s))
    {
        cout << "Stack kosong!" << endl;
    }
    else
    {
        int val = s.data[s.top];
        s.top--;
        cout << "Data" << val << " berhasil dihapus dari stack!" << endl;
    }
}

void update(stackTable &s, int posisi)
{
    if (isEmpty(s))
    {
        cout << "Stack kosong!" << endl;
    }
    if (posisi <= 0)
    {
        cout << "Posisi tidak valid!" << endl;
        return;
    }
    // index = top

    int idx = s.top - (posisi - 1);
    if (idx < 0 || idx > s.top)
    {
        cout << "Posisi " << posisi << " tidak valid!" << endl;
        return;
    }

    cout << "Update data posisi ke-" << posisi << endl;
    cout << "Masukkan angka : ";
    cin >> s.data[idx];
    cout << "Data berhasil diupdate!" << endl;
    cout << endl;
}

void view(stackTable s)
{
    if (isEmpty(s))
    {
        cout << "Stack kosong!" << endl;
    }
    else
    {
        for (int i = s.top; i >= 0; --i)
        {
            cout << s.data[i] << " ";
        }
    }
    cout << endl;
}

void searchData(stackTable s, int data)
{
    if (isEmpty(s))
    {
        cout << "Stack kosong!" << endl;
        return;
    }

    cout << "Mencari data " << data << "..." << endl;
    int posisi = 1;
    bool found = false;

    for (int i = s.top; i >= 0; --i)
    {
        if (s.data[i] == data)
        {
            cout << "Data " << data << " ditemukan pada posisi ke-" << posisi << endl;
            cout << endl;
            found = true;
            break;
        }
        posisi++;
    }

    if (!found)
    {
        cout << "Data " << data << " tidak ditemukan didalam stack!" << endl;
        cout << endl;
    }
}

penjelasan singkat stack.cpp
Program tersebut merupakan implementasi struktur data Stack menggunakan ARRAY dengan kapasitas maksimal 10 elemen. Program menerapkan prinsip LIFO (*Last In First Out*), yaitu data yang terakhir dimasukkan akan menjadi data pertama yang dikeluarkan. Variabel `top` digunakan untuk menunjukkan posisi elemen paling atas, sedangkan ARRAY `data` berfungsi sebagai tempat penyimpanan elemen bertipe integer. Program memiliki beberapa fungsi utama, yaitu `createStack()` untuk menginisialisasi Stack dalam keadaan kosong, `isEmpty()` untuk memeriksa apakah Stack kosong, dan `isFull()` untuk memeriksa apakah kapasitas Stack sudah penuh. Fungsi `push()` digunakan untuk menambahkan data ke posisi paling atas Stack, sedangkan `pop()` digunakan untuk menghapus elemen yang berada pada posisi tersebut. Selain itu, fungsi `update()` digunakan untuk mengubah nilai data berdasarkan posisi yang ditentukan, `view()` untuk menampilkan seluruh isi Stack mulai dari elemen paling atas hingga paling bawah, serta `searchData()` untuk mencari data tertentu dan menampilkan posisi apabila data berhasil ditemukan. Melalui implementasi tersebut, pengguna dapat memahami proses pengelolaan data menggunakan struktur Stack berbasis ARRAY beserta penerapan operasi penambahan, penghapusan, perubahan, penampilan, dan pencarian data.
### 3. ...

```C++
source code main.cpp
```
#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
    stackTable s;
    createStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    cout << endl;

    cout << "--- Stack setelah push ---" << endl;
    view(s);
    cout << endl;

    pop(s);
    pop(s);
    cout << endl;

    cout << "--- Stack setelah pop 2 kali ---" << endl;
    view(s);
    cout << endl;

    update(s, 2);
    update(s, 1);
    cout << endl;

    cout << "--- Stack setelah update ---" << endl;
    view(s);
    cout << endl;

    searchData(s, 4);
    searchData(s, 9);

    return 0;
}


penjelasan singkat main.cpp
Program `main.cpp` tersebut merupakan program utama yang digunakan untuk menguji penerapan struktur data Stack menggunakan ARRAY. Program diawali dengan mendeklarasikan variabel `stackTable s` dan memanggil fungsi `createStack()` untuk menginisialisasi Stack dalam keadaan kosong. Selanjutnya, fungsi `push()` dipanggil sebanyak lima kali untuk memasukkan data berupa angka 1, 2, 3, 4, dan 5 ke dalam Stack. Setelah itu, fungsi `view()` digunakan untuk menampilkan seluruh data yang telah dimasukkan. Program kemudian menjalankan fungsi `pop()` sebanyak dua kali untuk menghapus dua elemen teratas, yaitu angka 5 dan 4, kemudian menampilkan kembali isi Stack menggunakan fungsi `view()`. Berikutnya, fungsi `update()` dipanggil untuk mengubah nilai data pada posisi kedua dan pertama dari bagian TOP Stack, sehingga pengguna dapat melihat perubahan elemen secara langsung. Pada bagian akhir, fungsi `searchData()` digunakan untuk mencari angka 4 dan 9 guna mengetahui apakah kedua data tersebut terdapat di dalam Stack. Melalui program ini, pengguna dapat memahami penerapan operasi dasar Stack, mulai dari inisialisasi, penambahan, penghapusan, perubahan, penampilan, hingga pencarian data dengan menggunakan prinsip LIFO (*Last In First Out*). makanan berjalan dalam program.

## Guided 2

### 1. ...
```C++

#ifndef STACK_H
#define STACK_H
#define Nil NULL

#include <iostream>
using namespace std;

typedef struct node *address;

struct node
{
    int dataAngka;
    address next;
};

struct stack
{
    address top;
};

bool isEmpty(stack listStack);
void createStack(stack &listStack);
address alokasi(int angka);
void dealokasi(address &node);

void push(stack &listStack, address nodeBaru);
void pop(stack &listStack);
void update(stack &listStack, int posisi);
void view(stack listStack);
void searchData(stack listStack, int data);

#endif

penjelasan singkat stack.h
File stack.h berfungsi sebagai header yang berisi deklarasi struktur data dan fungsi-fungsi yang digunakan dalam implementasi Stack menggunakan Linked List. Pada bagian awal, #ifndef STACK_H, #define STACK_H, dan #endif merupakan include guard yang mencegah file header dimuat lebih dari satu kali. #define Nil NULL digunakan untuk merepresentasikan pointer kosong. Selanjutnya, typedef struct node *address mendefinisikan address sebagai pointer yang menunjuk ke struktur node. Struktur node memiliki atribut dataAngka untuk menyimpan nilai integer dan next untuk menunjuk ke node berikutnya. Kemudian, struktur stack memiliki atribut top yang berfungsi sebagai penunjuk ke node paling atas dalam Stack. File ini juga mendeklarasikan beberapa fungsi, yaitu isEmpty() untuk memeriksa apakah Stack kosong, createStack() untuk menginisialisasi Stack, alokasi() untuk membuat node baru, dealokasi() untuk menghapus node dari memori, push() untuk menambahkan data, pop() untuk menghapus data teratas, update() untuk mengubah data berdasarkan posisi, view() untuk menampilkan seluruh isi Stack, dan searchData() untuk mencari data tertentu. Seluruh deklarasi tersebut nantinya akan diimplementasikan dalam file stack.cpp dan dipanggil melalui main.cpp.

### 2. ...

```C++
source code stack.cpp
#include "stack.h"
#include <iostream>

using namespace std;

bool isEmpty(stack listStack)
{
    if (listStack.top == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void createStack(stack &listStack)
{
    listStack.top = Nil;
}

address alokasi(int angka)
{
    address nodeBaru = new node;
    nodeBaru->dataAngka = angka;
    nodeBaru->next = Nil;
    return nodeBaru;
}

void dealokasi(address &node)
{
    node->next = Nil;
    delete node;
}

void push(stack &listStack, address nodeBaru)
{
    nodeBaru->next = listStack.top;
    listStack.top = nodeBaru;
    cout << "Node " << nodeBaru->dataAngka << " berhasil ditambahkan kedalam stack!" << endl;
}

void pop(stack &listStack)
{
    address nodeHapus;
    if (isEmpty(listStack) == true)
    {
        cout << "Stack kosong!" << endl;
    }
    else
    {
        nodeHapus = listStack.top;
        listStack.top = listStack.top->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
        cout << "node " << nodeHapus->dataAngka << " berhasil dihapus dari stack!" << endl;
    }
}

void update(stack &listStack, int posisi)
{
    if (isEmpty(listStack) == true)
    {
        cout << "Stack kosong!" << endl;
    }
    else
    {
        if (posisi == 0)
        {
            cout << "Posisi tidak valid!" << endl;
        }
        else
        {
            address nodeBantu = listStack.top;
            int count = 1;
            bool found = false;
            while (nodeBantu != Nil)
            {
                if (count < posisi)
                {
                    nodeBantu = nodeBantu->next;
                    count++;
                }
                else if (count == posisi)
                {
                    cout << "Update node poisisi ke-" << posisi << endl;
                    cout << "Masukkan angka : ";
                    cin >> nodeBantu->dataAngka;
                    cout << "Data berhasil diupdate!" << endl;
                    cout << endl;
                    found = true;
                    break;
                }
            }
            if (found == false)
            {
                cout << "Posisi " << posisi << " tidak valid!" << endl;
            }
        }
    }
}

void view(stack listStack)
{
    if (isEmpty(listStack) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = listStack.top;
        while (nodeBantu != Nil)
        {
            cout << nodeBantu->dataAngka << " ";
            nodeBantu = nodeBantu->next;
        }
    }
    cout << endl;
}

void searchData(stack listStack, int data)
{
    if (isEmpty(listStack) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = listStack.top;
        int posisi = 1;
        bool found = false;
        cout << "Mencari data " << data << "..." << endl;
        while (nodeBantu != Nil)
        {
            if (nodeBantu->dataAngka == data)
            {
                cout << "Data " << data << " ditemukan pada posisi ke-" << posisi << endl;
                found = true;
                cout << endl;
                break;
            }
            else
            {
                posisi++;
                nodeBantu = nodeBantu->next;
            }
        }
        if (found == false)
        {
            cout << "Data " << data << " tidak ditemukan didalam stack!" << endl;
            cout << endl;
        }
    }
}

penjelasan singkat stack.cpp
File stack.cpp berfungsi untuk mengimplementasikan seluruh fungsi Stack yang sebelumnya telah dideklarasikan pada file stack.h. Fungsi isEmpty() digunakan untuk memeriksa apakah Stack kosong dengan mengecek apakah pointer top bernilai Nil atau NULL, sedangkan createStack() digunakan untuk menginisialisasi Stack dengan mengatur top menjadi Nil. Fungsi alokasi() bertugas membuat node baru menggunakan new, mengisi atribut dataAngka dengan nilai yang diberikan, serta mengatur pointer next menjadi Nil. Sebaliknya, fungsi dealokasi() digunakan untuk menghapus node dari memori menggunakan delete. Fungsi push() digunakan untuk menambahkan node baru ke bagian paling atas Stack dengan menghubungkan pointer next node baru ke node yang sebelumnya berada di posisi top, kemudian memperbarui top agar menunjuk ke node baru. Fungsi pop() digunakan untuk menghapus node teratas dengan memindahkan pointer top ke node berikutnya, kemudian menghapus node lama melalui fungsi dealokasi(). Fungsi update() digunakan untuk mengubah nilai data berdasarkan posisi node yang dihitung mulai dari bagian paling atas Stack, dengan bantuan pointer sementara nodeBantu dan variabel count. Fungsi view() digunakan untuk menampilkan seluruh data dalam Stack dengan menelusuri setiap node mulai dari top hingga mencapai Nil. Terakhir, fungsi searchData() digunakan untuk mencari nilai tertentu dengan memeriksa data pada setiap node dan menampilkan posisi data apabila ditemukan. Seluruh fungsi tersebut menerapkan prinsip LIFO (Last In, First Out), yaitu data yang terakhir dimasukkan akan menjadi data pertama yang dikeluarkan.

### 3. ...

```C++
source code main.cpp
```
#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
    stack listStack;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createStack(listStack);

    nodeA = alokasi(1);
    nodeB = alokasi(2);
    nodeC = alokasi(3);
    nodeD = alokasi(4);
    nodeE = alokasi(5);

    push(listStack, nodeA);
    push(listStack, nodeB);
    push(listStack, nodeC);
    push(listStack, nodeD);
    push(listStack, nodeE);
    cout << endl;

    cout << "--- Stack setelah push ---" << endl;
    view(listStack);
    cout << endl;

    pop(listStack);
    pop(listStack);
    cout << endl;

    cout << "--- Stack setelah pop 2 kali ---" << endl;
    view(listStack);
    cout << endl;

    update(listStack, 2);
    update(listStack, 1);
    update(listStack, 4);
    cout << endl;

    cout << "--- Stack setelah update ---" << endl;
    view(listStack);
    cout << endl;

    searchData(listStack, 4);
    searchData(listStack, 9);

    return 0;
}

penjelasan singkat main.cpp
File main.cpp berfungsi sebagai program utama yang mengatur jalannya operasi Stack menggunakan struktur data Linked List. Pada awal program, dibuat variabel listStack sebagai objek Stack serta lima pointer node, yaitu nodeA, nodeB, nodeC, nodeD, dan nodeE yang masing-masing akan digunakan untuk menyimpan data. Fungsi createStack() dipanggil untuk menginisialisasi Stack dalam keadaan kosong. Selanjutnya, fungsi alokasi() digunakan untuk membuat lima node baru yang berisi angka 1 sampai 5. Kelima node tersebut kemudian dimasukkan ke dalam Stack menggunakan fungsi push(), sehingga angka 5 menjadi data paling atas karena menggunakan prinsip LIFO. Setelah itu, fungsi view() dipanggil untuk menampilkan seluruh isi Stack. Program kemudian menjalankan fungsi pop() sebanyak dua kali untuk menghapus dua node teratas, yaitu angka 5 dan 4. Setelah penghapusan, fungsi view() kembali dipanggil untuk menampilkan data yang masih tersimpan. Berikutnya, fungsi update() dijalankan pada posisi 2, 1, dan 4 untuk mengubah nilai data berdasarkan urutan posisi dari bagian paling atas Stack. Jika posisi yang dimasukkan tidak tersedia, program akan menampilkan pesan bahwa posisi tersebut tidak valid. Setelah proses pembaruan selesai, fungsi view() digunakan kembali untuk menampilkan isi Stack terbaru. Terakhir, fungsi searchData() dijalankan untuk mencari angka 4 dan 9 di dalam Stack, kemudian program menampilkan informasi apakah data tersebut ditemukan atau tidak. Setelah seluruh operasi selesai dijalankan, program diakhiri dengan return 0.


## Unguided

### 1. ADT STACK ARRAY
 1) Buatlah ADT Stack menggunakan ARRAY sebagai berikut di dalam file “stack.h”: 
 2) Tambahkan prosedur pushAscending( in/out S : Stack, in x : integer) 
 3) Tambahkan prosedur getInputStream( in/out S : Stack ). Prosedur akan terus membaca dan  menerima input user dan memasukkan setiap input ke dalam stack hingga user menekan  tombol enter. Contoh: gunakan cin.get() untuk mendapatkan inputan user. 

```C++
source code stack.h

#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#define Nil -1
#define MAX 20

typedef int infotype;

struct stack
{
    infotype info[MAX];
    int top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);

void push(stack &S, infotype x);
infotype pop(stack &S);

void printInfo(stack S);
void balikStack(stack &S);

void pushAscending(stack &S, infotype x);
void getInputStream(stack &S);

#endif

### Output Unguided 1 :

##### Output 1

contoh :
![Screenshot Output Unguided 1_1]


penjelasan unguided 1

### Penjelasan stack.h
File stack.h berfungsi sebagai header yang berisi deklarasi struktur data dan fungsi-fungsi yang digunakan dalam implementasi Stack menggunakan Array. Pada bagian awal, #ifndef STACK_H, #define STACK_H, dan #endif merupakan include guard yang mencegah file header dimuat lebih dari satu kali. Selanjutnya, #define Nil -1 digunakan sebagai penanda bahwa Stack berada dalam kondisi kosong, sedangkan #define MAX 20 menentukan kapasitas maksimum Stack sebanyak 20 elemen. Tipe data infotype didefinisikan sebagai int untuk menentukan jenis data yang disimpan. Struktur stack memiliki array info[MAX] untuk menampung elemen Stack dan variabel top untuk menunjukkan posisi elemen paling atas. File ini juga mendeklarasikan beberapa fungsi, yaitu createStack() untuk menginisialisasi Stack, isEmpty() untuk memeriksa apakah Stack kosong, isFull() untuk memeriksa apakah Stack penuh, push() untuk menambahkan elemen ke dalam Stack, dan pop() untuk menghapus sekaligus mengembalikan elemen teratas. Selain itu, terdapat fungsi printInfo() untuk menampilkan isi Stack, balikStack() untuk membalik urutan elemen Stack, pushAscending() untuk menambahkan elemen dengan urutan menaik, serta getInputStream() untuk menerima dan memproses input data ke dalam Stack. Seluruh fungsi tersebut nantinya akan diimplementasikan pada file stack.cpp dan dijalankan melalui file main.cpp.


### 2. stack.cpp
```C++
source code stack.cpp
```

#include "stack.h"

void createStack(stack &S)
{
    S.top = Nil;
}

bool isEmpty(stack S)
{
    return S.top == Nil;
}

bool isFull(stack S)
{
    return S.top == MAX - 1;
}

void push(stack &S, infotype x)
{
    if (isFull(S))
    {
        cout << "Stack penuh!" << endl;
    }
    else
    {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop(stack &S)
{
    if (isEmpty(S))
    {
        cout << "Stack kosong!" << endl;
        return Nil;
    }

    infotype x = S.info[S.top];
    S.top--;

    return x;
}

void printInfo(stack S)
{
    if (isEmpty(S))
    {
        cout << "Stack kosong!" << endl;
    }
    else
    {
        cout << "[TOP] ";

        for (int i = S.top; i >= 0; i--)
        {
            cout << S.info[i] << " ";
        }

        cout << endl;
    }
}

void balikStack(stack &S)
{
    stack temp;
    createStack(temp);

    while (!isEmpty(S))
    {
        push(temp, pop(S));
    }

    S = temp;
}

void pushAscending(stack &S, infotype x)
{
    if (isFull(S))
    {
        cout << "Stack penuh!" << endl;
    }
    else
    {
        int i = S.top;

        while (i >= 0 && S.info[i] > x)
        {
            S.info[i + 1] = S.info[i];
            i--;
        }

        S.info[i + 1] = x;
        S.top++;
    }
}

void getInputStream(stack &S)
{
    char input;

    cout << "Masukkan angka (tekan Enter untuk selesai): ";

    while (cin.get(input) && input != '\n')
    {
        if (input >= '0' && input <= '9')
        {
            push(S, input - '0');
        }
    }
}


### Output Unguided 2 :

##### Output 1

contoh :
![Screenshot Output Unguided 2_1]


penjelasan stack.cpp
### Penjelasan stack.cpp
File stack.cpp berfungsi untuk mengimplementasikan operasi Stack menggunakan Array dengan kapasitas maksimum 20 elemen. Fungsi createStack() digunakan untuk menginisialisasi Stack dengan mengatur nilai top menjadi Nil atau -1, sedangkan fungsi isEmpty() digunakan untuk memeriksa apakah Stack kosong dengan membandingkan nilai top terhadap Nil. Fungsi isFull() digunakan untuk memeriksa apakah Stack sudah mencapai kapasitas maksimum. Selanjutnya, fungsi push() digunakan untuk menambahkan elemen baru ke dalam Stack dengan menaikkan nilai top dan menyimpan data pada indeks tersebut, sedangkan fungsi pop() digunakan untuk mengambil sekaligus menghapus elemen paling atas dengan menyimpan nilainya terlebih dahulu, kemudian mengurangi nilai top. Fungsi printInfo() digunakan untuk menampilkan seluruh isi Stack dimulai dari elemen paling atas hingga elemen paling bawah. Fungsi balikStack() digunakan untuk membalik urutan elemen Stack dengan memanfaatkan Stack sementara (temp), yaitu dengan memindahkan seluruh elemen dari Stack awal ke Stack sementara, kemudian menggantikan isi Stack awal dengan Stack sementara. Fungsi pushAscending() digunakan untuk menambahkan elemen dengan mempertahankan urutan data secara menaik. Prosesnya dilakukan dengan menggeser elemen yang lebih besar ke posisi berikutnya hingga ditemukan posisi yang sesuai untuk memasukkan data baru. Terakhir, fungsi getInputStream() digunakan untuk menerima input angka satu digit melalui keyboard menggunakan cin.get(). Setiap karakter yang dimasukkan akan diperiksa terlebih dahulu, kemudian hanya karakter angka dari 0 sampai 9 yang dikonversi menjadi integer dan dimasukkan ke dalam Stack menggunakan fungsi push(). Proses input akan berhenti ketika pengguna menekan tombol Enter.


### 3. main.cpp

```C++
source code main.cpp
```

#include "stack.h"

int main()
{
    stack S;
    int pilihan, angka;

    createStack(S);

    do
    {
        cout << "\n===== PROGRAM STACK =====" << endl;
        cout << "1. Latihan Stack Dasar" << endl;
        cout << "2. Push Ascending" << endl;
        cout << "3. Get Input Stream" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            createStack(S);

            push(S, 3);
            push(S, 4);
            push(S, 8);
            pop(S);
            push(S, 2);
            push(S, 5);
            pop(S);
            push(S, 3);

            cout << "\nIsi Stack:" << endl;
            printInfo(S);

            cout << "Balik Stack:" << endl;
            balikStack(S);
            printInfo(S);
            break;

        case 2:
            createStack(S);

            pushAscending(S, 3);
            pushAscending(S, 4);
            pushAscending(S, 8);
            pushAscending(S, 2);
            pushAscending(S, 3);
            pushAscending(S, 9);

            cout << "\nIsi Stack Ascending:" << endl;
            printInfo(S);

            cout << "Balik Stack:" << endl;
            balikStack(S);
            printInfo(S);
            break;

        case 3:
            createStack(S);

            cin.ignore();
            getInputStream(S);

            cout << "\nIsi Stack:" << endl;
            printInfo(S);

            cout << "Balik Stack:" << endl;
            balikStack(S);
            printInfo(S);
            break;

        case 4:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 4);

    return 0;
}


### Output Unguided 3 :


##### Output 1

contoh :
![Screenshot Output Unguided 3_1] (https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Modul%209/unguieded.png)

penjelasan unguided 3
### Penjelasan Soal 3
File main.cpp berfungsi sebagai program utama yang mengatur jalannya operasi Stack menggunakan Array. Pada awal program, dibuat variabel S bertipe stack untuk menampung data, serta variabel pilihan dan angka untuk menyimpan pilihan menu dan nilai integer. Fungsi createStack() dipanggil untuk menginisialisasi Stack dalam keadaan kosong. Selanjutnya, program menggunakan perulangan do-while untuk menampilkan menu yang terdiri dari empat pilihan, yaitu Latihan Stack Dasar, Push Ascending, Get Input Stream, dan Keluar. Pada pilihan pertama, Stack diinisialisasi kembali, kemudian beberapa operasi push() dan pop() dilakukan secara berurutan untuk menambahkan dan menghapus elemen. Setelah itu, fungsi printInfo() digunakan untuk menampilkan isi Stack, sedangkan fungsi balikStack() digunakan untuk membalik urutan elemen sebelum ditampilkan kembali. Pada pilihan kedua, fungsi createStack() dipanggil untuk mengosongkan Stack, kemudian fungsi pushAscending() digunakan untuk memasukkan beberapa angka, yaitu 3, 4, 8, 2, 3, dan 9, dengan tetap mempertahankan urutan data secara menaik. Isi Stack kemudian ditampilkan menggunakan printInfo(), lalu dibalik menggunakan balikStack() dan ditampilkan kembali. Pada pilihan ketiga, Stack kembali diinisialisasi dalam keadaan kosong. Perintah cin.ignore() digunakan untuk mengabaikan karakter newline yang tersisa setelah pengguna memasukkan pilihan menu, sehingga fungsi getInputStream() dapat menerima input angka hingga pengguna menekan Enter. Setelah input selesai, isi Stack ditampilkan dan urutannya dibalik menggunakan balikStack(). Sementara itu, pilihan keempat digunakan untuk mengakhiri program dengan menampilkan pesan bahwa program telah selesai. Jika pengguna memasukkan pilihan selain 1 sampai 4, program akan menampilkan pesan bahwa pilihan tidak valid. Perulangan akan terus berjalan selama pilihan yang dimasukkan bukan angka 4.



## Kesimpulan

Berdasarkan praktikum Modul 7 yang telah dilakukan, dapat disimpulkan bahwa Stack merupakan struktur data yang menerapkan prinsip LIFO (*Last In, First Out*), yaitu data yang terakhir dimasukkan akan menjadi data pertama yang dikeluarkan. Pada praktikum ini, Stack diimplementasikan menggunakan dua metode, yaitu Array dan Linked List. Implementasi menggunakan Array memiliki kapasitas penyimpanan tetap, sedangkan Linked List memungkinkan penambahan elemen secara dinamis dengan memanfaatkan node dan pointer. Melalui praktikum ini, praktikan mempelajari penerapan berbagai operasi Stack, seperti `push()` untuk menambahkan data, `pop()` untuk menghapus data, `update()` untuk mengubah data, `view()` atau `printInfo()` untuk menampilkan isi Stack, serta `searchData()` untuk mencari data tertentu. Selain itu, praktikan juga mempelajari operasi tambahan, seperti membalik urutan elemen Stack, memasukkan data secara ascending, dan menerima input menggunakan `cin.get()`. Dengan adanya praktikum ini, praktikan dapat memahami perbedaan implementasi Stack menggunakan Array dan Linked List serta meningkatkan kemampuan dalam menerapkan konsep struktur data, penggunaan pointer, dan pengelolaan data menggunakan bahasa pemrograman C++.
...

## Referensi
[1] OpenDSA Project. (Tanpa tahun). Stacks. OpenDSA Data Structures and Algorithms Modules. Diakses pada 17 November 2026 melalui https://opendsa.cs.vt.edu/ODSA/Books/fisd/cs3/fall-2020/CS3_-_Year_long_course/html/StackArray.html. 
opendsa.cs.vt.edu


[2] GeeksforGeeks. (2026). Stack Data Structure. GeeksforGeeks. Diakses pada 17 November 2026 melalui https://www.geeksforgeeks.org/dsa/stack-data-structure/. 
GeeksforGeeks


[3] GeeksforGeeks. (Tanpa tahun). Stack Using Array. GeeksforGeeks. Diakses pada 17 November 2026 melalui https://www.geeksforgeeks.org/dsa/implement-stack-using-array/. 
GeeksforGeeks


[4] cppreference.com. (Tanpa tahun). std::basic_istream::get. C++ Reference. Diakses pada 17 November 2026 melalui https://en.cppreference.com/w/cpp/io/basic_istream/get. 
Cppreference


[5] Microsoft. (2021). Input Stream Member Functions. Microsoft Learn. Diakses pada 17 November 2026 melalui https://learn.microsoft.com/en-us/cpp/standard-library/input-stream-member-functions.
