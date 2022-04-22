/*Refa ̧ca a quest ̃ao 10, considerando que os limites da faixa (A e B) sejam fornecidos pelo usu ́ario. O
programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>

int main(){
    int a, b, i;

    printf("Defina o inicio: ");
    scanf("%d", &a);
    printf("Defina o final: ");
    scanf("%d", &b);
    if(a > b){
        for(a; a >= b; a--){
            if(a % 4 == 0){
                printf("O quadrado de %d e %d\n", a, a * a);
            }
        }
    }else if(b > a){
        for(a; a <= b; a++){
            if(a % 4 == 0){
                printf("O quadrado de %d e %d\n", a, a * a);
            }
        }
    }else{
        puts("O início e o final não podem ser iguais");
    }
}