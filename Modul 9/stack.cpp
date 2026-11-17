
#include "stack.h"

void createStack(stack &S)
{
    S.top = Nil;
}

bool isEmpty(stack S)
{
    return S.top == Nil;
}

bool isFull(stack S)
{
    return S.top == MAX - 1;
}

void push(stack &S, infotype x)
{
    if (isFull(S))
    {
        cout << "Stack penuh!" << endl;
    }
    else
    {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop(stack &S)
{
    if (isEmpty(S))
    {
        cout << "Stack kosong!" << endl;
        return Nil;
    }

    infotype x = S.info[S.top];
    S.top--;

    return x;
}

void printInfo(stack S)
{
    if (isEmpty(S))
    {
        cout << "Stack kosong!" << endl;
    }
    else
    {
        cout << "[TOP] ";

        for (int i = S.top; i >= 0; i--)
        {
            cout << S.info[i] << " ";
        }

        cout << endl;
    }
}

void balikStack(stack &S)
{
    stack temp;
    createStack(temp);

    while (!isEmpty(S))
    {
        push(temp, pop(S));
    }

    S = temp;
}

void pushAscending(stack &S, infotype x)
{
    if (isFull(S))
    {
        cout << "Stack penuh!" << endl;
    }
    else
    {
        int i = S.top;

        while (i >= 0 && S.info[i] > x)
        {
            S.info[i + 1] = S.info[i];
            i--;
        }

        S.info[i + 1] = x;
        S.top++;
    }
}

void getInputStream(stack &S)
{
    char input;

    cout << "Masukkan angka (tekan Enter untuk selesai): ";

    while (cin.get(input) && input != '\n')
    {
        if (input >= '0' && input <= '9')
        {
            push(S, input - '0');
        }
    }
}
