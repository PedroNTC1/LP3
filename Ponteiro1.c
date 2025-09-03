/*Exercício 1: O Básico de & e *
Crie um programa que:

Declare uma variável int chamada valor e inicialize-a com o valor 100.

Declare um ponteiro para int chamado ponteiro.

Faça com que ponteiro armazene o endereço da variável valor.

Imprima na tela:

O valor da variável valor.

O endereço de memória da variável valor.

O valor contido no ponteiro (que deve ser o mesmo endereço de valor).

O valor para o qual o ponteiro aponta (usando o operador *).

Modifique o valor da variável valor através do ponteiro, atribuindo o número 200.

Imprima novamente o valor da variável valor para confirmar que ela foi alterada.*/

#include <stdio.h>

int main(){
    int *ponteiro, valor=100;
    ponteiro = &valor;
    printf("%d \n", valor);
    printf("%p\n", (void *)&valor);
    printf("%p\n", (void *)ponteiro);
    printf("%d\n", *ponteiro);

    *ponteiro = 200;
    printf("%d\n", valor);
    printf("%d\n", *ponteiro);


    return 0;
}