#include <iostream>

int *readNumbers(){

    int *array = new int [10];

    for(int i = 0; i < 10; i++){
        std::cin>>*(array+i);
    }
    return array;
}

int *reverseArray(int *numbers1, int length){
    int *array = new int [10];
    for(int i = 0; i < length; i++){
        *(array+i)=*(numbers1+length-i-1);
    }
    return array;
}