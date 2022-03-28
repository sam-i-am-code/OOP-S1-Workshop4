#include <iostream>

int *readNumbers(){

    int *array = new int [5];

    for(int i = 0; i < 5; i++){
        std::cin>>*(array+i);
    }
    return array;
}

void printNumbers(int *numbers,int length){
    for(int k = 0; k < 5; k++){
        std::cout<<k<<" "<<*(numbers+k)<<std::endl;
    }
    return;
}

int secondSmallestSum(int *numbers, int length){
        int secSmallest = *numbers;
        int smallest = *numbers;
    for(int k = 0; k < length; k++){
        for(int i = k;i<length;i++){
            int total = 0;
            for(int j=i;j<length;j++){
                total += *(numbers+j-k);
            }        
            if(total<smallest){
            //    if(smallest!=secSmallest){
                secSmallest=smallest;
            //}    
                smallest=total;
            }
            //std::cout<<smallest<<" "<<secSmallest<<std::endl<<std::endl;
        }
    }
    return secSmallest;
}