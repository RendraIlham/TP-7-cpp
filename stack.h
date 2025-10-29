#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

const int MAXSTACK = 10;

typedef int infotype;

struct Stack {
    infotype info[MAXSTACK];
    int top;
};

void createStuck(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
int sumStack(Stack S);

#endif // STACK_H_INCLUDED
