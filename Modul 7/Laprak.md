# <h1 align="center">Laporan Praktikum Modul 6 - DOUBLY LINKED LIST (BAGIAN PERTAMA)
 </h1>

<p align="center">Raga Prasetyo - 109082500028</p>

1. Pengertian Doubly Linked List
Doubly Linked List merupakan salah satu bentuk struktur data linear yang terdiri dari sekumpulan node yang saling terhubung menggunakan pointer. Setiap node memiliki tiga bagian utama, yaitu bagian untuk menyimpan data, pointer next yang menunjuk ke node berikutnya, dan pointer prev yang menunjuk ke node sebelumnya. Berbeda dengan Singly Linked List yang hanya memungkinkan penelusuran dalam satu arah, Doubly Linked List memungkinkan proses penelusuran data dilakukan dari depan ke belakang maupun sebaliknya. Struktur ini memberikan fleksibilitas dalam mengakses dan mengelola elemen yang terdapat di dalam list [1].

Dalam penerapannya, Doubly Linked List memiliki dua pointer utama pada struktur list, yaitu first dan last. Pointer first digunakan untuk menunjukkan node pertama, sedangkan pointer last menunjukkan node terakhir. Pada node pertama, pointer prev bernilai NULL karena tidak terdapat node sebelumnya. Sementara itu, pada node terakhir, pointer next bernilai NULL karena tidak terdapat node setelahnya. Hubungan antarnode tersebut memungkinkan setiap elemen memiliki keterkaitan dua arah sehingga proses manipulasi data dapat dilakukan dengan lebih fleksibel [2].

2. Struktur dan Mekanisme Pointer pada Doubly Linked List
Struktur Doubly Linked List dibangun menggunakan konsep pointer yang berfungsi untuk menyimpan alamat memori dari node lain. Setiap node tidak harus menempati lokasi memori yang berurutan karena hubungan antarelemen dibentuk melalui alamat yang disimpan pada pointer. Dengan demikian, penambahan maupun penghapusan elemen dapat dilakukan tanpa harus memindahkan seluruh data seperti pada struktur data berbasis array [1].

Pointer next dan prev memiliki peran yang saling melengkapi dalam menjaga hubungan antarnode. Ketika sebuah node baru ditambahkan, hubungan kedua pointer harus diperbarui agar node tersebut terhubung dengan node sebelum dan sesudahnya. Sebaliknya, ketika sebuah node dihapus, hubungan antara node yang berada di sebelah kiri dan kanannya harus disambungkan kembali. Kesalahan dalam pengaturan pointer dapat menyebabkan hubungan antarnode terputus atau membuat proses penelusuran list tidak berjalan dengan benar [2].

3. Operasi Penambahan Data (Insertion)
Insertion merupakan proses menambahkan node baru ke dalam Doubly Linked List. Penambahan data dapat dilakukan pada beberapa posisi, seperti bagian awal, bagian akhir, maupun di antara dua node yang sudah tersedia. Pada proses ini, pointer next dan prev harus disesuaikan agar hubungan dua arah antar-node tetap terjaga.

Penambahan pada bagian awal dilakukan dengan menghubungkan pointer next node baru ke node pertama yang sebelumnya sudah ada. Kemudian, pointer prev dari node pertama tersebut diarahkan ke node baru dan pointer first diperbarui. Sementara itu, penambahan pada bagian akhir dilakukan dengan menghubungkan pointer prev node baru ke node terakhir sebelumnya, kemudian pointer next node terakhir diarahkan ke node baru dan pointer last diperbarui [2].

Selain kedua posisi tersebut, insertion juga dapat dilakukan setelah atau sebelum node tertentu. Pada proses insertAfter, node baru ditempatkan setelah node yang telah ditentukan. Sebaliknya, insertBefore digunakan untuk menempatkan node baru sebelum node tujuan. Kedua operasi tersebut membutuhkan penyesuaian hubungan pointer pada node baru maupun node yang berada di sekitarnya.

4. Operasi Penghapusan Data (Deletion)
Deletion merupakan proses menghapus node tertentu dari Doubly Linked List. Penghapusan dapat dilakukan pada node pertama, node terakhir, maupun node yang berada di tengah list. Proses ini tidak hanya menghilangkan data dari urutan list, tetapi juga harus memastikan bahwa hubungan pointer pada node yang tersisa tetap terhubung dengan benar.

Pada penghapusan node pertama, pointer first dipindahkan ke node berikutnya, kemudian pointer prev pada node pertama yang baru diatur menjadi NULL. Pada penghapusan node terakhir, pointer last dipindahkan ke node sebelumnya dan pointer next pada node terakhir yang baru diatur menjadi NULL. Sementara itu, penghapusan node di tengah dilakukan dengan menghubungkan node sebelum dan sesudah node yang dihapus secara langsung [2].

