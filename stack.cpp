#include "stack.h"

void createStuck(Stack &S) {
    S.top = 0;
}

bool isEmpty(Stack S) {
    return S.top == 0;
}

bool isFull(Stack S) {
    return S.top == MAXSTACK;
}

void push(Stack &S, infotype x) {
    if (!isFull(S)) {
        S.info[S.top] = x;
        S.top++;
    }
}

infotype pop(Stack &S) {
    infotype x;

    S.top--;
    x = S.info[S.top];

    return x;
}

int sumStack(Stack S) {
    int total;

    total = 0;
    while(!isEmpty(S)) {
        total = total + pop(S);
    }

    return total;
}
