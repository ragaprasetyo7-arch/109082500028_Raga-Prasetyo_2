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