Setelah node berhasil dilepaskan dari hubungan list, memori yang digunakan oleh node tersebut perlu dibebaskan agar tidak terjadi pemborosan penggunaan memori. Dalam bahasa C++, proses ini dapat dilakukan menggunakan perintah delete terhadap pointer node yang sudah tidak digunakan. Oleh karena itu, pengelolaan pointer dan memori menjadi bagian penting dalam proses deletion.

5. Operasi Pembaruan, Penampilan, dan Pencarian Data
Selain penambahan dan penghapusan, Doubly Linked List juga mendukung operasi pembaruan, penampilan, dan pencarian data. Operasi pembaruan (update) digunakan untuk mengubah informasi yang tersimpan pada suatu node tanpa harus menghapus dan membuat node baru. Pembaruan dapat dilakukan berdasarkan posisi node, misalnya node pertama, node terakhir, maupun node yang berada sebelum atau sesudah node tertentu.

Operasi penampilan data (traversal) dilakukan dengan mengunjungi setiap node secara berurutan untuk membaca dan menampilkan informasi yang tersimpan. Penelusuran dapat dimulai dari pointer first menggunakan next atau dari pointer last menggunakan prev. Kemampuan tersebut menjadi salah satu kelebihan Doubly Linked List karena proses penelusuran dapat dilakukan dalam dua arah [1].

Sementara itu, pencarian (searching) merupakan proses menemukan data berdasarkan kriteria tertentu. Pencarian dapat dilakukan dengan membandingkan nilai pada setiap node hingga ditemukan data yang sesuai. Dalam pengelolaan data makanan, pencarian dapat diterapkan berdasarkan nama makanan, jenis makanan, maupun nilai rating minimum. Proses ini membantu pengguna menemukan informasi yang dibutuhkan tanpa harus memeriksa seluruh data secara manual.

6. Kelebihan dan Kekurangan Doubly Linked List
Doubly Linked List memiliki beberapa kelebihan dibandingkan dengan Singly Linked List. Salah satu kelebihannya adalah kemampuan melakukan penelusuran data dalam dua arah sehingga akses terhadap node sebelumnya maupun berikutnya menjadi lebih mudah. Selain itu, proses penghapusan node tertentu dapat dilakukan secara lebih efisien apabila alamat node tersebut sudah diketahui karena pointer pada node sebelum dan sesudahnya dapat langsung diperbarui tanpa harus mencari node sebelumnya dari awal [1].

Meskipun demikian, Doubly Linked List juga memiliki beberapa kekurangan. Setiap node membutuhkan ruang memori tambahan untuk menyimpan pointer prev, sehingga penggunaan memorinya lebih besar dibandingkan dengan Singly Linked List. Selain itu, proses penambahan dan penghapusan node membutuhkan pengaturan pointer yang lebih banyak. Hal tersebut membuat implementasinya lebih kompleks dan meningkatkan kemungkinan terjadinya kesalahan apabila hubungan antarpointer tidak diperbarui dengan benar [3].

7. Penerapan Doubly Linked List dalam Pengelolaan Data
Doubly Linked List dapat diterapkan pada berbagai sistem yang membutuhkan pengelolaan data secara dinamis dan memungkinkan penelusuran dua arah. Beberapa contohnya adalah navigasi riwayat halaman pada browser, pengelolaan daftar putar musik, fitur undo dan redo pada aplikasi, serta sistem pengelolaan daftar data yang membutuhkan penambahan dan penghapusan elemen secara fleksibel [3].

Dalam program pengelolaan data makanan, Doubly Linked List dapat digunakan untuk menyimpan informasi setiap makanan dalam sebuah node. Informasi tersebut meliputi nama makanan, jenis makanan, harga, dan rating. Setiap data makanan dihubungkan dengan node lainnya menggunakan pointer next dan prev. Melalui struktur ini, pengguna dapat menambahkan makanan baru, memperbarui informasi, mencari makanan berdasarkan kriteria tertentu, serta menghapus data yang tidak lagi diperlukan. Dengan demikian, penggunaan Doubly Linked List dapat membantu proses pengelolaan data makanan menjadi lebih terstruktur dan fleksibel.

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
source code listmakanan.h
#ifndef LISTMAKANAN_H
#define LISTMAKANAN_H
#define Nil NULL

#include <iostream>
using namespace std;

struct makanan
{
    string nama;
    string jenis;
    float harga;
    float rating;
};

typedef makanan dataMakanan;

typedef struct node *address;

struct node
{
    dataMakanan isidata;
    address next;
    address prev;
};

struct linkedlist
{
    address first;
    address last;
};

bool isEmpty(linkedlist List);
void createList(linkedlist &List);
address alokasi(string nama, string jenis, float harga, float rating);
void dealokasi(address &node);

void insertFirst(linkedlist &List, address nodeBaru);
void insertLast(linkedlist &List, address nodeBaru);
void insertAfter(linkedlist &List, address nodeBaru, address Prev);
void insertBefore(linkedlist &List, address nodeBaru, address nodeNext);

void printList(linkedlist List);

