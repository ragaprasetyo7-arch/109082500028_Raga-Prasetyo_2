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