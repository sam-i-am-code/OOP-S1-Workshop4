#include <iostream>

int *readNumbers(){

    int *array = new int [10];

    for(int i = 0; i < 10; i++){
        std::cin>>*(array+i);
    }
    return array;
}

void hexDigits(int *numbers,int length){
    for(int i = 0; i < 10; i++){
        switch (*(numbers+i)){
            case 1:
            std::cout<<*(numbers+i)<<" "<< "1"<<std::endl;
            break;
            
            case 2:
            std::cout<<*(numbers+i)<<" "<< "2"<<std::endl;
            break;

            case 3:
            std::cout<<*(numbers+i)<<" "<< "3"<<std::endl;
            break;
            
            case 4:
            std::cout<<*(numbers+i)<<" "<< "4"<<std::endl;
            break;

            case 5:
            std::cout<<*(numbers+i)<<" "<< "5"<<std::endl;
            break;
            
            case 6:
            std::cout<<*(numbers+i)<<" "<< "6"<<std::endl;
            break;

            case 7:
            std::cout<<*(numbers+i)<<" "<< "7"<<std::endl;
            break;
            
            case 8:
            std::cout<<*(numbers+i)<<" "<< "8"<<std::endl;
            break;

            case 9:
            std::cout<<*(numbers+i)<<" "<< "9"<<std::endl;
            break;
            
            case 10:
            std::cout<<*(numbers+i)<<" "<< "A"<<std::endl;
            break;

            case 11:
            std::cout<<*(numbers+i)<<" "<< "B"<<std::endl;
            break;
            
            case 12:
            std::cout<<*(numbers+i)<<" "<< "C"<<std::endl;
            break;

            case 13:
            std::cout<<*(numbers+i)<<" "<< "D"<<std::endl;
            break;
            
            case 14:
            std::cout<<*(numbers+i)<<" "<< "E"<<std::endl;
            break;

            case 15:
            std::cout<<*(numbers+i)<<" "<< "F"<<std::endl;
            break;
        }
    }
    return;
}