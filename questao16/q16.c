/*Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao
intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.*/

#include <stdio.h>

int main(){
    int soma_3 = 0, soma_5 = 0;
    for(int i = 0; i <= 100; i++){
        if(i % 3 == 0){
            soma_3 += i;
        }
        if((i + 100) % 5 == 0){
            soma_5 += i + 100;
        }
    }
    printf("A soma dos numeros divisiveis por 3 de 0 a 100 e %d e a dos divisiveis por 5 de 100 a 200 e %d", soma_3, soma_5);
}