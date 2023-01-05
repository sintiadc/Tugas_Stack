#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define Top(S) S.Top
#define info(S) S.info

#include <iostream>

using namespace std;

typedef char infotype;

struct stack{
    infotype info[14];
    int Top;
};

void createStack_1301213440(stack &S);
bool isEmpty_1301213440(stack S);
bool isFull_1301213440(stack S);
void push_1301213440(stack &S, infotype x);
infotype pop_1301213440(stack &S);
void printInfo_1301213440(stack S);

#endif // STACK_H_INCLUDED
