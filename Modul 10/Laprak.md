# <h1 align="center">Laporan Praktikum Modul 8 - QUEUE
 </h1>

<p align="center">Raga Prasetyo - 109082500028</p>

1. Implementasi Circular Queue Menggunakan ARRAY
Circular Queue merupakan pengembangan dari Queue yang menggunakan ARRAY dengan konsep penyimpanan melingkar. Pada Queue linear, posisi elemen yang telah dihapus di bagian depan tidak dapat digunakan kembali secara langsung apabila indeks TAIL sudah mencapai batas ARRAY. Kondisi tersebut dapat menyebabkan ruang penyimpanan tidak dimanfaatkan secara maksimal meskipun masih terdapat slot kosong di bagian awal ARRAY. Circular Queue mengatasi permasalahan tersebut dengan membuat posisi indeks terakhir terhubung kembali ke indeks pertama, sehingga HEAD dan TAIL dapat bergerak melingkar menggunakan operasi modulo. Dengan mekanisme ini, ruang ARRAY yang telah kosong dapat digunakan kembali tanpa perlu menggeser seluruh elemen. Implementasi Circular Queue umumnya memungkinkan operasi Enqueue dan Dequeue berjalan dalam kompleksitas waktu O(1) [1][2].

2. Priority Queue
Priority Queue merupakan jenis struktur data antrean yang proses pengambilan elemennya ditentukan berdasarkan tingkat prioritas yang dimiliki setiap elemen. Berbeda dengan Queue biasa yang menggunakan prinsip FIFO, Priority Queue akan mendahulukan elemen dengan prioritas lebih tinggi meskipun elemen tersebut dimasukkan setelah elemen lainnya. Apabila terdapat beberapa elemen dengan tingkat prioritas yang sama, urutan kedatangan dapat digunakan sebagai aturan tambahan dalam pemrosesannya. Priority Queue banyak diterapkan pada sistem penjadwalan proses, pengelolaan tugas, sistem pelayanan darurat, dan algoritma pencarian jalur terpendek. Struktur ini dapat diimplementasikan menggunakan ARRAY, linked list, maupun heap, dengan karakteristik kompleksitas operasi yang berbeda bergantung pada metode penyimpanannya [3][4].

3. Double Ended Queue (Deque)
Double Ended Queue atau Deque merupakan pengembangan struktur data Queue yang memungkinkan proses penambahan dan penghapusan elemen dilakukan dari kedua ujung antrean, yaitu bagian depan (Front) dan belakang (Rear). Pada Queue biasa, penambahan elemen hanya dilakukan melalui bagian belakang dan penghapusan dilakukan melalui bagian depan. Sementara itu, Deque memiliki operasi Insert Front, Insert Rear, Delete Front, dan Delete Rear yang memberikan fleksibilitas lebih dalam pengelolaan data. Deque dapat digunakan untuk kebutuhan yang melibatkan manipulasi elemen dari kedua sisi, seperti pemeriksaan palindrome, pengelolaan data pada sliding window, serta implementasi struktur data yang membutuhkan kombinasi karakteristik Stack dan Queue. Implementasi Deque dapat menggunakan ARRAY melingkar maupun Doubly Linked List agar operasi pada kedua ujungnya dapat dilakukan secara efisien [3][5].

4. Queue pada Sistem Penjadwalan Round Robin
Round Robin merupakan salah satu algoritma penjadwalan CPU yang memberikan waktu pemrosesan kepada setiap proses secara bergantian berdasarkan batas waktu tertentu yang disebut Time Quantum. Pada algoritma ini, proses yang siap dijalankan disimpan dalam Ready Queue. Proses yang berada di bagian depan antrean akan memperoleh jatah CPU sesuai Time Quantum. Apabila proses belum selesai setelah jatah waktu tersebut berakhir, proses akan dimasukkan kembali ke bagian belakang antrean untuk menunggu giliran berikutnya. Mekanisme ini memungkinkan setiap proses memperoleh kesempatan penggunaan CPU secara bergantian dan mencegah satu proses menggunakan CPU terlalu lama tanpa memberikan kesempatan kepada proses lainnya. Queue menjadi komponen penting dalam Round Robin karena membantu mengatur urutan pemrosesan dan perpindahan proses secara sistematis [1][6].

