
#include "swap.h"

void swap_point(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
