#include <iostream>

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);

int main(){
    int *p;
    p = readNumbers();
    hexDigits(p,10);
    delete [] p;
    return 0;
}