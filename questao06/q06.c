/*Escreva um programa que transforme o computador numa urna eletrˆonica para elei ̧c ̃ao para presidente
de um certo paıs, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo
n ́umero do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos
j ́a citados  ́e considerado nulo; em qualquer situa ̧c ̃ao, o eleitor deve ser consultado quanto `a confirma ̧c ̃ao do seu voto. No final da elei ̧c ̃ao o programa deve emitir um relat ́orio contendo as porcentagens de vota ̧c ̃ao de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O c ́odigo para finalizar a urna (vota ̧c ̃ao)  ́e o usu ́ario digitar algum n ́umero negativo.*/

#include <stdio.h>

int main(){
    int paulo = 0, renata = 0, voto = 0, nulo = 0, branco = 0, total_votos = 0;
    float pp, pr, pn, pb;
    char confirmacao;

    while (1){
        puts("5 - Paulo\n");
        puts("7 - Renata\n");
        puts("0 - Branco\n");
        puts("Seu voto:");
        scanf("%d", &voto);

        if(voto < 0){
            break;
        }

        printf("Confirma? s para sim ou n para nao\n");
        scanf("%c", &confirmacao);

        confirmacao = getchar();
        if (confirmacao == 's'){
            total_votos += 1;
            switch (voto){
            case (5):
                paulo += 1;
                break;
            case (7):
                renata += 1;
                break;
            case (0):
                branco += 1;
                break;
            default:
                nulo += 1;
                break;
            }
        }else if(confirmacao == 'n'){
            continue;
        }
    }

    pp = 100 * ((float) paulo / total_votos);
    pr = 100 * ((float) renata / total_votos);
    pn = 100 * ((float) nulo / total_votos);
    pb = 100 * ((float) branco / total_votos);

    printf("Paulo: %0.1f %%\n", pp);
    printf("Renata: %0.1f %%\n", pr);
    printf("Nulo: %0.1f %%\n", pn);
    printf("Branco: %0.1f %%\n", pb);

    if(pp > pr){
        printf("Paulo ganhou as eleicoes");
    }else if(pr > pp){
        printf("Renata ganhou as eleicoes");
    }else{
        printf("Empate tecnico");
    }
}