5. Queue dalam Algoritma Breadth-First Search (BFS)
Breadth-First Search (BFS) merupakan algoritma traversal yang digunakan untuk mengunjungi simpul pada struktur Graph atau Tree berdasarkan tingkat kedekatannya dari simpul awal. Dalam penerapannya, Queue digunakan untuk menyimpan simpul-simpul yang telah ditemukan tetapi belum diproses. Algoritma dimulai dengan memasukkan simpul awal ke dalam antrean, kemudian mengambil simpul paling depan menggunakan Dequeue untuk memeriksa simpul tetangganya. Setiap simpul tetangga yang belum dikunjungi akan ditandai dan dimasukkan ke dalam Queue menggunakan Enqueue. Proses tersebut dilakukan secara berulang hingga seluruh simpul yang dapat dijangkau selesai dikunjungi. Penggunaan Queue memungkinkan BFS mengunjungi simpul berdasarkan level sehingga dapat digunakan untuk mencari jalur terpendek pada Graph tidak berbobot [1][7].

6. Queue pada Mekanisme Producer–Consumer
Producer–Consumer merupakan konsep pemrosesan data yang melibatkan dua bagian utama, yaitu Producer sebagai pihak yang menghasilkan data dan Consumer sebagai pihak yang mengambil serta memproses data. Queue berperan sebagai media penyimpanan sementara atau Buffer yang menghubungkan kedua proses tersebut. Data yang dihasilkan Producer dimasukkan ke dalam antrean, kemudian Consumer mengambil data berdasarkan urutan kedatangannya. Mekanisme ini memungkinkan Producer dan Consumer bekerja dengan kecepatan yang berbeda tanpa harus selalu menunggu satu sama lain. Apabila Producer menghasilkan data lebih cepat, Queue dapat menampung data sementara hingga Consumer siap memprosesnya. Konsep Producer–Consumer banyak digunakan pada pemrosesan data, komunikasi antarproses, pengelolaan permintaan server, dan sistem streaming [1][8].

7. Queue Menggunakan Dua STACK
Queue dapat diimplementasikan menggunakan dua Stack dengan memanfaatkan perbedaan prinsip LIFO pada Stack dan FIFO pada Queue. Stack pertama digunakan untuk menampung elemen yang masuk melalui operasi Enqueue, sedangkan Stack kedua digunakan untuk menyediakan elemen yang akan dikeluarkan melalui operasi Dequeue. Ketika operasi Dequeue dilakukan dan Stack kedua masih kosong, seluruh elemen dari Stack pertama dipindahkan ke Stack kedua menggunakan operasi Pop dan Push. Proses pemindahan tersebut menyebabkan urutan elemen menjadi terbalik sehingga elemen yang pertama kali dimasukkan berada pada posisi TOP Stack kedua dan dapat dikeluarkan terlebih dahulu. Dengan mekanisme ini, dua Stack dapat digunakan untuk menghasilkan perilaku FIFO seperti Queue. Implementasi tersebut menunjukkan bahwa satu struktur data dapat dibangun menggunakan kombinasi struktur data lainnya [1][9].

8. Kompleksitas Waktu pada Implementasi Queue
Kompleksitas waktu atau Time Complexity merupakan ukuran yang digunakan untuk menggambarkan jumlah operasi yang dibutuhkan algoritma ketika ukuran data bertambah. Pada Queue, kompleksitas waktu bergantung pada implementasi struktur data dan mekanisme yang digunakan dalam setiap operasinya. Enqueue dan Dequeue pada Circular Queue serta Queue berbasis Linked List dengan pengelolaan HEAD dan TAIL umumnya memiliki kompleksitas O(1), karena proses penambahan dan penghapusan hanya melibatkan perubahan indeks atau pointer. Namun, pada Queue linear menggunakan ARRAY yang menerapkan pergeseran elemen setelah Dequeue, operasi penghapusan dapat memiliki kompleksitas O(n) karena elemen-elemen yang tersisa perlu dipindahkan. Analisis kompleksitas waktu diperlukan untuk mengetahui efisiensi suatu implementasi Queue dan menentukan struktur data yang sesuai dengan kebutuhan program [1][2][7].
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
source code queue.h
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    Node *next;
};

