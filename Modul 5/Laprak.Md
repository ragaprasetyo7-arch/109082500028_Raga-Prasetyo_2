# <h1 align="center">Laporan Praktikum Modul 4 - SINGLY LINKED LIST (BAGIAN PERTAMA) 
 </h1>

<p align="center">Raga Prasetyo - 109082500028</p>

1. Pengertian Linked List
Linked list merupakan salah satu struktur data yang digunakan untuk menyimpan sekumpulan elemen yang saling terhubung melalui pointer. Setiap elemen disebut node yang berisi data dan informasi alamat node berikutnya. Berbeda dengan array yang umumnya menyimpan elemen dalam lokasi memori berurutan, linked list menghubungkan elemen berdasarkan alamat memori sehingga node dapat dialokasikan secara dinamis sesuai kebutuhan program. Karakteristik tersebut membuat linked list cocok digunakan ketika jumlah data dapat berubah selama program berjalan. Modul 04 STUKDAT.pdf

2. Singly Linked List
Singly linked list merupakan jenis linked list yang setiap node-nya memiliki satu pointer untuk menunjuk ke node berikutnya. Struktur ini memiliki pointer First atau head yang menunjukkan node pertama dalam list. Setiap node menyimpan data pada bagian info dan alamat node selanjutnya pada bagian next. Node terakhir memiliki pointer next bernilai NULL atau Nil sebagai penanda akhir list. Penelusuran data pada singly linked list dilakukan secara berurutan dari node pertama menuju node berikutnya, sehingga akses langsung berdasarkan indeks seperti pada array tidak tersedia secara alami. Modul 04 STUKDAT.pdf

3. Struktur Node dan Pointer
Node merupakan komponen utama dalam linked list karena berfungsi sebagai tempat penyimpanan data sekaligus penghubung antarelemen. Pada implementasi C++, node dapat dibuat menggunakan struct yang memiliki variabel data dan pointer ke node berikutnya. Pointer adalah variabel yang menyimpan alamat memori suatu objek. Operator -> digunakan untuk mengakses anggota struktur melalui pointer, misalnya P->info untuk mengambil data dan P->next untuk mengakses alamat node selanjutnya. Pemahaman mengenai node dan pointer sangat penting karena hubungan antar-node dibentuk dan dikelola melalui perubahan alamat yang disimpan dalam pointer.
4. Abstract Data Type (ADT) Singly Linked List
Abstract Data Type (ADT) merupakan pendekatan untuk mendefinisikan suatu tipe data berdasarkan struktur dan operasi yang dapat dilakukan terhadapnya. Dalam singly linked list, ADT memisahkan definisi struktur data, deklarasi fungsi, dan implementasi operasi ke dalam bagian program yang terorganisasi. Pada latihan Modul 04, file Singlylist.h digunakan untuk mendefinisikan tipe data dan prototipe fungsi, sedangkan Singlylist.cpp digunakan untuk mengimplementasikan fungsi tersebut dan main.cpp menjadi program utama yang menjalankan operasi linked list. Pemisahan ini memudahkan pemeliharaan kode serta penggunaan kembali fungsi dalam program lain. Modul 04 STUKDAT.pdf

5. Operasi Dasar Singly Linked List
Operasi dasar singly linked list meliputi pembuatan list, alokasi memori, penyisipan node, penghapusan node, penelusuran data, dan pembebasan memori. Operasi createList() digunakan untuk menginisialisasi list kosong dengan menetapkan pointer pertama ke Nil. Fungsi alokasi() membuat node baru dan mengisi data yang akan disimpan, sedangkan dealokasi() membebaskan memori node yang tidak lagi digunakan. Fungsi insertFirst() menambahkan node pada awal list, sementara printInfo() menelusuri dan menampilkan seluruh data secara berurutan. Modul juga membahas penyisipan pada akhir atau setelah node tertentu, serta penghapusan elemen pada berbagai posisi. Modul 04 STUKDAT.pdf

6. Penyisipan Node di Awal (Insert First)
Operasi insertFirst() digunakan untuk menambahkan node baru pada posisi pertama linked list. Prosesnya dilakukan dengan mengarahkan pointer next dari node baru ke node yang sebelumnya menjadi elemen pertama, kemudian mengubah pointer First agar menunjuk ke node baru tersebut. Apabila list sebelumnya kosong, pointer next node baru akan bernilai Nil, sehingga node tersebut sekaligus menjadi elemen pertama dan terakhir. Operasi ini tidak memerlukan penelusuran seluruh list, sehingga kompleksitas waktunya adalah \(O(1)\), dengan asumsi pointer node baru sudah tersedia.

