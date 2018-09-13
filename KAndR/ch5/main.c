#include "swap.h"
void main(){
    int a = 1, b = 9;
    int *x = &a, *y = &b;

    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(x,y);
    printf("After  swap: a=%d, b=%d\n", a, b);
}
