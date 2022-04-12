/*Escreva um programa que transforme o computador numa urna eletrˆonica para elei ̧c ̃ao para presidente
de um certo paıs, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo
n ́umero do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos
j ́a citados  ́e considerado nulo; em qualquer situa ̧c ̃ao, o eleitor deve ser consultado quanto `a confirma ̧c ̃ao do seu voto. No final da elei ̧c ̃ao o programa deve emitir um relat ́orio contendo as porcentagens de vota ̧c ̃ao de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O c ́odigo para finalizar a urna (vota ̧c ̃ao)  ́e o usu ́ario digitar algum n ́umero negativo.*/

#include <stdio.h>

int main(){
    int paulo, renata, voto, nulo, branco, total_votos;
    float pp, pr, pn, pb;

    do{
        puts("5 - Paulo\n");
        puts("7 - Renata\n");
        puts("0 - Branco\n");
        puts("Seu voto: ");
        scanf("%d", &voto);

        switch (voto){
        case (5):
            paulo++;
            total_votos++;
            break;
        case (7):
            renata++;
            total_votos++;
        case (0):
            branco++;
            total_votos++;
        default:
            nulo++;
            total_votos++;
            break;
        }
    }while(voto >= 0);

    pp = 100 * paulo / total_votos;
    pr = 100 * renata / total_votos;
    pn = 100 * nulo / total_votos;
    pb = 100 * branco / total_votos;

    printf("Paulo: %0.2f %%\n", pp);
    printf("Renata: %0.2f %%\n", pr);
    printf("Nulo: %0.2f %%\n", pn);
    printf("Branco: %0.2f %%\n", pb);





}