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
