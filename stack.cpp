#include "stack.h"

void createStack_1301213440(stack &S){
    Top(S) = -1;
}

bool isEmpty_1301213440(stack S){
    if(Top(S) == -1){
        return true;
    }else{
        return false;
    }
}

bool isFull_1301213440(stack S){
    if(Top(S) == 14){
        return true;
    }else {
        return false;
    }
}

void push_1301213440(stack &S, infotype x){
    if(isFull_1301213440(S) == false){
        Top(S)++;
        info(S)[Top(S)] = x;
    }
}

infotype pop_1301213440(stack &S){
    infotype x;

    x = info(S)[Top(S)];
    Top(S)--;
    return x;
}

void printInfo_1301213440(stack S){
     int i;
     for (i=Top(S); i>0; i--){
        cout << info(S)[i] << " ";
     }
}
