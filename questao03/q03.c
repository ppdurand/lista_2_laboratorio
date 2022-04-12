//Escreva um programa que leia um numero inteiro e positivo F e calcule o fatorial deste numero.

#include <stdio.h>

int main(){
    int F, fatorial;
    printf("Digite o valor de um numero: ");
    scanf("%d", &F);

    if (F > 0){
        fatorial = F;
        while(F > 1){
            fatorial = fatorial * (F - 1);
            F--;
        }
        printf("FATORIAL: %d", fatorial);
    }else{
        printf("numero invalido");
    }
}