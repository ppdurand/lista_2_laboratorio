/*Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
A condição de termino do programa ́e quando o usuário digitar zero.*/

#include <stdio.h>

int main(){
    int n, c, menor, maior = 0;
    
    while (1){
        printf("Digite um valor: ");
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if(c == 1){
            menor = n;
        }
        if (n > maior){
            maior = n;
        }
        if (n < menor){
            menor = n;
        }
        c++;
    }
    printf("O maior numero foi %d e o menor foi %d", maior, menor);
}