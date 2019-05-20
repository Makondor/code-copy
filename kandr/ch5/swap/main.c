//#include "swap.h"
#include <stdio.h>

void main(void){

    int m =1, n=9;

    printf("Before swap: x=%d, y=%d \n", m, n);
    swap(&m,&n);
    printf("After swap : x=%d, y=%d \n", m, n);
    
}
