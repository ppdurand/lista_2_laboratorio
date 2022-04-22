/*Construir um programa que apresente como resultado o fatorial dos valores  ́ımpares situados na faixa
n ́umero de 1 a 10.*/

#include <stdio.h>

int main(){
    int fat, valor;
    for(int i = 0; i <= 10; i++){
        if(i % 2 == 0){
            continue;
        }else{
            valor = i;
            fat = valor;
            do{
                fat *= (valor - 1);
                valor -= 1;
            }while(valor > 1);
            printf("Fatorial de %d e %d\n", i, fat);
        }
    }
}