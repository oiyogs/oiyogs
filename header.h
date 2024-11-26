#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

const int MAX = 99;
typedef int index;
typedef int infotype;
struct Stack{
    infotype info[MAX];
    index top;
};

Stack createStack_103052330046();
void push_103052330046(Stack &S, int &p);
void pop_103052330046(Stack &S, int &p);
int Size_103052330046(Stack S);
int peek_103052330046(Stack S);
bool isEmpty_103052330046(Stack S);
bool isFull_103052330046(Stack S);
void ShowFromUp_103052330046(Stack S);
int jumlahStack_103052330046(Stack S);
void ReverseStack_103052330046(Stack &S);
void ShowFromBelow_103052330046(Stack S);

#endif // HEADER_H_INCLUDED