void updateFirst(linkedlist List);
void updateLast(linkedlist List);
void updateAfter(linkedlist List, address prev);
void updateBefore(linkedlist List, address nodeNext);

// Searching
void findByName(linkedlist List, string nama);
void findByJenis(linkedlist List, string jenis);
void findByMinRating(linkedlist List, float minRating);

// Delete
void deleteFirst(linkedlist &List);
void deleteLast(linkedlist &List);
void deleteAfter(linkedlist &List, address Prev);
void deleteBefore(linkedlist &List, address nodeNext);

void deleteNode(linkedlist &List, address target);
void deleteByName(linkedlist &List, string nama);

#endif
```

penjelasan singkat guided 1
Kode `ListMakanan.h` merupakan file header yang berfungsi sebagai deklarasi struktur data dan fungsi-fungsi yang digunakan dalam program pengelolaan data makanan menggunakan Doubly Linked List. Pada bagian awal, terdapat struktur `makanan` yang menyimpan informasi berupa nama, jenis, harga, dan rating makanan. Selanjutnya, terdapat tipe data `address` berupa pointer yang menunjuk ke sebuah node, sedangkan struktur `node` memiliki tiga bagian, yaitu `isidata` untuk menyimpan data makanan, `next` untuk menunjuk ke node berikutnya, dan `prev` untuk menunjuk ke node sebelumnya. Struktur `linkedlist` digunakan untuk menyimpan alamat node pertama (`first`) dan node terakhir (`last`) dalam list. Selain itu, file ini mendeklarasikan berbagai fungsi untuk mengelola linked list, seperti membuat list, mengalokasikan dan menghapus memori node, menambahkan data di posisi pertama, terakhir, sebelum, maupun sesudah node tertentu, serta menampilkan isi list. Terdapat juga fungsi pembaruan data (update), pencarian berdasarkan nama, jenis, dan rating minimum (searching), serta penghapusan node berdasarkan posisi maupun nama makanan (deletion). Dengan adanya file header ini, seluruh struktur dan deklarasi fungsi dapat digunakan oleh file implementasi `listmakanan.cpp` dan program utama `main.cpp` sehingga kode menjadi lebih terorganisasi dan mudah dikelola.

### 2. ...

```C++
source code listmakanan.cpp
#include "listMakanan.h"
#include <iostream>
#include <string>
using namespace std;

bool isEmpty(linkedlist List)
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

void createList(linkedlist &List)
{
    List.first = Nil;
    List.last = Nil;
}

// pembuatan node baru dengan menerapkan manajemen memori
address alokasi(string nama, string jenis, float harga, float rating)
{
    address nodeBaru = new node;
    nodeBaru->isidata.nama = nama;
    nodeBaru->isidata.jenis = jenis;
    nodeBaru->isidata.harga = harga;
    nodeBaru->isidata.rating = rating;
    nodeBaru->next = Nil;
    nodeBaru->prev = Nil;
    return nodeBaru;
}

void dealokasi(address &node)
{
    node->next = Nil;
    node->prev = Nil;
    delete node;
}

void insertFirst(linkedlist &List, address nodeBaru)
{
    if (isEmpty(List))
    {
        List.first = List.last = nodeBaru;
    }
    else
    {
        nodeBaru->next = List.first;
        List.first->prev = nodeBaru;
        List.first = nodeBaru;
    }
    cout << "Node " << nodeBaru->isidata.nama << " berhasil ditambahkan sebagai node pertama list" << endl;
}

void insertLast(linkedlist &List, address nodeBaru)
{
    if (isEmpty(List) == true)
    {
        List.first = List.last = nodeBaru;
    }
    else
    {
        nodeBaru->prev = List.last;
        List.last->next = nodeBaru;
        List.last = nodeBaru;
    }
    cout << "Node " << nodeBaru->isidata.nama << " berhasil ditambahkan sebagai node terakhir list" << endl;
}

void insertAfter(linkedlist &List, address nodeBaru, address nodePrev)
{
    if (isEmpty(List) == true)
    {
        List.first = List.last = nodeBaru;
    }
    else
    {
        if (nodePrev != Nil)
        {
            if (nodePrev == List.last)
            {
                insertLast(List, nodeBaru);
            }
            else
            {
                nodeBaru->next = nodePrev->next;
                nodeBaru->prev = nodePrev;
                (nodePrev->next)->prev = nodeBaru;
                nodePrev->next = nodeBaru;
                cout << "Node " << nodeBaru->isidata.nama << " berhasil ditambahkan setelah node " << nodePrev->isidata.nama << endl;
            }
        }
        else
        {
            cout << "node sebelumnya (nodePrev) tidak valid!" << endl;
        }
    }
}

