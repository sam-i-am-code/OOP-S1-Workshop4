#include <iostream>

extern int *readNumbers();
extern int *reverseArray(int *numbers1, int length);
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main(){
    int *p;
    int *j;
    p = readNumbers();
    j = reverseArray(p,10);
    equalsArray(p,j,10);
    delete [] p;
    delete [] j;
    return 0;
}