/*Implementar um programa para resolver o seguinte problema: Jos ́e tem 150 cent ́ımetros e cresce 2
cent ́ımetros por ano. O Pedro tem 110 cent ́ımetros e cresce 3 cent ́ımetros por ano. Em quantos anos
Pedro ser ́a maior que José?*/

#include <stdio.h>

int main(){
    int jose = 150, pedro = 110, anos = 0;
    while(jose > pedro){
        anos++;
        pedro += 3;
        jose += 2;
    }
    printf("Pedro sera maior que Jose em %d anos", anos);

}