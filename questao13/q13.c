/*Elabore um programa que calcule o somat ́orio de todos os n ́umeros pares pertencentes a faixa A,B
especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>

int main(){
    int a, b, soma = 0;

    printf("Informe o inicio: ");
    scanf("%d", &a);
    printf("Informe o final: ");
    scanf("%d", &b);

    if(a > b){
        for(b; b <= a; b++){
            if(b % 2 == 0){
                soma += b;
            }

        }
    }else if(a < b){
        for(a; a <= b; a++){
            if(a % 2 == 0){
                soma += a;
            }
        }
    }
    printf("O somatorio dos numeros pares e %d", soma);
}