struct queue {
    Node *head, *tail;
};

void CreateQueue(queue &Q);
bool isEmpty(queue Q);
bool isFull(queue Q);
void enQueue(queue &Q, const string &nama);
void deQueue(queue &Q);
void viewQueue(queue Q);
void clearQueue(queue &Q);
#endif
```

penjelasan singkat queue.h
File queue.h digunakan sebagai header yang berisi deklarasi struktur data dan fungsi-fungsi yang akan digunakan dalam implementasi Queue menggunakan Linked List. Struktur Node memiliki atribut nama bertipe string untuk menyimpan data nama dan pointer next untuk menghubungkan node dengan node berikutnya. Sementara itu, struktur queue memiliki pointer head dan tail yang digunakan untuk menunjuk node pertama dan node terakhir dalam Queue. File ini juga mendeklarasikan fungsi CreateQueue, isEmpty, isFull, enQueue, deQueue, viewQueue, dan clearQueue yang digunakan untuk mengelola data pada Queue.

### 2. ...

```C++
source code queue.cpp
#include "queue.h"

void CreateQueue(queue &Q) {
    Q.head = Q.tail = nullptr;
}

bool isEmpty(queue Q) {
    return Q.head == nullptr;
}

bool isFull(queue Q) {
    int maxQueue = 20;
    int counter = 0;
    Node *nodeBantu = Q.head;
    while (nodeBantu != Q.tail) {
        counter++;
        nodeBantu = nodeBantu->next;
    }
    return counter >= maxQueue;
}

void enQueue(queue &Q, const string &nama) {
    if (isEmpty(Q)) {
        Node *nodeBaru = new Node(nama, nullptr);
        Q.head = Q.tail = nodeBaru;
    } else {
        Node *nodeBaru = new Node(nama, nullptr);
        Q.tail->next = nodeBaru;
        Q.tail = nodeBaru;
    }
}

void deQueue(queue &Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong";
    } else {
        Node *nodeHapus = Q.head;
        Q.head = Q.head->next;
        delete nodeHapus;
    }
}

void viewQueue(queue Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong";
    } else {
        Node *nodeBantu = Q.head;
        while (nodeBantu != nullptr) {
            cout << "Nama : " << nodeBantu->nama;
            nodeBantu = nodeBantu->next;
        }
    }
}


void clearQueue(queue &Q) {
    if (!isEmpty(Q)) {
        cout << "Queue kosong";
    }else{
        Node *nodeHapus = Q.head;
        while (nodeHapus != nullptr) {
            nodeHapus = nodeHapus->next;
            deQueue(Q);
        }
    }
}

penjelasan singkat queue.cpp
File queue.cpp berisi implementasi dari fungsi-fungsi yang telah dideklarasikan pada queue.h. Fungsi CreateQueue digunakan untuk menginisialisasi Queue dengan mengatur pointer head dan tail menjadi nullptr, sedangkan isEmpty digunakan untuk memeriksa apakah Queue kosong dengan melihat apakah head bernilai nullptr. Fungsi isFull digunakan untuk menghitung jumlah node dalam Queue dengan bantuan variabel counter dan pointer nodeBantu, kemudian membandingkannya dengan batas maksimum sebanyak 20 data. Fungsi enQueue digunakan untuk menambahkan data baru ke dalam Queue dengan membuat node baru, kemudian menghubungkannya ke bagian belakang Queue melalui pointer tail. Fungsi deQueue digunakan untuk menghapus data paling depan dengan memindahkan head ke node berikutnya dan menghapus node sebelumnya menggunakan delete. Fungsi viewQueue digunakan untuk menampilkan seluruh data nama yang tersimpan dengan menelusuri node dari head hingga nullptr, sedangkan clearQueue digunakan untuk menghapus seluruh node yang ada di dalam Queue dengan memanggil fungsi deQueue secara berulang.

### 3. ...

```C++
source code main.cpp
```
#include "queue.h"
#include <iostream>
using namespace std;

