/*Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma
faixa especificada pelo usu ́ario.*/

#include <stdio.h>

int main(){
    int inicio, final; 
    float media, tot, soma = 0;
    printf("Digite o inicio: ");
    scanf("%d", &inicio);
    printf("Digite o final: ");
    scanf("%d", &final);

    for(inicio; inicio <= final; inicio++){
        soma += inicio;
        tot += 1;
    }
    media = soma / tot;
    printf("A media dos numeros e %0.2f", media);
}