7. Pengelolaan Memori Dinamis
Linked list menggunakan alokasi memori dinamis agar setiap node dapat dibuat ketika dibutuhkan. Dalam C++, operator new digunakan untuk mengalokasikan memori bagi node baru, sedangkan operator delete digunakan untuk membebaskan memori tersebut. Pengelolaan memori perlu dilakukan dengan benar karena node yang sudah tidak digunakan tetapi tidak dibebaskan dapat menyebabkan kebocoran memori (memory leak). Sebaliknya, mengakses pointer setelah memorinya dibebaskan dapat menyebabkan kesalahan program. Oleh karena itu, fungsi alokasi dan dealokasi menjadi bagian penting dalam implementasi linked list.

8. Perbedaan Linked List dan Array
Array dan linked list memiliki perbedaan dalam cara menyimpan dan mengakses data. Array menyimpan elemen secara berurutan dan memungkinkan akses elemen melalui indeks, sedangkan linked list menghubungkan setiap elemen menggunakan pointer. Pada linked list, penambahan node di awal dapat dilakukan dengan mengubah beberapa pointer tanpa harus menggeser elemen lain, sehingga operasi tersebut memiliki kompleksitas waktu \(O(1)\). Sebaliknya, akses ke elemen tertentu pada singly linked list umumnya memerlukan penelusuran dari node pertama. Dengan demikian, pemilihan struktur data perlu disesuaikan dengan kebutuhan program, terutama dalam hal akses data, penyisipan, penghapusan, dan pengelolaan memori.

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
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define Nil NULL

#include <iostream>
using namespace std;

typedef struct Node *address;

struct student {
    int age;
    string name, id;
};

struct Node {
    student data;
    address next;
};

struct LinkedList {
    address first;
};

bool isEmpty(LinkedList L);
void createList(LinkedList &L);
address alokasi(int age, string name, string id);
void dealokasi(address &P);
void printList(LinkedList L);
void insertFirst(LinkedList &L, address P);
void insertAfter(LinkedList &L, address Prev, address P);
void insertLast(LinkedList &L, address P);
void delfirst(LinkedList &L);
void delAfter(LinkedList &L, address Prev, address P);
void delLast(LinkedList &L);
int nbList(LinkedList L);
void delList(LinkedList &L);

#endif
```

penjelasan singkat guided 1
Kode tersebut merupakan file header `List.h` yang berfungsi sebagai deklarasi struktur data dan fungsi-fungsi yang digunakan dalam program Single Linked List menggunakan bahasa pemrograman C++. Bagian `#ifndef`, `#define`, dan `#endif` digunakan sebagai pelindung agar file header tidak diproses berulang kali saat di-include. Makro `Nil` didefinisikan sebagai `NULL` untuk menunjukkan pointer yang tidak menunjuk ke node mana pun. Selanjutnya, `typedef struct Node *address` digunakan untuk mendefinisikan pointer ke struktur `Node`, sedangkan struktur `student` menyimpan data mahasiswa berupa umur (`age`), nama (`name`), dan ID (`id`). Struktur `Node` terdiri dari data mahasiswa dan pointer `next` yang menunjuk ke node berikutnya, sementara struktur `LinkedList` memiliki pointer `first` yang menunjuk ke node pertama dalam list. Pada bagian akhir, terdapat deklarasi berbagai fungsi, seperti `createList()`, `alokasi()`, `printList()`, fungsi penyisipan dan penghapusan node, `nbList()`, serta `delList()`. Secara keseluruhan, file header ini menjadi penghubung antara deklarasi struktur data dan fungsi dengan implementasinya dalam file sumber C++, sehingga pengelolaan data mahasiswa melalui Single Linked List dapat dilakukan secara terstruktur.

### 2. ...

