#include "stack.h"
#include <iostream>

using namespace std;
int main()
{
    stack S;

    createStack_1301213440(S);

    string data = "IFLABJAYA";
    for (int i = data.size()-1; i >= 0; i--){
        push_1301213440(S, data[i]);
    }
    printInfo_1301213440(S);
    cout << endl;

    for (int i = 0; i < 5; i++){
        pop_1301213440(S);
    }
    printInfo_1301213440(S);

    return 0;
}
