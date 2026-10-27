# <h1 align="center">Laporan Praktikum Modul 5 - SINGLY LINKED LIST (BAGIAN KEDUA) 
 </h1>

<p align="center">Raga Prasetyo - 109082500028</p>

1. Struktur node pada Singly Linked List

Singly Linked List merupakan struktur data linear yang setiap elemennya disimpan dalam sebuah node. Setiap node memiliki dua bagian, yaitu info untuk menyimpan data dan next untuk menunjuk ke node berikutnya. Node terakhir memiliki pointer next bernilai NULL, yang menandakan akhir dari list. 
GeeksforGeeks+1


2. Proses traversal

Traversal adalah proses mengunjungi setiap node secara berurutan, dimulai dari node pertama hingga mencapai NULL. Pada program praktikum, proses ini diterapkan pada fungsi printInfo(), yang membaca dan menampilkan nilai setiap node melalui pointer sementara. 
GeeksforGeeks+1


3. Proses searching

Searching digunakan untuk mencari node yang memiliki nilai tertentu. Pencarian dilakukan dengan memeriksa nilai setiap node, kemudian berpindah ke node berikutnya sampai nilai yang dicari ditemukan atau pointer mencapai NULL. Pada program praktikum, proses ini diterapkan melalui fungsi findElm(L, 8) untuk mencari nilai 8. 
GeeksforGeeks+1


4. Alokasi memori dinamis

Linked List dapat menggunakan alokasi memori dinamis untuk membuat node sesuai kebutuhan. Dalam C++, operator new dapat digunakan untuk membuat node, sedangkan delete digunakan untuk membebaskan memori node yang sudah tidak digunakan. Hal ini diterapkan dalam fungsi alokasi() dan dealokasi() pada implementasi program.

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
source code list.h
#ifndef List_h
#define List_h 
#define Nil NULL

#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama, nim;
    int umur;
};

typedef mahasiswa dataMahasiswa;
typedef struct node *address;

struct node
{
    dataMahasiswa isidata;
    address next;
};

struct linkedList
{
    address first;
};

bool isEmpty(linkedList List);
void createList(linkedList &List);
address alokasi(string nama, string nim, int umur);
void dealokasi(address &node);
void printList(linkedList List);
void insertFirst(linkedList &List, address nodeBaru);
void insertLast(linkedList &List, address nodeBaru);
void insertAfter(linkedList &List, address nodeBaru, address prev);
void delFirst(linkedList &List);
void delLast(linkedList &List);
void delAfter(linkedList &List, address nodeHapus, address nodePrev);
int nbList(linkedList List);
void deleteList(linkedList &List);

address FindNodebyData(linkedList List, string data);
void FindNodebyAddress(linkedList List, address node);
void FindNodeByRange(linkedList List, int nilaiAwal, int nilaiAkhir);

void updateFirst(linkedList &list);
void updateLast(linkedList &list);
void updateAfter(linkedList &list, address &prev);
void updateByNim(linkedList &list, string nim);

#endif
```

penjelasan singkat list.h
Program tersebut merupakan deklarasi ADT (Abstract Data Type) Singly Linked List yang digunakan untuk mengelola data mahasiswa menggunakan bahasa C++. Setiap node menyimpan informasi mahasiswa berupa nama, NIM, dan umur, serta pointer `next` yang menunjuk ke node berikutnya. Struktur `linkedList` memiliki pointer `first` sebagai penunjuk elemen pertama dalam list. Program ini mendeklarasikan berbagai fungsi untuk mengelola data, seperti membuat list, memeriksa apakah list kosong, mengalokasikan dan membebaskan memori, menampilkan data, menambahkan serta menghapus node di awal, akhir, atau posisi tertentu, dan menghitung jumlah node. Selain itu, terdapat fungsi pencarian mahasiswa berdasarkan data atau alamat node, pencarian berdasarkan rentang nilai, serta fungsi pembaruan data mahasiswa berdasarkan posisi atau NIM. Dengan struktur tersebut, data mahasiswa dapat dikelola secara dinamis tanpa harus menentukan jumlah elemen sejak awal.

### 2. ...

```C++
source code list.cpp
#include "list.h"
#include <iostream>
using namespace std;

