#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int i;

    struct data {
        char nama[40];
        int nilai;
    };

    data siswa[MAX];

    for (i = 0; i < MAX; i++) {
        cout << "Masukkan data ke-" << i + 1 << endl;
        cout << "Nama = ";
        cin >> siswa[i].nama;
        cout << "Nilai = ";
        cin >> siswa[i].nilai;
    }

    cout << "\nData siswa\n";
    cout << "==========";

    for (i = 0; i < MAX; i++) {
        cout << "\nData ke-" << i + 1;
        cout << "\nNama = " << siswa[i].nama;
        cout << "\nNilai = " << siswa[i].nilai;
    }

    return 0;
}