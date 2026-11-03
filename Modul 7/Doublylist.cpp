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