void insertBefore(linkedlist &List, address nodeBaru, address nodeNext)
{
    if (isEmpty(List) == true)
    {
        List.first = List.last = nodeBaru;
    }
    else
    {
        if (nodeNext != Nil)
        {
            if (nodeNext == List.first)
            {
                insertFirst(List, nodeBaru);
            }
            else
            {
                nodeBaru->next = nodeNext;
                nodeBaru->prev = nodeNext->prev;
                (nodeNext->prev)->next = nodeBaru;
                nodeNext->prev = nodeBaru;
                cout << "Node " << nodeBaru->isidata.nama << " berhasil ditambahkan sebelum node " << nodeNext->isidata.nama << endl;
            }
        }
        else
        {
            cout << "node setelahnya (nodeNext) tidak valid!" << endl;
        }
    }
}

void printList(linkedlist List)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        while (nodeBantu != Nil)
        {
            cout << "Nama makanan : " << nodeBantu->isidata.nama << endl;
            cout << "Jenis        : " << nodeBantu->isidata.jenis << endl;
            cout << "Harga        : " << nodeBantu->isidata.harga << endl;
            cout << "Rating       : " << nodeBantu->isidata.rating << endl;
            cout << "-------------------------------" << endl;
            nodeBantu = nodeBantu->next;
        }
    }
}

void updateFirst(linkedlist List)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        cout << "Masukkan update data node pertama : " << endl;
        cout << "Nama makanan : ";
        getline(cin, List.first->isidata.nama);
        cout << "Jenis makanan : ";
        getline(cin, List.first->isidata.jenis);
        cout << "Harga : ";
        cin >> List.first->isidata.harga;
        cout << "Rating : ";
        cin >> List.first->isidata.rating;
        cin.ignore(); // menghapus karakter newline (/n) dari input buffer
        cout << "Data Berhasil Diupdate!" << endl;
        cout << endl;
    }
}

void updateLast(linkedlist List)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        cout << "Masukkan update data node terakhir : " << endl;
        cout << "Nama makanan : ";
        getline(cin, List.last->isidata.nama);
        cout << "Jenis makanan : ";
        getline(cin, List.last->isidata.jenis);
        cout << "Harga : ";
        cin >> List.last->isidata.harga;
        cout << "Rating : ";
        cin >> List.last->isidata.rating;
        cin.ignore(); // menghapus karakter newline (/n) dari input buffer
        cout << "Data Berhasil Diupdate!" << endl;
        cout << endl;
    }
}

void updateAfter(linkedlist List, address nodePrev)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        if (nodePrev != Nil && nodePrev->next != Nil)
        {
            address nodeBantu = nodePrev->next;
            cout << "masukkan update data node setelah node " << nodePrev->isidata.nama << " : " << endl;
            cout << "Nama makanan : ";
            getline(cin, nodeBantu->isidata.nama);
            cout << "Jenis makanan : ";
            getline(cin, nodeBantu->isidata.jenis);
            cout << "Harga : ";
            cin >> nodeBantu->isidata.harga;
            cout << "Rating : ";
            cin >> nodeBantu->isidata.rating;
            cin.ignore(); // menghapus karakter newline (/n) dari input buffer
            cout << "Data Berhasil Diupdate!" << endl;
            cout << endl;
        }
        else
        {
            cout << "Node sebelumnya (nodePrev) tidak valid!" << endl;
        }
    }
}

void updateBefore(linkedlist List, address nodeNext)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        if (nodeNext != Nil && nodeNext->prev != Nil)
        {
            address nodeBantu = nodeNext->prev;
            cout << "masukkan update data node sebelum node " << nodeNext->isidata.nama << " : " << endl;
            cout << "Nama makanan : ";
            getline(cin, nodeBantu->isidata.nama);
            cout << "Jenis makanan : ";
            getline(cin, nodeBantu->isidata.jenis);
            cout << "Harga : ";
            cin >> nodeBantu->isidata.harga;
            cout << "Rating : ";
            cin >> nodeBantu->isidata.rating;
            cin.ignore(); // menghapus karakter newline (/n) dari input buffer
            cout << "Data Berhasil Diupdate!" << endl;
            cout << endl;
        }
        else
        {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
    }
}

// SEARCHING
void findByName(linkedlist List, string nama)
{
    if (isEmpty(List))
    {
        cout << "List kosong!" << endl;
        return;
    }
    address p = List.first;
    while (p != Nil)
    {
        if (p->isidata.nama == nama)
        {
            cout << "Ditemukan (berdasarkan nama):" << endl;
            cout << "Nama makanan : " << p->isidata.nama << endl;
            cout << "Jenis        : " << p->isidata.jenis << endl;
            cout << "Harga        : " << p->isidata.harga << endl;
            cout << "Rating       : " << p->isidata.rating << endl;
            return;
        }
        p = p->next;
    }
    cout << "Data dengan nama \"" << nama << "\" tidak ditemukan." << endl;
}

