#include "introduction.h"

void temp_convert(){
    int fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = 5*(fahr-32)/9;
        printf("%d \t%d\n", fahr, celsius);
        fahr += step;
    }
}

void temp_float_convert(){
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = 5*(fahr-32)/9;
        printf("%3.0f\t%6.2f\n", fahr, celsius);
        fahr += step;
    }
}

void temp_for_convert(){
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr - 32.0));
    }
}

void temp_reverse_convert(){
    int fahr;
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr - 32.0));
    }

}
