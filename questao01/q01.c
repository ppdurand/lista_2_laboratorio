/*Implemente um programa que tenha como entrada um n ́umero (1-7) que corresponde a um dos dias
da semana e imprima na tela o nome do dia correspondente (domingo, segunda, ter ̧ca, quarta, quinta,
sexta, sabado). Se o número lido n ̃ao estiver no intervalo 1-7, imprima: “Número de dia não válido”. O
programa deve permanecer executando at ́e que o usu ́ario tecle o numero 0. (Utilize obrigatoriamente
teste no início).*/

#include <stdio.h>

int main(){
    int dia;

    do{
        printf("Digite um numero 1 a 7: ");
        scanf("%d", &dia);

        if (dia > 7 || dia == 0){
            puts("Dia invalido\n");
            continue;
        }else{
            printf("Dia valido\n");  
                
            switch (dia){
                case (1):
                    puts("Domingo");
                    break;
                case (2):
                    puts("Segunda");
                    break;
                case (3):
                    puts("Terca");
                    break;
                case (4):
                    puts("Quarta");
                    break;
                case (5):
                    puts("Quinta");
                    break;
                case (6):
                    puts("Sexta");
                    break;
                case (7):
                    puts("Domingo");
                    break;
                default:
                    puts("Dia invalido");
            }
        }
    }
    while(dia != 0);
}