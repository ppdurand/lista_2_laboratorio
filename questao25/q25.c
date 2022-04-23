#include <stdio.h>

int main(){
    int sinal = -1;
    float pi = 4, divisor = 3;
    char resposta;

    do{
        pi += sinal * (4 / divisor);

        printf("Pi = %f\n", pi);
        divisor += 2;
        sinal += -1;
        printf("Quer Continuar? \n");
        scanf("%c", &resposta);
    }while(resposta == 's');
}