
#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#define Nil -1
#define MAX 20

typedef int infotype;

struct stack
{
    infotype info[MAX];
    int top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);

void push(stack &S, infotype x);
infotype pop(stack &S);

void printInfo(stack S);
void balikStack(stack &S);

void pushAscending(stack &S, infotype x);
void getInputStream(stack &S);

#endif
