/*Uma loja vende seus produtos no sistema entrada mais duas presta ̧c ̃oes, sendo a entrada maior do que
ou igual `as duas presta ̧c ̃oes; estas devem ser iguais, inteiras e as maiores poss ́ıveis. Por exemplo, se o
valor da mercadoria for R$ 270,00, a entrada e as duas presta ̧c ̃oes s ̃ao iguais a R$ 90,00; se o valor da
mercadoria for R$ 302,75, a entrada  ́e de R$ 102,75 e as duas presta ̧c ̃oes s ̃ao iguais a R$ 100,00. Escreva
um programa que receba o valor da mercadoria e forne ̧ca o valor da entrada e das duas presta ̧c ̃oes, de
acordo com as regras acima.*/

//Questão em desenvolvimento, ainda não é a versao final//

#include <stdio.h>

int main(){
    int parcela;
    float entrada, preco, aux;

    printf("Digite o valor: R$");
    scanf("%f", &preco);

    aux = (preco / 3) - ((int) preco / 3);
    entrada = (preco / 3) + aux;
    parcela = ((int)preco / 3);


    printf("Parcela: %d\n", parcela);
    printf("Entrada: %0.2f\n", entrada);
}