void findByJenis(linkedlist List, string jenis)
{
    if (isEmpty(List))
    {
        cout << "List kosong!" << endl;
        return;
    }
    address p = List.last;
    while (p != Nil)
    {
        if (p->isidata.jenis == jenis)
        {
            cout << "Ditemukan (berdasarkan jenis):" << endl;
            cout << "Nama makanan : " << p->isidata.nama << endl;
            cout << "Jenis        : " << p->isidata.jenis << endl;
            cout << "Harga        : " << p->isidata.harga << endl;
            cout << "Rating       : " << p->isidata.rating << endl;
            return;
        }
        p = p->prev;
    }
    cout << "Data dengan jenis \"" << jenis << "\" tidak ditemukan." << endl;
}

void findByMinRating(linkedlist List, float minRating)
{
    if (isEmpty(List))
    {
        cout << "List kosong!" << endl;
        return;
    }
    address p = List.last;
    while (p != Nil)
    {
        if (p->isidata.rating >= minRating)
        {
            cout << "Ditemukan (rating >= " << minRating << "):" << endl;
            cout << "Nama makanan : " << p->isidata.nama << endl;
            cout << "Jenis        : " << p->isidata.jenis << endl;
            cout << "Harga        : " << p->isidata.harga << endl;
            cout << "Rating       : " << p->isidata.rating << endl;
            return;
        }
        p = p->prev;
    }
    cout << "Tidak ada data dengan rating >= " << minRating << "." << endl;
}

// DELETE
void deleteFirst(linkedlist &List)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong! Tidak ada node yang dihapus." << endl;
        return;
    }
    address pDel = List.first;
    if (List.first == List.last)
    {
        List.first = List.last = Nil;
    }
    else
    {
        List.first = pDel->next;
        List.first->prev = Nil;
        pDel->next = Nil;
    }
    pDel->prev = Nil;
    cout << "Node " << pDel->isidata.nama << " berhasil dihapus dari posisi pertama." << endl;
    dealokasi(pDel);
}

void deleteLast(linkedlist &List)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong! Tidak ada node yang dihapus." << endl;
        return;
    }
    address pDel = List.last;
    if (List.first == List.last)
    {
        List.first = List.last = Nil;
    }
    else
    {
        List.last = pDel->prev;
        List.last->next = Nil;
        pDel->prev = Nil;
    }
    pDel->next = Nil;
    cout << "Node " << pDel->isidata.nama << " berhasil dihapus dari posisi terakhir." << endl;
    dealokasi(pDel);
}

void deleteAfter(linkedlist &List, address Prev)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong! Tidak ada node yang dihapus." << endl;
        return;
    }
    if (Prev == Nil || Prev->next == Nil)
    {
        cout << "Node sebelumnya (Prev) tidak valid atau tidak ada node setelahnya!" << endl;
        return;
    }
    if (Prev->next == List.last)
    {
        deleteLast(List);
        return;
    }
    address pDel = Prev->next;
    Prev->next = pDel->next;
    pDel->next->prev = Prev;
    pDel->prev = Nil;
    pDel->next = Nil;
    cout << "Node " << pDel->isidata.nama << " berhasil dihapus setelah node " << Prev->isidata.nama << "." << endl;
    dealokasi(pDel);
}

void deleteBefore(linkedlist &List, address nodeNext)
{
    if (isEmpty(List) == true)
    {
        cout << "List kosong! Tidak ada node yang dihapus." << endl;
        return;
    }
    if (nodeNext == Nil || nodeNext->prev == Nil)
    {
        cout << "Node setelahnya (nodeNext) tidak valid atau tidak ada node sebelumnya!" << endl;
        return;
    }
    if (nodeNext->prev == List.first)
    {
        deleteFirst(List);
        return;
    }
    address pDel = nodeNext->prev;
    nodeNext->prev = pDel->prev;
    pDel->prev->next = nodeNext;
    pDel->next = Nil;
    pDel->prev = Nil;
    cout << "Node " << pDel->isidata.nama << " berhasil dihapus sebelum node " << nodeNext->isidata.nama << "." << endl;
    dealokasi(pDel);
}

void deleteNode(linkedlist &List, address target)
{
    if (isEmpty(List) == true || target == Nil)
    {
        cout << "Target tidak valid atau list kosong!" << endl;
        return;
    }
    if (target == List.first)
    {
        deleteFirst(List);
    }
    else if (target == List.last)
    {
        deleteLast(List);
    }
    else
    {
        address L = target->prev;
        address R = target->next;
        L->next = R;
        R->prev = L;
        target->next = Nil;
        target->prev = Nil;
        cout << "Node " << target->isidata.nama << " berhasil dihapus dari tengah list." << endl;
        dealokasi(target);
    }
}

void deleteByName(linkedlist &List, string nama)
{
    if (isEmpty(List))
    {
        cout << "List kosong! Tidak ada node yang dihapus." << endl;
        return;
    }

    address target = List.first;
    while (target != Nil && target->isidata.nama != nama)
    {
        target = target->next;
    }
    if (target == Nil)
    {
        cout << "Node dengan nama \"" << nama << "\" tidak ditemukan." << endl;
        return;
    }

    deleteNode(List, target);
    cout << "Node dengan nama \"" << nama << "\" telah dihapus dan didealokasi." << endl;
}

