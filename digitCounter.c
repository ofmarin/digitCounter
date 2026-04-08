#include "digitCounter.h"

int counter(long int x){
    int n = 0;

    while(x != 0){
        x /= 10;
        n++;
    }   
    return n;
}