```C++
source code list.cpp
#include "List.h"
#include <iostream>
using namespace std;

bool isEmpty(LinkedList L) {
    return L.first == Nil;
}

void createList(LinkedList &L) {
    L.first = Nil;
}

address alokasi(int age, string name, string id) {
    address P = new Node;
    if (P != Nil) {
        P->data.age = age;
        P->data.name = name;
        P->data.id = id;
        P->next = Nil;
    }
    return P;
}

void dealokasi(address &P) {
    P->next = Nil;
    delete P;
}

void printList(LinkedList L) {
    address P = L.first;
    while (P != Nil) {
        cout << "Name: \t" << P->data.name
             << ", ID: \t" << P->data.id
             << ", Age: " << P->data.age << endl;
        P = P->next;
    }
}

void insertFirst(LinkedList &L, address P) {
    if (isEmpty(L)) {
        L.first = P;
    } else {
        P->next = L.first;
        L.first = P;
    }
}

void insertAfter(LinkedList &L, address Prev, address P) {
    if (Prev != Nil) {
        P->next = Prev->next;
        Prev->next = P;
    }
}

void insertLast(LinkedList &L, address P) {
    if (isEmpty(L)) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != Nil) Q = Q->next;
        Q->next = P;
    }
}

void delfirst(LinkedList &L) {
    if (isEmpty(L)) {
        cout << "List is empty, cannot delete." << endl;
    } else {
        address P = L.first;
        L.first = P->next;
        dealokasi(P);
    }
}

void delAfter(LinkedList &L, address Prev, address P) {
    if (isEmpty(L)) {
        cout << "List is empty, cannot delete." << endl;
    } else if (Prev != Nil && Prev->next != Nil) {
        P = Prev->next;
        Prev->next = P->next;
        P->next = Nil;
        dealokasi(P);
    } else {
        cout << "Previous node is not valid, cannot delete." << endl;
    }
}

void delLast(LinkedList &L) {
    if (isEmpty(L)) {
        cout << "List is empty, cannot delete." << endl;
    } else {
        address P = L.first;
        address Q = Nil;
        while (P->next != Nil) {
            Q = P;
            P = P->next;
        }
        if (Q != Nil) Q->next = Nil;
        else L.first = Nil;
        dealokasi(P);
    }
}

int nbList(LinkedList L) {
    int count = 0;
    address P = L.first;
    while (P != Nil) {
        count++;
        P = P->next;
    }
    return count;
}

void delList(LinkedList &L) {
    while (!isEmpty(L)) delfirst(L);
}



penjelasan singkat guided 2
Kode tersebut merupakan implementasi fungsi-fungsi pada struktur data Single Linked List menggunakan bahasa pemrograman C++. Fungsi `isEmpty()` digunakan untuk memeriksa apakah list kosong, sedangkan `createList()` berfungsi menginisialisasi list dengan menetapkan pointer pertama (`first`) ke `Nil`. Fungsi `alokasi()` digunakan untuk membuat node baru yang menyimpan data berupa umur, nama, dan ID, sementara `dealokasi()` digunakan untuk menghapus node dari memori. Fungsi `printList()` menampilkan seluruh data yang tersimpan di dalam list. Selanjutnya, fungsi `insertFirst()`, `insertAfter()`, dan `insertLast()` digunakan untuk menambahkan node di awal, setelah node tertentu, dan di akhir list. Untuk operasi penghapusan, fungsi `delfirst()` menghapus node pertama, `delAfter()` menghapus node setelah node tertentu, dan `delLast()` menghapus node terakhir. Fungsi `nbList()` digunakan untuk menghitung jumlah node yang terdapat dalam list, sedangkan `delList()` menghapus seluruh node secara berulang hingga list menjadi kosong. Secara keseluruhan, kode ini berfungsi untuk mengelola data secara dinamis serta memahami penerapan operasi dasar pada struktur data Single Linked List.

### 3. ...

```C++
source code main.cpp
```
#include <iostream>
#include "List.h"
using namespace std;

int main() {
    LinkedList L;
    address nodeA = Nil, nodeB = Nil, nodeC = Nil, nodeD = Nil, nodeE = Nil;
    createList(L);

    nodeA = alokasi(20, "Dhimas", "2311102151");
    nodeB = alokasi(21, "Arvin", "2311102152");
    nodeC = alokasi(20, "Budi", "2311102153");
    nodeD = alokasi(22, "Citra", "2311102154");
    nodeE = alokasi(19, "Dina", "2311102155");

    insertFirst(L, nodeA);
    insertLast(L, nodeB);
    insertAfter(L, nodeA, nodeC);
    insertFirst(L, nodeD);
    insertLast(L, nodeE);

    cout << "Isi list:" << endl;
    printList(L);
    cout << "Jumlah node: " << nbList(L) << endl;

    delfirst(L);
    delLast(L);
    delAfter(L, L.first, Nil);

    cout << "\nSetelah penghapusan:" << endl;
    printList(L);
    cout << "Jumlah node: " << nbList(L) << endl;

    delList(L);
    cout << "\nSetelah delList, jumlah node: " << nbList(L) << endl;
    return 0;
}

penjelasan singkat guided 3
Program tersebut merupakan implementasi struktur data Single Linked List menggunakan bahasa pemrograman C++. Program diawali dengan membuat list kosong dan mendeklarasikan lima node, yaitu nodeA, nodeB, nodeC, nodeD, dan nodeE yang masing-masing menyimpan data berupa angka, nama, dan NIM. Selanjutnya, program mengalokasikan memori untuk setiap node dan memasukkannya ke dalam linked list menggunakan fungsi `insertFirst()`, `insertLast()`, dan `insertAfter()`. Setelah semua node dimasukkan, program menampilkan isi list menggunakan fungsi `printList()` serta menghitung jumlah node dengan fungsi `nbList()`. Berikutnya, program melakukan penghapusan node menggunakan fungsi `delfirst()`, `delLast()`, dan `delAfter()`, kemudian menampilkan kembali isi list dan jumlah node setelah penghapusan. Terakhir, fungsi `delList()` digunakan untuk menghapus seluruh node yang tersisa sehingga list menjadi kosong. Program ini bertujuan untuk memahami cara kerja operasi penyisipan, penampilan, penghitungan, dan penghapusan node pada struktur data Single Linked List..


## Unguided

### 1. ADT Singly Linked list
Buat ADT singly linked list dengan infotype bertipe integer, address sebagai pointer ke ElmList, serta operasi createList, alokasi, dealokasi, printInfo, dan insertFirst.
```C++
source code SinglyList.h