penjelasan singkat guided 2
Kode `ListMakanan.cpp` merupakan file implementasi yang berisi definisi fungsi-fungsi untuk mengelola data makanan menggunakan struktur data Doubly Linked List. Pada bagian awal, terdapat fungsi `isEmpty()` untuk memeriksa apakah list kosong dan `createList()` untuk menginisialisasi pointer `first` dan `last` dengan nilai `Nil`. Fungsi `alokasi()` digunakan untuk membuat node baru sekaligus mengisi data makanan berupa nama, jenis, harga, dan rating, sedangkan `dealokasi()` digunakan untuk menghapus node dari memori. Selanjutnya, terdapat fungsi penambahan node (insertion), yaitu `insertFirst()`, `insertLast()`, `insertAfter()`, dan `insertBefore()` yang memungkinkan data ditambahkan pada posisi pertama, terakhir, setelah, maupun sebelum node tertentu. Fungsi `printList()` digunakan untuk menampilkan seluruh data makanan dengan melakukan traversal dari node pertama hingga node terakhir. Selain itu, terdapat fungsi pembaruan data (update) yang meliputi `updateFirst()`, `updateLast()`, `updateAfter()`, dan `updateBefore()` untuk mengubah informasi makanan berdasarkan posisi node. Pada bagian searching, terdapat fungsi `findByName()`, `findByJenis()`, dan `findByMinRating()` untuk mencari data berdasarkan nama, jenis makanan, dan rating minimum. Sementara itu, bagian deletion terdiri dari `deleteFirst()`, `deleteLast()`, `deleteAfter()`, `deleteBefore()`, `deleteNode()`, dan `deleteByName()` yang digunakan untuk menghapus node berdasarkan posisi maupun nama makanan serta membebaskan memori yang digunakan. Dengan adanya berbagai fungsi tersebut, program dapat melakukan pengelolaan data makanan secara dinamis melalui hubungan pointer `next` dan `prev`, sehingga proses penambahan, pencarian, pembaruan, dan penghapusan data dapat dilakukan secara terstruktur.
### 3. ...

```C++
source code main.cpp
```
#include "listMakanan.h"
#include <iostream>

using namespace std;

int main()
{
    linkedlist List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    dataMakanan dtMakanan;

    nodeA = alokasi("Nasi Rames", "Makanan Berat", 10000, 8.5);
    nodeB = alokasi("Ayam Geprek", "Makanan Berat", 13000, 9.0);
    nodeC = alokasi("Risol Mayo", "Makanan Ringan", 3500, 8.8);
    nodeD = alokasi("Mie Ayam", "Makanan Berat", 15000, 9.9);
    nodeE = alokasi("Donat", "Makanan Ringan", 2000, 7.7);

    insertFirst(List, nodeD);
    insertLast(List, nodeE);
    insertAfter(List, nodeA, nodeD);
    insertBefore(List, nodeC, nodeE);
    insertLast(List, nodeB);
    cout << endl;

    // D - A - C - E - B
    cout << "--- Isi List Setelah Insert ---" << endl;
    printList(List);
    cout << endl;

    updateFirst(List);
    updateLast(List);
    updateBefore(List, nodeC);
    updateAfter(List, nodeA);

    cout << "--- Isi List Setelah Update ---" << endl;
    printList(List);

    cout << endl;

    findByName(List, "Nasgor");
    findByMinRating(List, 9.0);

    deleteByName(List, "Nasgor");
    deleteFirst(List);
    deleteBefore(List, nodeE);

    cout << endl
         << "--- Isi List Setelah Delete ---" << endl;
    printList(List);

    return 0;
}

penjelasan singkat guided 3
Kode `main.cpp` merupakan program utama yang digunakan untuk menjalankan dan menguji seluruh fungsi pengelolaan data makanan menggunakan struktur data Doubly Linked List. Pada bagian awal, program mendeklarasikan variabel `linkedlist List` serta beberapa pointer node, kemudian memanggil fungsi `createList()` untuk menginisialisasi list dalam keadaan kosong. Selanjutnya, fungsi `alokasi()` digunakan untuk membuat lima node yang berisi data makanan, yaitu Nasi Rames, Ayam Geprek, Risol Mayo, Mie Ayam, dan Donat. Kelima node tersebut kemudian dimasukkan ke dalam list menggunakan fungsi `insertFirst()`, `insertLast()`, `insertAfter()`, dan `insertBefore()` sehingga membentuk urutan Mie Ayam, Nasi Rames, Risol Mayo, Donat, dan Ayam Geprek. Setelah itu, program menampilkan seluruh data menggunakan `printList()` dan melakukan pembaruan informasi makanan melalui fungsi `updateFirst()`, `updateLast()`, `updateBefore()`, dan `updateAfter()`. Program juga menguji proses pencarian data menggunakan `findByName()` dan `findByMinRating()`, kemudian melakukan penghapusan node berdasarkan nama maupun posisi menggunakan `deleteByName()`, `deleteFirst()`, dan `deleteBefore()`. Terakhir, fungsi `printList()` kembali dipanggil untuk menampilkan isi list setelah proses penghapusan selesai. Dengan demikian, `main.cpp` berfungsi sebagai pusat pengujian yang mengintegrasikan berbagai operasi Doubly Linked List agar dapat diketahui bagaimana proses penambahan, pembaruan, pencarian, dan penghapusan data makanan berjalan dalam program.


