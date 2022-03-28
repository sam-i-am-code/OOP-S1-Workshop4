#include <iostream>

extern int *readNumbers();
extern int *reverseArray(int *numbers1, int length);

int main(){
    int *p;
    p = readNumbers();
    std::cout<<reverseArray(p,10);
    delete [] p;
    return 0;
}