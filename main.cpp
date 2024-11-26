#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    Stack A;
    int x,jum;

    A = createStack_103052330046();
    cout << "Input nilai yang akan di push ke dalam stack :"<< endl;
    for (int i = 1; i <= 8; i++){
        cin >> x;
        push_103052330046(A,x);
    }

    cout << "isi stack dari bawah :"<< endl;
    ShowFromBelow_103052330046(A);
}