int main() {
    queue Q;
    CreateQueue(Q);

    enQueue(Q, "Gilar");
    enQueue(Q, "Aflah");
    enQueue(Q, "Aedil");
    enQueue(Q, "Fathir");
    enQueue(Q, "Kevin");
    enQueue(Q, "Zulfa");
    cout << endl;

    cout << "--- Isi Queue Setelah enQueue ---" << endl;
    viewQueue(Q);

    clearQueue(Q);
    return 0;
}

penjelasan singkat main.cpp
File main.cpp berfungsi sebagai program utama yang menjalankan operasi Queue menggunakan Linked List. Program diawali dengan membuat variabel Queue Q dan memanggil CreateQueue(Q) untuk menginisialisasi Queue. Selanjutnya, program menambahkan enam data nama, yaitu Gilar, Aflah, Aedil, Fathir, Kevin, dan Zulfa, menggunakan fungsi enQueue. Setelah seluruh data ditambahkan, program menampilkan tulisan --- Isi Queue Setelah enQueue --- dan memanggil viewQueue(Q) untuk menampilkan semua data yang tersimpan dalam Queue. Terakhir, program memanggil clearQueue(Q) untuk menghapus seluruh data dalam Queue sebelum program berakhir dengan return 0

## Guided 2

### 1. ...
```C++
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;

struct queue {
    string nama[MAX];
    int head;
    int tail;
};

bool isEmpty(queue Q);
bool isFull(queue Q);
void createQueue(queue &Q);
void enQueue(queue &Q, string nama);
void deQueue(queue &Q);
void viewQueue(queue Q);

#endif

penjelasan singkat queue.h
File queue.h merupakan header file yang digunakan untuk mendefinisikan struktur data Queue serta deklarasi fungsi-fungsi yang diperlukan dalam pengelolaan antrean. Program menggunakan library iostream untuk proses input dan output serta library string untuk menyimpan data berupa nama. Konstanta MAX ditetapkan sebesar 5 sebagai kapasitas maksimum elemen yang dapat ditampung oleh Queue. Struktur queue memiliki array nama bertipe string untuk menyimpan nama, serta variabel head dan tail bertipe integer yang digunakan untuk menandai posisi elemen pertama dan terakhir dalam antrean. Selain itu, terdapat deklarasi fungsi isEmpty() untuk memeriksa kondisi Queue kosong, isFull() untuk memeriksa kondisi Queue penuh, CreateQueue() untuk menginisialisasi antrean, enQueue() untuk menambahkan nama ke dalam antrean, deQueue() untuk menghapus elemen terdepan, dan viewQueue() untuk menampilkan isi Queue. Header guard #ifndef, #define, dan #endif digunakan untuk mencegah header file diproses berulang kali ketika di-include ke dalam file program lain.

### 2. ...

```C++
source code queue.cpp
#include "queue.h"
#include <iostream>

using namespace std;

// NOTE : 
// Implementasi 1 = head diam, tail bergerak (Queue Linear Statis, kerana head nya tetap diam)
// Implementasi 2 = head bergerak, tail bergerak (Queue Linear Dinamis, karena head & tail nya sama-sama bergerak)
// Implementasi 3 = head dan tail berputar (Queue Circular, karena jika udh mentok tapi masih ada space, diputar sehingga tail bisa ada didepan head)

bool isEmpty(queue Q){
    if(Q.head == -1 && Q.tail == -1){
        return true;
    } else {
        return false;
    }
}

//isFull implmenetasi 1 & 2
bool isFull(queue Q){
        if(Q.tail == MAX - 1){
        return true;
    } else {
        return false;
    }
}

//isFull implementasi 3
// bool isFull(queue Q){
//     if((Q.tail + 1) % MAKSIMAL == Q.head){
//         return true;
//     } else {
//         return false;
//     }
// }

void CreateQueue(queue &Q){ //terbentuk queue dengan head = -1 dan tail = -1 
    Q.head = -1;
    Q.tail = -1;
}
 

