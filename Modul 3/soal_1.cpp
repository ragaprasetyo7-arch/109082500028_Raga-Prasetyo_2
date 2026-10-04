#include <iostream>
using namespace std;

#define N 3

void inputMatriks(int matriks[N][N], char nama) {
    cout << "Masukkan matriks " << nama << ":\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << nama << "[" << i << "][" << j << "] = ";
            cin >> matriks[i][j];
        }
    }
}

void tampilMatriks(int matriks[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int A[N][N], B[N][N];
    int tambah[N][N], kurang[N][N], kali[N][N];
    int pilihan;

    inputMatriks(A, 'A');
    cout << endl;

    inputMatriks(B, 'B');
    cout << endl;

    cout << "--- Menu Operasi Matriks ---" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                tambah[i][j] = A[i][j] + B[i][j];
            }
        }

        cout << "\nHasil Penjumlahan Matriks:\n";
        tampilMatriks(tambah);
    }
    else if (pilihan == 2) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                kurang[i][j] = A[i][j] - B[i][j];
            }
        }

        cout << "\nHasil Pengurangan Matriks:\n";
        tampilMatriks(kurang);
    }
    else if (pilihan == 3) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                kali[i][j] = 0;

                for (int k = 0; k < N; k++) {
                    kali[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "\nHasil Perkalian Matriks:\n";
        tampilMatriks(kali);
    }
    else {
        cout << "Pilihan tidak tersedia." << endl;
    }

    return 0;
}