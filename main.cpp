#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
    int i;
    infotype x;
    int total;
    Stack S;
    createStuck(S);

    i = 1;
    for(i = 1; i <= MAXSTACK; i++) {
        cout << "input angka ke ke-" << i << ": ";
        cin >> x;
        push(S, x);
    }

    cout << endl;

    if(isFull(S)) {
        cout << "stack sudah penuh!" << endl;
    }

    cout << endl;

    total = sumStack(S);
    cout << "hasil penjumlahan elemen dalam stack: " << total << endl;
    return 0;
}