//enqueue implementasi 1 & 2
void enQueue(queue &Q, string nama){
    if(isFull(Q) == true){
        cout << "Queue sudah penuh!" << endl;
    } else {
        if(isEmpty(Q) == true){
            Q.head = Q.tail = 0;
        } else {
            Q.tail++;
        }
        Q.nama[Q.tail] = nama;
        cout << "nama " << nama << " berhasil ditambahkan kedalam queue!" << endl;
    }
}

// //enQueue implementasi 3
// void enQueue(queue &Q, string nama){
//     if(isFull(Q) == true){
//         cout << "Queue sudah penuh!" << endl;
//     } else {
//         if(isEmpty(Q) == true){
//             Q.head = Q.tail = 0;
//         } else {
//             Q.tail = (Q.tail + 1) % MAKSIMAL; // bergerak melingkar
//         }
//         Q.nama[Q.tail] = nama;
//         cout << "nama " << nama << " berhasil ditambahkan kedalam queue!" << endl;
//     }
// }

//dequeue implementasi 1
void deQueue(queue &Q){
    if(isEmpty(Q) == true){
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Mengahapus data " << Q.nama[Q.head] << "..." << endl;
        for(int i = 0; i < Q.tail; i++){
            Q.nama[i] =  Q.nama[i+1];
        }
        Q.tail--;
        if(Q.tail < 0){ //kalo semua isi queue nya udh dikeluarin, set head & tail ke -1
            Q.head = -1;
            Q.tail = -1;
        }
    }
}

// //dequeue implementasi 2
// void deQueue(queue &Q){
//     if(isEmpty(Q) == true){
//         cout << "Queue kosong!" << endl;
//     } else {
//         cout << "Mengahapus data " << Q.nama[Q.head] << "..." << endl;
//         Q.head++;
//         if(Q.head > Q.tail){ //kalo elemennya udh abis (head akan lebih 1 dari tail), maka reset ulang head & tail ke -1
//             Q.head = -1;
//             Q.tail = -1;
//         }
//     }
// }

// //deQueue implementasi 3
// void deQueue(queue &Q){
//     if(isEmpty(Q) == true){
//         cout << "Queue kosong!" << endl;
//     } else {
//         cout << "Mengahapus data " << Q.nama[Q.head] << "..." << endl;
//         if(Q.head == Q.tail){ //kalo elemennya tinggal 1, langsungkan saja head & tail nya reset ke -1
//             Q.head = -1;
//             Q.tail = -1;
//         } else {
//             Q.head = (Q.head + 1) % MAKSIMAL; // bergerak melingkar
//         }
//     }
// }

//viewQueue implementasi 1 & 2
void viewQueue(queue Q){
    if(isEmpty(Q) == true){
        cout << "Queue kosong!" << endl;
    } else {
        for(int i = Q.head; i <= Q.tail; i++){
            cout << i -  Q.head + 1 << ". " << Q.nama[i] << endl;
        }
    }
    cout << endl;
}

// //viewQueue implementasi 3
// void viewQueue(queue Q){
//     if(isEmpty(Q) == true){
//         cout << "Queue kosong!" << endl;
//     } else {
//         int i = Q.head;
//         int count = 1;
//         while(true){
//             cout << count << ". " << Q.nama[i] << endl;
//             if(i == Q.tail){
//                 break;
//             }
//             i = (i + 1) % MAKSIMAL;
//             count++;
//         }   
//     }
// }
penjelasan singkat queue.cpp
File queue.cpp merupakan file implementasi yang berisi fungsi-fungsi untuk mengelola struktur data Queue berdasarkan mekanisme Queue Linear Statis (Alternatif 1), yaitu posisi head tetap berada di indeks 0 selama Queue tidak kosong, sedangkan tail bergerak mengikuti penambahan dan pengurangan elemen. Fungsi isEmpty() digunakan untuk memeriksa apakah Queue kosong dengan melihat kondisi head dan tail yang bernilai -1, sedangkan isFull() digunakan untuk memeriksa apakah posisi tail telah mencapai indeks maksimum array, yaitu MAX - 1. Fungsi CreateQueue() menginisialisasi Queue dengan mengatur head dan tail menjadi -1. Fungsi enQueue() digunakan untuk menambahkan nama ke dalam antrean dengan memeriksa kondisi penuh terlebih dahulu, kemudian mengatur posisi head dan tail jika Queue masih kosong atau menggeser tail apabila sudah terdapat elemen, lalu menyimpan nama pada indeks tail. Fungsi deQueue() digunakan untuk menghapus elemen paling depan dengan menampilkan nama yang dihapus, menggeser seluruh elemen setelahnya satu posisi ke kiri, mengurangi nilai tail, serta mengembalikan head dan tail ke -1 apabila Queue telah kosong. Sementara itu, fungsi viewQueue() digunakan untuk menampilkan seluruh nama yang tersimpan di dalam Queue beserta nomor urutnya. Pada file ini juga terdapat implementasi alternatif 2 dan alternatif 3 yang diberi komentar, yaitu mekanisme head dan tail bergerak serta Queue Circular, tetapi keduanya tidak dijalankan karena implementasi aktif yang digunakan adalah Alternatif 1.

