/*Elaborar um programa que apresente os valores de convers ̃ao de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a f ́ormula de convers ̃ao.*/

#include <stdio.h>

int main(){
    float C, F;
    for(int i = 0; i <= 10; i++){
        C = i * 10;
        F = (9 * C + 160) / 5;
        printf("Inspecao %d\n", i + 1);
        printf("Graus Celsius: %0.1f\nGraus Fahrenheit: %0.1f\n", C, F);
    }
    return 0;
}