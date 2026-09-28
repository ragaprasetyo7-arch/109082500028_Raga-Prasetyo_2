#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int jum;

    cout << "Masukkan jumlah baris: ";
    cin >> jum;

    do {
        cout << "baris ke-" << i << endl;
        i++;
    } while (i <= jum);

    return 0;
}