### 3. ...

```C++
source code main.cpp
```
#include "queue.h"
#include <iostream>

using namespace std;

int main(){
    queue Q;

    CreateQueue(Q);
    enQueue(Q, "Dimas");
    enQueue(Q, "Arvin");
    enQueue(Q, "Rizal");
    enQueue(Q, "Hafizh");
    enQueue(Q, "Fathur");
    enQueue(Q, "Daffa");
    cout << endl;

    cout << "--- Isi Queue Setelah enQueue ---" << endl;
    viewQueue(Q);
    cout << endl;

    deQueue(Q);
    deQueue(Q);
    deQueue(Q);
    deQueue(Q);
    // deQueue(Q);
    // deQueue(Q);
    cout << endl;

    cout << "--- Isi Queue Setelah deQueue ---" << endl;
    viewQueue(Q);

    return 0;
}
penjelasan singkat main.cpp
File main.cpp merupakan program utama yang digunakan untuk menjalankan pengujian struktur data Queue dengan data berupa nama. Program diawali dengan membuat variabel Q bertipe queue, kemudian menginisialisasi antrean menggunakan fungsi CreateQueue(). Selanjutnya, program melakukan enam kali pemanggilan enQueue() untuk memasukkan nama Dimas, Arvin, Rizal, Hafizh, Fathur, dan Daffa ke dalam Queue. Karena kapasitas Queue ditentukan sebanyak lima elemen, nama Daffa tidak dapat dimasukkan dan program akan menampilkan pesan bahwa Queue sudah penuh. Setelah proses penambahan selesai, program menampilkan isi antrean menggunakan viewQueue() melalui bagian "--- Isi Queue Setelah enQueue ---". Selanjutnya, program menjalankan empat kali operasi deQueue() untuk menghapus elemen terdepan secara berurutan, yaitu Dimas, Arvin, Rizal, dan Hafizh. Dua pemanggilan deQueue() lainnya yang terdapat dalam komentar tidak dijalankan. Setelah proses penghapusan selesai, program kembali menampilkan isi Queue melalui viewQueue() pada bagian "--- Isi Queue Setelah deQueue ---" untuk memperlihatkan elemen yang masih tersisa. Program kemudian diakhiri dengan return 0 yang menandakan program selesai dijalankan dengan normal.


## Unguided

### 1. ADT QUEUE ARRAY
 1) Buatlah ADT Queue menggunakan ARRAY sebagai berikut di dalam file “queue.h”:
 2) Buatlah implementasi ADT Queue pada file “queue.cpp” dengan menerapkan mekanisme queue Alternatif 2 (head bergerak, tail bergerak).
 3) Buatlah implementasi ADT Queue pada file “queue.cpp” dengan menerapkan mekanisme queue Alternatif 3 (head dan tail berputar).

