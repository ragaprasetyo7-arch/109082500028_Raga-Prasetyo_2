#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukarReference(int &a, int &b, int &c) {
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a, b, c;

    cout << "Masukkan nilai a = ";
    cin >> a;

    cout << "Masukkan nilai b = ";
    cin >> b;

    cout << "Masukkan nilai c = ";
    cin >> c;

    cout << "\nNilai awal:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    tukarPointer(&a, &b, &c);

    cout << "\nSetelah Call by Pointer:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    tukarReference(a, b, c);

    cout << "\nSetelah Call by Reference:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}