
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
