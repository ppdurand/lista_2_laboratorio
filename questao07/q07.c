/*Para que a divis ̃ao entre 2 n ́umeros possa ser realizada, o divisor n ̃ao pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divis ̃ao do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que n ̃ao deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida.*/

#include <stdio.h>

int main(){
    float n1, n2, resultado;
    
    do{
        printf("Digite o primeiro valor: ");
        scanf("%d", &n1);
        printf("Digite o segundo valor: ");
        scanf("%d", &n2);

        if (n2 != 0){
            resultado = n1 / n2;
            printf("Resultado: %0.2f", resultado);
        }else{
            printf("O segundo valor nao pode ser 0\n");
        }
    }while(n2 == 0);

    
}