#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include <iostream>
using namespace std;

#define Nil NULL

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
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

#endif
### Output Unguided 1 :

##### Output 1

contoh :
![Screenshot Output Unguided 1_1]


penjelasan unguided 1

### Penjelasan SinglyList.h
File SinglyList.h merupakan file header yang berfungsi untuk mendefinisikan struktur data dan mendeklarasikan fungsi-fungsi yang digunakan dalam implementasi ADT Singly Linked List. Pada bagian awal, #ifndef, #define, dan #endif digunakan sebagai pelindung agar file header tidak didefinisikan berulang kali. Tipe data infotype didefinisikan sebagai integer, sedangkan address digunakan sebagai pointer yang menunjuk ke elemen ElmList. Struktur ElmList terdiri dari info untuk menyimpan nilai dan next untuk menunjuk ke node berikutnya. Sementara itu, struktur List memiliki pointer First yang menunjuk ke node pertama. Pada bagian akhir, terdapat deklarasi fungsi seperti createList(), alokasi(), dealokasi(), printInfo(), dan insertFirst() yang akan diimplementasikan pada file SinglyList.cpp.


### 2. SinglyList.cpp
```C++
source code SinglyList.cpp
```

#include "SinglyList.h"

void createList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;

    if (P != Nil) {
        P->info = x;
        P->next = Nil;
    }

    return P;
}

void dealokasi(address &P) {
    if (P != Nil) {
        address temp = P;
        P = Nil;
        delete temp;
    }
}

void printInfo(List L) {
    address current = L.First;

    cout << "Isi list: ";

    while (current != Nil) {
        cout << current->info;

        if (current->next != Nil) {
            cout << " -> ";
        }

        current = current->next;
    }

    cout << endl;
}

void insertFirst(List &L, address P) {
    if (P == Nil) {
        return;
    }

    P->next = L.First;
    L.First = P;
}

### Output Unguided 2 :

##### Output 1

contoh :
![Screenshot Output Unguided 2_1]


penjelasan SinglyList.cpp
### Penjelasan SinglyList.cpp
File SinglyList.cpp berisi implementasi dari fungsi-fungsi yang telah dideklarasikan pada SinglyList.h. Fungsi createList() digunakan untuk membuat list kosong dengan mengatur First menjadi Nil. Fungsi alokasi() bertugas membuat node baru di memori, mengisi nilai info, dan mengatur pointer next menjadi Nil. Fungsi dealokasi() digunakan untuk membebaskan memori node yang tidak lagi digunakan. Selanjutnya, fungsi printInfo() menelusuri list mulai dari node pertama menggunakan pointer current, kemudian menampilkan setiap nilai yang ditemukan dengan tanda panah sebagai pemisah. Fungsi insertFirst() digunakan untuk menyisipkan node baru di awal list dengan menghubungkan pointer next ke node pertama sebelumnya, lalu memperbarui First agar menunjuk ke node baru. Dengan demikian, file ini menangani proses utama pengelolaan elemen dalam Singly Linked List.


