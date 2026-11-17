
#include "stack.h"

int main()
{
    stack S;
    int pilihan, angka;

    createStack(S);

    do
    {
        cout << "\n===== PROGRAM STACK =====" << endl;
        cout << "1. Latihan Stack Dasar" << endl;
        cout << "2. Push Ascending" << endl;
        cout << "3. Get Input Stream" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            createStack(S);

            push(S, 3);
            push(S, 4);
            push(S, 8);
            pop(S);
            push(S, 2);
            push(S, 5);
            pop(S);
            push(S, 3);

            cout << "\nIsi Stack:" << endl;
            printInfo(S);

            cout << "Balik Stack:" << endl;
            balikStack(S);
            printInfo(S);
            break;

        case 2:
            createStack(S);

            pushAscending(S, 3);
            pushAscending(S, 4);
            pushAscending(S, 8);
            pushAscending(S, 2);
            pushAscending(S, 3);
            pushAscending(S, 9);

            cout << "\nIsi Stack Ascending:" << endl;
            printInfo(S);

            cout << "Balik Stack:" << endl;
            balikStack(S);
            printInfo(S);
            break;

        case 3:
            createStack(S);

            cin.ignore();
            getInputStream(S);

            cout << "\nIsi Stack:" << endl;
            printInfo(S);

            cout << "Balik Stack:" << endl;
            balikStack(S);
            printInfo(S);
            break;

        case 4:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 4);

    return 0;
}
