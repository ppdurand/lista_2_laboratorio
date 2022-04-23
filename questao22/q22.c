/*Escreva um programa que leia um n ́umero inteiro e determine e imprima quantos d ́ıgitos no inteiro s ̃ao
algarismos 7.*/

#include <stdio.h>
#include <math.h>

int main(){
    int numero, qtdSete = 0, numero_vetor[], i;
    double qtdDigitos;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    qtdDigitos = ((int)log10(numero)) + 1; 

    for(i = 0; i < qtdDigitos; i++){ //separar os digitos
        numero_vetor[i] = ((int) numero) % 10;
        numero = (numero / 10);
        if(numero <= 0){
            break;
        }
    }
    for(i = 0; i < qtdDigitos; i++){
        if (numero_vetor[i] == 7){
            qtdSete++;
        }
    }
    printf("Quantidade de Setes: %d", qtdSete);
}