### 3. main.cpp

```C++
source code main.cpp
```
#include "SinglyList.h"

int main() {
    List L;
    int data[] = {2, 0, 8, 12, 9};
    int jumlah = sizeof(data) / sizeof(data[0]);

    createList(L);

    for (int i = 0; i < jumlah; i++) {
        address P = alokasi(data[i]);

        if (P != Nil) {
            insertFirst(L, P);
        }
    }

    printInfo(L);

    return 0;
}

### Output Unguided 3 :
9 12 8 0 2
##### Output 1

contoh :
![Screenshot Output Unguided 3_1] (https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Pertemuan2_Modul5/Output-Unguided2-1.png)

penjelasan unguided 3
### Penjelasan Soal 3
File main.cpp merupakan program utama yang menjalankan operasi Singly Linked List. Program diawali dengan mendeklarasikan variabel L sebagai list dan array data yang berisi lima nilai, yaitu 2, 0, 8, 12, dan 9. Variabel jumlah digunakan untuk menghitung banyaknya elemen dalam array. Selanjutnya, fungsi createList() dipanggil untuk menginisialisasi list kosong. Program kemudian menggunakan perulangan for untuk mengambil setiap nilai dari array, membuat node baru melalui fungsi alokasi(), dan memasukkannya ke awal list menggunakan fungsi insertFirst(), selama alokasi berhasil. Setelah semua elemen dimasukkan, fungsi printInfo() dipanggil untuk menampilkan seluruh isi list. Karena setiap elemen selalu dimasukkan di awal, urutan akhirnya menjadi 9 → 12 → 8 → 0 → 2. Program kemudian berakhir dengan return 0, yang menandakan bahwa program selesai dijalankan dengan normal.



## Kesimpulan

Berdasarkan praktikum Struktur Data Modul 04, dapat dipahami bahwa Singly Linked List merupakan struktur data dinamis yang menyimpan elemen dalam bentuk node yang saling terhubung menggunakan pointer. Praktikum ini memberikan pemahaman mengenai penyusunan ADT melalui file header, file implementasi, dan program utama, serta penggunaan fungsi untuk membuat list, mengalokasikan dan membebaskan memori, menyisipkan node, dan menampilkan data. Melalui penerapan fungsi insertFirst(), dapat diketahui bahwa posisi elemen dalam list dipengaruhi oleh urutan penyisipan, karena setiap node baru ditempatkan di awal sehingga urutan data menjadi terbalik dari urutan pemasukan. Selain itu, praktikum ini membantu memahami penggunaan pointer First, next, dan Nil dalam menghubungkan node serta mengendalikan penelusuran list. Materi penghapusan dan pembaruan data yang dibahas dalam modul juga memperluas pemahaman mengenai operasi dasar yang dapat diterapkan pada struktur data linked list.
...

## Referensi

[1] Tim Penyusun Praktikum Struktur Data. (Tanpa tahun). Modul 04: Singly Linked List (Bagian Pertama). Modul Praktikum Struktur Data, hlm. 36–46.

[2] Microsoft. (Tanpa tahun). Classes and Structs (C++). Microsoft Learn. Diakses pada 20 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/classes-and-structs-cpp.

[3] Microsoft. (2021). Pointers (C++). Microsoft Learn. Diakses pada 20 Oktober 2026 melalui https://learn.microsoft.com/en-us/cpp/cpp/pointers-cpp.

[4] cplusplus.com. (Tanpa tahun). Dynamic Memory. cplusplus.com. Diakses pada 20 Oktober 2026 melalui https://cplusplus.com/doc/tutorial/dynamic/.

[5] Educative. (Tanpa tahun). Insertion Techniques in Singly Linked Lists Using C++. Educative. Diakses pada 20 Oktober 2026 melalui https://www.educative.io/courses/learn-data-structures-and-algorithms-in-cpp/insertion-in-a-singly-linked-list.