## Unguided

### 1. ADT Doubly Linked list
Buatlah ADT Doubly Linked list sebagai berikut di dalam file “Doublylist.h”
Buatlah implementasi ADT Doubly Linked list pada file “Doublylist.cpp” dan coba hasil
implementasi ADT pada file “main.cpp”.

```C++
source code DoublyList.h


#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

typedef struct kendaraan infotype;

struct kendaraan {
    string nopol;
    string warna;
    int thnBuat;
};

typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertLast(List &L, address P);

address findElm(List L, string nopol);

void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteByNopol(List &L, string nopol);

#endif

### Output Unguided 1 :

##### Output 1

contoh :
![Screenshot Output Unguided 1_1]


penjelasan unguided 1

### Penjelasan SinglyList.h
File header ini mendefinisikan tipe data kendaraan yang memiliki atribut nomor polisi, warna, dan tahun pembuatan. Struktur ElmList memiliki pointer next dan prev untuk menghubungkan node, sedangkan struktur List menyimpan pointer first dan last. Selain itu, terdapat deklarasi fungsi untuk membuat list, mengalokasikan memori, menampilkan data, menambahkan node di akhir, mencari kendaraan, dan menghapus node.


### 2. DoublyList.cpp
```C++
source code SinglyList.cpp
```
#include "Doublylist.h"

void CreateList(List &L) {
    L.first = Nil;
    L.last = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;

    P->info = x;
    P->next = Nil;
    P->prev = Nil;

    return P;
}

void dealokasi(address &P) {
    if (P != Nil) {
        P->next = Nil;
        P->prev = Nil;
        delete P;
        P = Nil;
    }
}

void printInfo(List L) {
    if (L.first == Nil) {
        cout << "List kosong!" << endl;
        return;
    }

    address P = L.first;

    while (P != Nil) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.thnBuat << endl;
        cout << "------------------------" << endl;

        P = P->next;
    }
}

void insertLast(List &L, address P) {
    if (L.first == Nil) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

address findElm(List L, string nopol) {
    address P = L.first;

    while (P != Nil) {
        if (P->info.nopol == nopol) {
            return P;
        }

        P = P->next;
    }

    return Nil;
}

void deleteFirst(List &L, address &P) {
    if (L.first == Nil) {
        P = Nil;
        return;
    }

    P = L.first;

    if (L.first == L.last) {
        L.first = Nil;
        L.last = Nil;
    } else {
        L.first = P->next;
        L.first->prev = Nil;
    }

    P->next = Nil;
    P->prev = Nil;
}

void deleteLast(List &L, address &P) {
    if (L.first == Nil) {
        P = Nil;
        return;
    }

    P = L.last;

    if (L.first == L.last) {
        L.first = Nil;
        L.last = Nil;
    } else {
        L.last = P->prev;
        L.last->next = Nil;
    }

    P->next = Nil;
    P->prev = Nil;
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec == Nil || Prec->next == Nil) {
        P = Nil;
        return;
    }

    P = Prec->next;

    if (P == L.last) {
        L.last = Prec;
        Prec->next = Nil;
    } else {
        Prec->next = P->next;
        P->next->prev = Prec;
    }

    P->next = Nil;
    P->prev = Nil;
}

void deleteByNopol(List &L, string nopol) {
    address target = findElm(L, nopol);

    if (target == Nil) {
        cout << "Data kendaraan " << nopol
             << " tidak ditemukan!" << endl;
        return;
    }

    address P = Nil;

    if (target == L.first) {
        deleteFirst(L, P);
    } else if (target == L.last) {
        deleteLast(L, P);
    } else {
        deleteAfter(L, target->prev, P);
    }

    cout << "Data kendaraan " << nopol
         << " berhasil dihapus." << endl;

    dealokasi(P);
}


### Output Unguided 2 :

##### Output 1

contoh :
![Screenshot Output Unguided 2_1]


penjelasan SinglyList.cpp
### Penjelasan DoublyList.cpp
File implementasi ini berisi definisi fungsi untuk mengelola Doubly Linked List. Fungsi CreateList() digunakan untuk membuat list kosong, sedangkan alokasi() membuat node baru dan mengisi informasi kendaraan. Fungsi insertLast() menambahkan kendaraan pada bagian akhir list, sementara printInfo() menampilkan seluruh data kendaraan. Fungsi findElm() melakukan pencarian berdasarkan nomor polisi dengan menelusuri node dari awal hingga akhir. Pada bagian penghapusan, terdapat deleteFirst(), deleteLast(), dan deleteAfter() untuk menghapus node berdasarkan posisinya. Fungsi deleteByNopol() menggabungkan proses pencarian dan penghapusan sehingga kendaraan dapat dihapus langsung berdasarkan nomor polisinya.


### 3. main.cpp

```C++
source code main.cpp
```
#include "Doublylist.h"

int main() {
    List L;
    address P, hasil;

    infotype kendaraan;

    CreateList(L);

    kendaraan.nopol = "D001";
    kendaraan.warna = "hitam";
    kendaraan.thnBuat = 1990;
    P = alokasi(kendaraan);
    insertLast(L, P);

    kendaraan.nopol = "D003";
    kendaraan.warna = "putih";
    kendaraan.thnBuat = 1970;
    P = alokasi(kendaraan);
    insertLast(L, P);

    kendaraan.nopol = "D004";
    kendaraan.warna = "kuning";
    kendaraan.thnBuat = 1990;
    P = alokasi(kendaraan);
    insertLast(L, P);

    cout << "=== DATA KENDARAAN ===" << endl;
    printInfo(L);

    cout << endl;
    cout << "=== PENCARIAN KENDARAAN ===" << endl;

    hasil = findElm(L, "D001");

    if (hasil != Nil) {
        cout << "Kendaraan berhasil ditemukan!" << endl;
        cout << "Nomor Polisi : " << hasil->info.nopol << endl;
        cout << "Warna        : " << hasil->info.warna << endl;
        cout << "Tahun        : " << hasil->info.thnBuat << endl;
    } else {
        cout << "Kendaraan tidak ditemukan!" << endl;
    }

    cout << endl;
    cout << "=== PENGHAPUSAN KENDARAAN ===" << endl;

    deleteByNopol(L, "D003");

    cout << endl;
    cout << "=== DATA KENDARAAN SETELAH DELETE ===" << endl;
    printInfo(L);

    return 0;
}

### Output Unguided 3 :


##### Output 1

contoh :
![Screenshot Output Unguided 3_1] (https://github.com/ragaprasetyo7-arch/109082500028_Raga-Prasetyo_2/blob/main/Modul%207/soal%20unguieded.png)

penjelasan unguided 3
### Penjelasan Soal 3
File main.cpp merupakan program utama yang digunakan untuk menguji implementasi ADT Doubly Linked List. Program diawali dengan membuat list kosong menggunakan CreateList(), kemudian membuat tiga data kendaraan dengan nomor polisi D001, D003, dan D004. Setiap data dialokasikan menjadi node baru menggunakan alokasi() dan dimasukkan ke dalam list menggunakan insertLast(). Selanjutnya, program menampilkan seluruh data kendaraan menggunakan printInfo() dan melakukan pencarian kendaraan dengan nomor polisi D001 melalui fungsi findElm(). Setelah kendaraan berhasil ditemukan, informasi nomor polisi, warna, dan tahun pembuatannya ditampilkan. Program kemudian menghapus kendaraan dengan nomor polisi D003 menggunakan fungsi deleteByNopol(). Terakhir, seluruh data kendaraan ditampilkan kembali untuk memastikan bahwa proses penghapusan telah berhasil dilakukan.



## Kesimpulan

Berdasarkan praktikum Modul 6, dapat disimpulkan bahwa Doubly Linked List merupakan struktur data yang setiap nodenya memiliki dua pointer, yaitu `next` dan `prev`, sehingga proses penelusuran data dapat dilakukan dari depan maupun belakang. Melalui praktikum ini, dipelajari cara membuat ADT Doubly Linked List, mengalokasikan dan menghapus memori node, menambahkan data menggunakan `insertLast`, serta mencari data kendaraan berdasarkan nomor polisi menggunakan `findElm`. Selain itu, dipelajari juga proses penghapusan node menggunakan `deleteFirst`, `deleteLast`, dan `deleteAfter` dengan tetap menjaga hubungan antar-node. Dengan praktikum ini, pemahaman mengenai konsep pointer, pengelolaan memori dinamis, serta operasi pada struktur data Doubly Linked List menjadi lebih baik.
...

## Referensi
[1] OpenDSA Project Contributors. (2021). Doubly Linked Lists. OpenDSA, Virginia Tech. https://opendsa.cs.vt.edu/ODSA/Books/nyu/csci-ua102/spring-2021/section_5/html/ListDouble.html

[2] GeeksforGeeks. (2025). Operations of Doubly Linked List with Implementation. GeeksforGeeks. https://www.geeksforgeeks.org/dsa/doubly-linked-list-tutorial/

[3] GeeksforGeeks. (2025). Doubly Linked List Tutorial. GeeksforGeeks. https://www.geeksforgeeks.org/dsa/doubly-linked-list/
