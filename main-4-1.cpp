#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern int secondSmallestSum(int *numbers, int length);

int main(){
    int *p;
    p = readNumbers();
    secondSmallestSum(p,5);
}