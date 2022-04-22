/*A serie de Fibonacci  ́e formada pela seguinte sequˆencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva
um algoritmo que gere a série de Fibonacci até o vig ́esimo termo.*/

#include <stdio.h>

int main(){
    int a = 1, b = 1, c;

    printf("%d ", a);
    printf("%d ", b);

    for(int i = 1; i <= 18; i++){ // i <= 18 porque qaundo o i for 1 ele vai printar dois números
        if(i == 1){
            printf("%d ", a);
            printf("%d ", b);
        }
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}