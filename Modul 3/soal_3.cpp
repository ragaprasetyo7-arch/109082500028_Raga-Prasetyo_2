#include <iostream>
using namespace std;

#define N 10

int cariMaksimum(int arr[], int n) {
    int maks = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }

    return maks;
}

int cariMinimum(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

void hitungRataRata(int arr[], int n, float &rataRata) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    rataRata = (float) total / n;
}

void tampilArray(int arr[], int n) {
    cout << "Isi array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i];

        if (i < n - 1) {
            cout << ", ";
        }
    }

    cout << endl;
}

int main() {
    int arrA[N] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};

    int pilihan;
    float rataRata;

    do {
        cout << "\n--- Menu Program Array ---" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. Cari nilai maksimum" << endl;
        cout << "3. Cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata-rata" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilArray(arrA, N);
                break;

            case 2:
                cout << "Nilai maksimum = "
                     << cariMaksimum(arrA, N) << endl;
                break;

            case 3:
                cout << "Nilai minimum = "
                     << cariMinimum(arrA, N) << endl;
                break;

            case 4:
                hitungRataRata(arrA, N, rataRata);

                cout << "Nilai rata-rata = "
                     << rataRata << endl;
                break;

            case 5:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak tersedia." << endl;
        }

    } while (pilihan != 5);

    return 0;
}