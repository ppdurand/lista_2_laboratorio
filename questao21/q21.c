/*Um pal ́ındromo  ́e um n ́umero, ou frase textual, que pode ser lido da mesma forma da esquerda para
a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco d ́ıgitos  ́e um pal ́ındromo:
12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco d ́ıgitos e determine se
ele  ́e ou n ̃ao um pal ́ındromo. [Dica: use os operadores de divis ̃ao e m ́odulo para separar o n ́umero em seus d ́ıgitos individuais.]*/

#include <stdio.h>

int main(){
    int numero, numero_vetor[5], aux = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    numero_vetor[0] = numero / 10000;
    numero_vetor[1] = (numero % 10000) / 1000;
    numero_vetor[2] = (numero % 1000) / 100;
    numero_vetor[3] = (numero % 100) / 10;
    numero_vetor[4] = numero % 10;

    for(int i = 0; i <= 4; i++){
        if(numero_vetor[i] == numero_vetor[4 - i]){
            aux++;
        }
    }
    
    if(aux == 5){
        printf("O numero e palidromo");
    }else{
        printf("O numero nao e palindromo");
    }
}