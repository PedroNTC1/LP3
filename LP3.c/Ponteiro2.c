/*Tenha uma função chamada dobra que recebe um ponteiro para int como argumento.

Dentro da função dobra, o valor da variável original (apontada pelo ponteiro) deve ser multiplicado por 2. A função não deve ter retorno (void).

Na função main, declare uma variável int chamada numero com o valor 5.

Imprima o valor de numero antes de chamar a função.

Chame a função dobra, passando o endereço de numero.

Imprima o valor de numero novamente após a chamada da função para mostrar que seu valor foi alterado.*/

#include<stdio.h>

void dobra (int *ptr){
    *ptr = (*ptr) * 2;
}
int main(){
    int numero = 5;
    printf("Antes:%d\n", numero);
    dobra(&numero);
    printf("Depois:%d", numero);
    return 0;
}