```C++
source code queue.h

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

const int NMAX = 5;

typedef int infotype;

struct Queue {
    infotype info[NMAX];
    int head;
    int tail;
};

void CreateQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);

#endif

### Output Unguided 1 :

##### Output 1

contoh :
![Screenshot Output Unguided 1_1]


penjelasan unguided 1

### Penjelasan queue.h
File queue.h merupakan header file yang digunakan untuk mendefinisikan struktur data Queue, tipe data yang digunakan, konstanta kapasitas ARRAY, serta deklarasi fungsi-fungsi yang akan digunakan pada program. Pada program ini, NMAX ditetapkan sebesar 5 sebagai kapasitas maksimum Queue, sedangkan infotype didefinisikan menggunakan tipe data int untuk menyimpan elemen antrean. Struktur Queue terdiri dari ARRAY info untuk menyimpan data, variabel head untuk menunjukkan posisi elemen pertama, dan tail untuk menunjukkan posisi elemen terakhir. Selain itu, file ini mendeklarasikan beberapa fungsi seperti CreateQueue(), isEmptyQueue(), isFullQueue(), enqueue(), dequeue(), dan printInfo() yang digunakan untuk menginisialisasi, memeriksa kondisi, menambah, menghapus, serta menampilkan elemen Queue.

### 2. stack.cpp
```C++
source code stack.cpp
```
#include "queue.h"

bool isEmptyQueue(Queue Q) {
    return Q.head == -1 && Q.tail == -1;
}

bool isFullQueue(Queue Q) {
    return Q.tail == NMAX - 1;
}

void CreateQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = 0;
            Q.tail = 0;
        } else {
            Q.tail++;
        }

        Q.info[Q.tail] = x;
    }
}

infotype dequeue(Queue &Q) {
    infotype x;

    if (isEmptyQueue(Q)) {
        cout << "Queue kosong" << endl;
        return -1;
    } else {
        x = Q.info[Q.head];

        for (int i = Q.head; i < Q.tail; i++) {
            Q.info[i] = Q.info[i + 1];
        }

        Q.tail--;

        if (Q.tail < 0) {
            Q.head = -1;
            Q.tail = -1;
        }

        return x;
    }
}

void printInfo(Queue Q) {
    cout << "H - T | Queue Info" << endl;

    if (isEmptyQueue(Q)) {
        cout << "- - | empty queue" << endl;
    } else {
        cout << Q.head << " - " << Q.tail << " | ";

        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }

        cout << endl;
    }
}

### Output Unguided 2 :

##### Output 1

contoh :
![Screenshot Output Unguided 2_1]


penjelasan stack.cpp
### Penjelasan queue.cpp
File queue.cpp berisi implementasi fungsi-fungsi yang telah dideklarasikan pada queue.h. Fungsi isEmptyQueue() digunakan untuk memeriksa apakah Queue dalam kondisi kosong dengan melihat nilai head dan tail yang bernilai -1, sedangkan isFullQueue() digunakan untuk memeriksa apakah posisi tail telah mencapai batas maksimum ARRAY. Fungsi CreateQueue() menginisialisasi Queue dengan mengatur head dan tail menjadi -1. Fungsi enqueue() digunakan untuk menambahkan elemen baru ke dalam antrean dengan mengatur posisi head dan tail ketika Queue masih kosong atau menggeser tail ketika terdapat elemen sebelumnya. Fungsi dequeue() digunakan untuk menghapus elemen paling depan dengan mengambil nilai pada posisi head, kemudian menggeser elemen-elemen setelahnya ke arah kiri dan mengurangi nilai tail. Sementara itu, fungsi printInfo() digunakan untuk menampilkan posisi head, tail, dan seluruh elemen yang tersimpan dalam Queue sehingga perubahan kondisi antrean dapat diamati setelah setiap operasi dilakukan


### 3. main.cpp

```C++
source code main.cpp
```

#include "queue.h"

int main() {
    cout << "Hello World" << endl;

    Queue Q;
    CreateQueue(Q);

    cout << "----------------------" << endl;
    cout << "H - T | Queue Info" << endl;
    cout << "----------------------" << endl;
    printInfo(Q);

    enqueue(Q, 5);
    printInfo(Q);

    enqueue(Q, 2);
    printInfo(Q);

    enqueue(Q, 7);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    enqueue(Q, 4);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    return 0;
}
    


### Output Unguided 3 :


##### Output 1

contoh :
![Screenshot Output Unguided 3_1] (https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Modul%2010/Unguided/unguided.png)

penjelasan unguided 3
### Penjelasan Soal 3
File main.cpp merupakan program utama yang digunakan untuk menjalankan dan menguji implementasi struktur data Queue. Program diawali dengan menampilkan tulisan "Hello World", kemudian membuat variabel Queue Q dan menginisialisasinya menggunakan fungsi CreateQueue(). Selanjutnya, program menampilkan informasi awal Queue melalui fungsi printInfo() untuk menunjukkan bahwa antrean masih kosong. Setelah itu, program melakukan beberapa operasi enqueue() untuk memasukkan angka 5, 2, dan 7 ke dalam antrean, yang masing-masing diikuti pemanggilan printInfo() untuk menampilkan kondisi Queue. Program kemudian menjalankan operasi dequeue() untuk menghapus elemen paling depan, menambahkan angka 4 menggunakan enqueue(), dan melakukan dua operasi dequeue() berikutnya. Setiap operasi diikuti dengan printInfo() agar perubahan posisi head, tail, dan isi antrean dapat diamati secara langsung. Dengan demikian, program utama ini digunakan untuk menguji operasi penambahan dan penghapusan data pada Queue menggunakan mekanisme Alternatif 1, yaitu head diam dan tail bergerak.

## Kesimpulan

Pada Modul 8 dan praktikum minggu 10, saya mempelajari struktur data Queue yang menggunakan prinsip FIFO (*First In, First Out*), yaitu data yang pertama masuk akan menjadi data pertama yang keluar. Saya memahami operasi dasar Queue seperti `enQueue` untuk menambahkan data, `deQueue` untuk menghapus data, `isEmpty` dan `isFull` untuk memeriksa kondisi Queue, serta `viewQueue` untuk menampilkan isi Queue. Selain itu, saya mempelajari implementasi Queue menggunakan Array dan Linked List, termasuk Queue linear dan Queue circular. Pada implementasi Linked List, penggunaan pointer `head` dan `tail` membantu dalam mengelola penambahan dan penghapusan data tanpa perlu menggeser elemen seperti pada Array. Melalui praktikum ini, saya menjadi lebih memahami cara kerja Queue, penerapan prinsip FIFO, serta penggunaan pointer dan node dalam pengelolaan data secara terstruktur.
...

## Referensi
[1] Kulcu, S. (n.d.). Chapter 8: Queues and Deques — Data Structures Lecture Notes. https://sercankulcu.github.io/files/data_structures/notes/Chapter_08_Queues_and_Deques_Lecture_Notes.html

[2] Cornell University. (2025). Stacks and Queues. CS 2110. https://www.cs.cornell.edu/courses/cs2110/2025fa/lectures/lec15/

[3] Kulcu, S. (n.d.). Chapter 8: Queues and Deques. Data Structures Lecture Notes. https://sercankulcu.github.io/files/data_structures/notes/Chapter_08_Queues_and_Deques_Lecture_Notes.html

[4] NEBians. (n.d.). Queue — BCA 201 Data Structure and Algorithms Notes. https://nebians.consica.com.np/app/syllabus/bca-course/data-structure-and-algorithms/unit-3/

[5] Kulcu, S. (n.d.). Chapter 7: Queues — DSA with C Lecture Notes. https://sercankulcu.github.io/files/dsa_c/notes/Chapter_07_Queues_Lecture_Notes.html

[6] Kulcu, S. (n.d.). Chapter 8: Queues and Deques — Round-Robin Scheduling. https://sercankulcu.github.io/files/data_structures/notes/Chapter_08_Queues_and_Deques_Lecture_Notes.html

[7] University of Illinois Urbana-Champaign. (2025). CS 225 Lecture 8: Queue Implementation and Circular Queue. https://courses.physics.illinois.edu/cs225/fa2025/assets/lectures/notes/Lecture_8.pdf

[8] Kulcu, S. (n.d.). Chapter 8: Queues and Deques — Producer–Consumer Pattern. https://sercankulcu.github.io/files/data_structures/notes/Chapter_08_Queues_and_Deques_Lecture_Notes.html

[9] Kulcu, S. (n.d.). Chapter 8: Queues and Deques — Queue from Two Stacks. https://sercankulcu.github.io/files/data_structures/notes/Chapter_08_Queues_and_Deques_Lecture_Notes.html
