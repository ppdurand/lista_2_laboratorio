/*Elaborar um programa que mostre os resultados da tabuada de um n ́umero inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.*/
#include <stdio.h>

int main(){
    int numero;

    puts("Informe um número: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}