#include "digitCounter.h"

int counter(long int x){
    int n = 0;

    while(x != 0){
        x /= 10;
        n++;
    }   
    return n;
}

int binaryCounter(long int x) {
    int binary_counter = 0;
    while (integer != 0) {
        printf("integer : %d\n", integer);
        integer /= 2;
        binary_counter++;
    }


    return binary_counter;
}
