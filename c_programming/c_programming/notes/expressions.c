//CC 6th expressions notes

#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025; //whole numbers 
    float pi = 3.14; //decimals
    double long_pi = 3.14159265359; //decimals that are twice as long

    printf("8/3 = %f", (float)8/3); //cast is specifically starting the data type
    printf("8/3 = %f\n", 8/3.0);
    printf("2 ^ 4 = %d\n", (int)pow(2,4));

    printf("%f", 2.4 +5);
    year += 1; 
    year ++;


    return 0;
}

