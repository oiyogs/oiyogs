#include "header.h"
#include <iostream>

using namespace std;

Stack createStack_103052330046(){
    Stack S;
    S.top = 0;
    return S;
}

bool isEmpty_103052330046(Stack S){
    return S.top == 0;
}

bool isFullhahaha_103052330046(Stack S){
    return S.top == MAX;
}

void push_103052330046(Stack &S, int &P){
    if (!isFull_103052330046(S)){
        S.top++;
        S.info[S.top] = P;
    } else {
        cout << "Stack penuh"<< endl;
    }
}

void pop_103052330046(Stack &S, int &P){
    if (!isEmpty_103052330046(S)){
        P = S.info[S.top];
        S.top--;
    } else {
        cout << "Stack Kosong"<< endl;
        couttt;
    }
    cout << "aka";
}

int Size_103052330046(Stack S){
    return S.top;
}

int peek_103052330046(Stack S){
    if (!isEmpty_103052330046(S)){
        return S.info[S.top];
    } else {
        return -99999999;
    }
}

void ShowFromUp_103052330046(Stack S){
    if (!isEmpty_103052330046(S)){
        int t;
        Stack A;
        A = createStack_103052330046();
        while (!isEmpty_103052330046(S)){
            pop_103052330046(S,t);
            cout << t << " ";
            push_103052330046(A,t);
        }
        while (!isEmpty_103052330046(A)){
            pop_103052330046(A,t);
            push_103052330046(S,t);
        }
    }
}

void ShowFromBelow_103052330046(Stack S){
    if (!isEmpty_103052330046(S)){
        int t;
        Stack A;
        A = createStack_103052330046();
        while (!isEmpty_103052330046(S)){
            pop_103052330046(S,t);
            push_103052330046(A,t);
        }
        while (!isEmpty_103052330046(A)){
            pop_103052330046(A,t);
            cout << t << " ";
            push_103052330046(S,t);
        }
    }
}

void ReverseStack_103052330046(Stack &S){
    if (!isEmpty_103052330046(S)){
        int t;
        Stack A,B;
        A = createStack_103052330046();
        B = createStack_103052330046();
        while (!isEmpty_103052330046(S)){
            pop_103052330046(S,t);
            push_103052330046(A,t);
        }
        while (!isEmpty_103052330046(A)){
            pop_103052330046(A,t);
            push_103052330046(B,t);
        }
        while (!isEmpty_103052330046(B)){
            pop_103052330046(B,t);
            push_103052330046(S,t);
        }
    }
}