// I.S = Initial State / kondisi awal
// F.S = Final State / kondisi akhir

// fungsi untuk cek apakah list kosong atau tidak
bool isEmpty(linkedList List)
{
    if (List.first == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// pembuatan linked list kosong
void createList(linkedList &List)
{
    /* I.S. sembarang
       F.S. terbentuk list kosong */
    List.first = Nil;
}

// pembuatan node baru dengan menerapkan manajemen memori
address alokasi(string nama, string nim, int umur)
{
    /* I.S. sembarang
       F.S. mengembalikan alamat node baru dengan isidata = sesuai parameter dan next = Nil */
    address nodeBaru = new node;
    nodeBaru->isidata.nama = nama;
    nodeBaru->isidata.nim = nim;
    nodeBaru->isidata.umur = umur;
    nodeBaru->next = Nil;
    return nodeBaru;
}

// penghapusan node dengan menerapkan manajemen memori
void dealokasi(address &node)
{
    /* I.S. P terdefinisi
       F.S. memori yang digunakan node dikembalikan ke sistem */
    node->next = Nil;
    delete node;
}

// prosedur-prosedur untuk insert / menambahkan node baru kedalam list
void insertFirst(linkedList &List, address nodeBaru)
{
    /* I.S. sembarang, P sudah dialokasikan
       F.S. menempatkan elemen list (node) pada awal list */
    nodeBaru->next = List.first;
    List.first = nodeBaru;
}

void insertAfter(linkedList &List, address nodeBaru, address Prev)
{
    /* I.S. sembarang, nodeBaru dan Prev alamat salah satu elemen list (node)
       F.S. menempatkan elemen (node) sesudah elemen node Prev */
    if (Prev != Nil)
    {
        nodeBaru->next = Prev->next;
        Prev->next = nodeBaru;
    }
    else
    {
        cout << "Node sebelumnya tidak valid!" << endl;
    }
}

void insertLast(linkedList &List, address nodeBaru)
{
    /* I.S. sembarang, nodeBaru sudah dialokasikan
       F.S. menempatkan elemen nodeBaru pada akhir list */
    if (isEmpty(List))
    {
        List.first = nodeBaru;
    }
    else
    {
        address nodeBantu = List.first;
        while (nodeBantu->next != Nil)
        {
            nodeBantu = nodeBantu->next;
        }
        nodeBantu->next = nodeBaru;
    }
}

// prosedur-prosedur untuk delete / menghapus node yang ada didalam list
void delFirst(linkedList &List)
{
    /* I.S. list tidak kosong
    F.S. node pertama di list terhapus*/
    address nodeHapus;
    if (isEmpty(List) == false)
    {
        nodeHapus = List.first;
        List.first = List.first->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

void delLast(linkedList &List)
{
    /* I.S. list tidak kosong
    F.S. node terakhir di list terhapus */
    address nodeHapus, nodePrev;
    if (isEmpty(List) == false)
    {
        nodeHapus = List.first;
        if (nodeHapus->next == Nil)
        {
            List.first->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            while (nodeHapus->next != Nil)
            {
                nodePrev = nodeHapus;
                nodeHapus = nodeHapus->next;
            }
            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
    }
    else
    {
        cout << "list kosong" << endl;
    }
}

void delAfter(linkedList &List, address nodeHapus, address nodePrev)
{
    /* I.S. list tidak kosng, Prev alamat salah satu elemen list
    F.S. nodeBantu adalah alamat dari Prev→next, menghapus Prev→next dari list */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    { // jika list tidak kosong
        if (nodePrev != Nil && nodePrev->next != Nil)
        {
            nodeHapus = nodePrev->next;
            nodePrev->next = nodeHapus->next;
            nodeHapus->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
    }
}

// prosedur untuk menampilkan isi list
void printList(linkedList List)
{
    /* I.S. list mungkin kosong
       F.S. jika list tidak kosong menampilkan semua info yang ada pada list */
    if (isEmpty(List))
    {
        cout << "List kosong." << endl;
    }
    else
    {
        address nodeBantu = List.first;
        while (nodeBantu != Nil)
        {
            cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
            nodeBantu = nodeBantu->next;
        }
    }
}

// function untuk menampilkan jumlah node didalam list
int nbList(linkedList List)
{
    /* I.S. list sudah ada
       F.S. menampilkan jumlah node didalam list*/
    int count = 0;
    address nodeBantu = List.first;
    while (nodeBantu != Nil)
    {
        count++;
        nodeBantu = nodeBantu->next;
    }
    return count;
}

// prosedur untuk menghapus list (menghapus semua node didalam list)
void deleteList(linkedList &List)
{
    /* I.S. list sudah ada
       F.S. menghapus semua node didalam list*/
    address nodeBantu, nodeHapus;
    nodeBantu = List.first;
    while (nodeBantu != Nil)
    {
        nodeHapus = nodeBantu;
        nodeBantu = nodeBantu->next;
        dealokasi(nodeHapus);
    }
    List.first = Nil;
    cout << "List sudah terhapus!" << endl;
}

// prosedur-prosedur untuk melakukan update data node
void updateFirst(linkedList &list)
{
    dataMahasiswa newData;
    cout << "Masukan nama baru : ";
    cin >> newData.nama;
    cout << "Masukan nim baru : ";
    cin >> newData.nim;
    cout << "Masukan umur baru : ";
    cin >> newData.umur;
    list.first->isidata = newData;
}

void updateLast(linkedList &list)
{
    if (isEmpty(list))
    {
        cout << "List kosong!" << endl;
    }
    else
    {
    dataMahasiswa newData;
    cout << "Masukan nama baru : ";
    cin >> newData.nama ;
    cout << "Masukan nim baru : ";
    cin >> newData.nim;
    cout << "Masukan umur baru : ";
    cin >> newData.umur;

    address nodeBantu = list.first;
    while (nodeBantu->next != Nil)
    {
        nodeBantu = nodeBantu->next;
    }

    nodeBantu->isidata = newData;
    }
}

void updateAfter(linkedList &list, address &prev)
{
    if (isEmpty(list))
    {
        cout << "List kosong!" << endl;
    }
    else
    {
    dataMahasiswa newData;
    cout << "Masukan nama baru : ";
    cin >> newData.nama ;
    cout << "Masukan nim baru : ";
    cin >> newData.nim;
    cout << "Masukan umur baru : ";
    cin >> newData.umur;

    prev->next->isidata = newData;
    }
}

void updateByNim(linkedList &list, string nim)
{
    if (!isEmpty(list))
    {
        address nodeBantu = FindNodebyData(list, nim);

        if (nodeBantu != Nil)
        {
            dataMahasiswa newData;
            cout << "Masukan nama baru : ";
            cin >> newData.nama;
            cout << "Masukan nim baru : ";
            cin >> newData.nim;
            cout << "Masukan umur baru : ";
            cin >> newData.umur;

            nodeBantu->isidata = newData;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

// prosedur-prosedur untuk searching data didalam list
address FindNodebyData(linkedList List, string data)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan node yang sesuai dengan nama atau nim yang dicari */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        while (nodeBantu != Nil)
        {
            posisi++;
            if (nodeBantu->isidata.nama == data || nodeBantu->isidata.nim == data)
            {
                cout << "Data " << data << " ditemukan pada posisi ke-" << posisi << "!" << endl;
                cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
                found = true;
                break;
            }
            nodeBantu = nodeBantu->next;
        }
        if (found == false)
        {
            cout << "Node dengan data " << data << " tidak ditemukan!" << endl;
        }
    }
    cout << endl;
    return Nil;
}

void FindNodebyAddress(linkedList List, address node)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan node yang sesuai dengan alamat yang dicari */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        while (nodeBantu != Nil)
        {
            posisi++;
            if (nodeBantu == node)
            {
                cout << "Node ditemukan pada posisi ke-" << posisi << "!" << endl;
                cout << "Alamat Node : " << nodeBantu << endl;
                cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
                found = true;
                break;
            }
            nodeBantu = nodeBantu->next;
        }
        if (found == false)
        {
            cout << "Node dengan alamat " << node << " tidak ditemukan dalam list!" << endl;
        }
    }
    cout << endl;
}

void FindNodeByRange(linkedList List, int nilaiAwal, int nilaiAkhir)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan semua node yang memiliki umur di dalam rentang nilaiAwal sampai nilaiAkhir */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        cout << "--- Data diatas usia " << nilaiAwal << " dan dibawah " << nilaiAkhir << " ---" << endl;
        while (nodeBantu != Nil)
        {
            posisi++;
            int umur = nodeBantu->isidata.umur;
            if (umur > nilaiAwal && umur < nilaiAkhir)
            {
                cout << "Data ditemukan pada posisi ke-" << posisi << " :" << endl;
                cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
                found = true;
            }
            nodeBantu = nodeBantu->next;
        }
        if (found == false)
        {
            cout << "Tidak ada data node dalam range tersebut!" << endl;
        }
    }
    cout << endl;
}

penjelasan singkat list.cpp
Program tersebut merupakan implementasi struktur data Singly Linked List dalam bahasa C++ yang digunakan untuk mengelola data mahasiswa berupa nama, NIM, dan umur. Setiap data disimpan dalam sebuah node yang saling terhubung melalui pointer `next`, sedangkan pointer `first` digunakan untuk menunjuk node pertama dalam list. Program ini memiliki berbagai fungsi, seperti `isEmpty()` untuk memeriksa apakah list kosong, `createList()` untuk membuat list baru, `alokasi()` dan `dealokasi()` untuk mengatur penggunaan memori, serta `insertFirst()`, `insertLast()`, dan `insertAfter()` untuk menambahkan data. Selain itu, terdapat fungsi `delFirst()`, `delLast()`, `delAfter()`, dan `deleteList()` untuk menghapus data, `printList()` untuk menampilkan seluruh data mahasiswa, serta `nbList()` untuk menghitung jumlah node. Program juga menyediakan fungsi pencarian berdasarkan nama, NIM, alamat node, dan rentang umur, serta fungsi pembaruan data mahasiswa berdasarkan posisi atau NIM. Dengan adanya fungsi-fungsi tersebut, pengelolaan data mahasiswa dapat dilakukan secara dinamis, mulai dari penambahan, pencarian, pengubahan, hingga penghapusan data tanpa harus menentukan jumlah elemen sejak awal.

### 3. ...

```C++
source code main.cpp
```
#include <iostream>
#include "list.h"
using namespace std;

int main(){
		linkedList List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    nodeA = alokasi("Dhimas", "2311102151", 20);
    nodeB = alokasi("Arvin", "2211110014", 21);
    nodeC = alokasi("Rizal", "2311110029", 20);
    nodeD = alokasi("Satrio", "2211102173", 21);
    nodeE = alokasi("Joshua", "2311102133", 21);

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    // updateFirst(List);
    // cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE FIRST ---" << endl;
    // printList(List);

    // updateLast(List);
    // cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE LAST ---" << endl;
    // printList(List);

    updateAfter(List, nodeC);
    cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE AFTER ---" << endl;
    printList(List);

    updateByNim(List, "2211110014");
    cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE BY NIM ---" << endl;
    printList(List);
    
    return 0;
}

penjelasan singkat main.cpp
Program tersebut merupakan program utama untuk menguji penerapan struktur data Singly Linked List dalam pengelolaan data mahasiswa menggunakan bahasa C++. Program diawali dengan membuat list kosong melalui fungsi `createList()`, kemudian mengalokasikan lima node yang berisi nama, NIM, dan umur mahasiswa, yaitu Dhimas, Arvin, Rizal, Satrio, dan Joshua. Selanjutnya, data dimasukkan ke dalam list menggunakan fungsi `insertFirst()`, `insertLast()`, dan `insertAfter()` sehingga setiap node tersusun sesuai urutan yang ditentukan. Program kemudian menampilkan seluruh data mahasiswa menggunakan `printList()` dan menghitung jumlah node melalui `nbList()`. Setelah itu, fungsi `updateAfter(List, nodeC)` digunakan untuk memperbarui data mahasiswa pada node setelah node Rizal, yaitu Satrio, sedangkan fungsi `updateByNim(List, "2211110014")` digunakan untuk memperbarui data mahasiswa berdasarkan NIM Arvin. Setelah setiap proses pembaruan, program menampilkan kembali isi list untuk memperlihatkan perubahan data. Dengan demikian, program ini menunjukkan penerapan operasi penambahan, penampilan, penghitungan jumlah node, dan pembaruan data pada struktur Singly Linked List.

## Unguided

### 1. ADT Singly Linked list
 Buatlah ADT Singly Linked list sebagai berikut di dalam file “Singlylist.h”
 Kemudian buat implementasi ADT Singly Linked list pada file “Singlylist.cpp”. 
 Cobalah hasil implementasi ADT pada file “main.cpp”
```C++
source code SinglyList.h

#ifndef SINGLYLIST_H
#define SINGLYLIST_H

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address P);
void printInfo(List L);
void insertFirst(List &L, address P);

address findElm(List L, infotype x);
int totalInfo(List L);

#endif

### Output Unguided 1 :

##### Output 1

contoh :
![Screenshot Output Unguided 1_1]


penjelasan unguided 1

### Penjelasan SinglyList.h
Program tersebut merupakan file header `Singlylist.h` yang berisi deklarasi struktur data Singly Linked List menggunakan bahasa C++. Program mendefinisikan `infotype` sebagai tipe data integer dan `address` sebagai pointer yang menunjuk ke struktur `ElmList`, yang memiliki dua bagian, yaitu `info` untuk menyimpan nilai dan `next` untuk menunjuk ke node berikutnya. Struktur `List` memiliki pointer `First` yang digunakan untuk menunjukkan elemen pertama dalam linked list. Selain itu, file ini mendeklarasikan beberapa fungsi, yaitu `createList()` untuk membuat list kosong, `alokasi()` untuk membuat node baru, `dealokasi()` untuk membebaskan memori, `printInfo()` untuk menampilkan isi list, dan `insertFirst()` untuk menambahkan node di awal list. Terdapat pula fungsi `findElm()` untuk mencari elemen berdasarkan nilai tertentu dan `totalInfo()` untuk menghitung jumlah seluruh nilai pada node. Dengan adanya deklarasi tersebut, file header berfungsi sebagai penghubung antara program utama (`main.cpp`) dan implementasi fungsi pada file `Singlylist.cpp`, sehingga pengelolaan data dalam linked list dapat dilakukan secara terstruktur.


### 2. SinglyList.cpp
```C++
source code SinglyList.cpp
```
#include <iostream>
#include "Singlylist.h"

using namespace std;

void createList(List &L) {
    L.First = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

void dealokasi(address P) {
    delete P;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

void printInfo(List L) {
    address P = L.First;

    while (P != NULL) {
        cout << P->info;

        if (P->next != NULL) {
            cout << " ";
        }

        P = P->next;
    }

    cout << endl;
}

address findElm(List L, infotype x) {
    address P = L.First;

    while (P != NULL) {
        if (P->info == x) {
            return P;
        }

        P = P->next;
    }

    return NULL;
}

int totalInfo(List L) {
    int total = 0;
    address P = L.First;

    while (P != NULL) {
        total += P->info;
        P = P->next;
    }

    return total;
}

### Output Unguided 2 :

##### Output 1

contoh :
![Screenshot Output Unguided 2_1]


### Penjelasan SinglyList.cpp
Program tersebut merupakan file implementasi `Singlylist.cpp` yang berisi fungsi-fungsi untuk mengelola struktur data Singly Linked List. Fungsi `createList` digunakan untuk membuat list kosong dengan mengatur `First` menjadi `NULL`, sedangkan `alokasi` digunakan untuk membuat node baru yang menyimpan nilai integer pada bagian `info` dan mengatur `next` menjadi `NULL`. Fungsi `dealokasi` berfungsi menghapus node dari memori. Selanjutnya, `insertFirst` menambahkan node baru di bagian awal list, sedangkan `printInfo` menampilkan seluruh nilai yang tersimpan dalam list secara berurutan. Fungsi `findElm` digunakan untuk mencari node berdasarkan nilai tertentu dan mengembalikan alamat node jika ditemukan, atau `NULL` jika tidak ditemukan. Terakhir, fungsi `totalInfo` menghitung jumlah seluruh nilai pada setiap node dengan menelusuri list dari awal hingga akhir. Dengan fungsi-fungsi tersebut, program dapat melakukan penambahan, penampilan, pencarian, dan penjumlahan data pada struktur Singly Linked List.


### 3. main.cpp

```C++
source code main.cpp
```
#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    cout << "Isi Singly Linked List: ";
    printInfo(L);

    address P = findElm(L, 8);

    if (P != NULL) {
        cout << P->info << " ditemukan dalam list" << endl;
    } else {
        cout << "Elemen tidak ditemukan dalam list" << endl;
    }

    cout << "Total info dari kelima elemen adalah "
         << totalInfo(L) << endl;

    return 0;
}

### Output main.cpp :
Isi Singly Linked List: 9 12 8 0 2
8 ditemukan dalam list
Total info dari kelima elemen adalah 31
##### Output 1

contoh :
![Screenshot Output Unguided 3_1] (https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Modul%206/soal.png)

penjelasan main.cpp
### Penjelasan main.cpp
Program tersebut merupakan file utama `main.cpp` yang digunakan untuk menguji fungsi-fungsi pada struktur data Singly Linked List. Program diawali dengan membuat list kosong menggunakan fungsi `createList(L)`, kemudian membuat lima node berisi nilai 2, 0, 8, 12, dan 9 menggunakan fungsi `alokasi()`. Setiap node dimasukkan ke bagian awal list menggunakan `insertFirst()`, sehingga urutan data yang terbentuk menjadi 9, 12, 8, 0, dan 2. Selanjutnya, fungsi `printInfo(L)` digunakan untuk menampilkan seluruh isi list. Program juga menggunakan `findElm(L, 8)` untuk mencari nilai 8 dan menampilkan pesan bahwa elemen tersebut ditemukan jika pencarian berhasil. Terakhir, fungsi `totalInfo(L)` digunakan untuk menghitung jumlah seluruh nilai dalam list, yaitu \\(9+12+8+0+2=31\\). Dengan demikian, program ini menunjukkan penerapan operasi pembuatan list, alokasi node, penyisipan data, penampilan data, pencarian elemen, dan penjumlahan nilai pada Singly Linked List.



## Kesimpulan

Berdasarkan pembelajaran pada modul dan pengerjaan laporan praktikum (laprak), dapat disimpulkan bahwa Singly Linked List merupakan struktur data yang terdiri dari kumpulan node yang saling terhubung melalui pointer `next`. Setiap node menyimpan data dan alamat node berikutnya, sedangkan pointer `First` digunakan untuk menunjuk node pertama dalam list. Melalui praktikum ini, dipelajari cara membuat list kosong, mengalokasikan dan menghapus memori node, menambahkan elemen di awal list, serta menampilkan seluruh data yang tersimpan. Selain itu, praktikum ini juga menerapkan operasi pencarian elemen menggunakan fungsi `findElm` dan perhitungan jumlah seluruh nilai menggunakan fungsi `totalInfo`. Dari hasil pengujian, list berhasil menampilkan data `9, 12, 8, 0, 2`, menemukan elemen bernilai `8`, dan menghasilkan total nilai sebesar `31`. Dengan demikian, praktikum ini membantu memahami penerapan Singly Linked List dalam pengelolaan data secara dinamis serta meningkatkan pemahaman mengenai penggunaan pointer dan fungsi dalam pemrograman C++.

...

## Referensi

[1] GeeksforGeeks. (2026, 13 Januari). Singly Linked List Tutorial. GeeksforGeeks. https://www.geeksforgeeks.org/dsa/singly-linked-list-tutorial/

[2] Programiz. (t.t.). Linked List Operations: Traverse, Insert and Delete. Programiz. https://www.programiz.com/dsa/linked-list-operations

[3] OpenDSA. (2018). Linked Lists. OpenDSA Data Structures and Algorithms Modules. https://opendsa-server.cs.vt.edu/ODSA/Books/pubbook/odsa-all-0013bb43-a12f-4ab3-9b86-73b317f1e37e/fall-2018/Public_Book/html/ListLinked.html
