/*Elabore um programa que apresente os quadrados dos numeros inteiros multiplos de 4 existentes na
faixa de valores de 15 a 90.*/

#include <stdio.h>

int main(){
    for(int i = 15; i <= 90; i++){
        if(i % 4 == 0){
            printf("O quadrado de %d e %d\n", i, i * i);
        }
    }
}