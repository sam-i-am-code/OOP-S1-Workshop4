#include <iostream>

extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main(){
    int *p;
    int *j;
    p = readNumbers();
    j = readNumbers();
    std::cout<<equalsArray(p,j,10);
    delete [] p;
    delete [] j;
    return 0;
}