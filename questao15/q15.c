/*Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um
expoente que varie do valor 0 a 7.*/

#include <stdio.h>
#include <math.h>

int main(){  
    for(double i = 0; i <= 7; i++){
        printf("3 ** %0.lf = %0.lf\n", i, pow(3, i));
    }
    return 0;
}