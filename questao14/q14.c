/*Elabore um programa que apresente a quantidade de n ́umeros divis ́ıveis por 3 pertencentes a faixa
A,B especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>

int main(){
    int a, b, total = 0;

    printf("Informe o inicio: ");
    scanf("%d", &a);
    printf("Informe o final: ");
    scanf("%d", &b);

    if(a > b){
        for(b; b <= a; b++){
            if(b % 3 == 0){
                total += 1;
            }

        }
    }else if(b > a){
        for(a; a <= b; a++){
            if(a % 2 == 0){
                total += 1;
            }
        }
    }
    printf("O total de numeros divisiveis por 3 e %d", total);
}