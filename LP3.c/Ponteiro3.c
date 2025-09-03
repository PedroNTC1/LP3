/*Tenha uma função void troca(int *a, int *b) que recebe dois ponteiros para inteiros.

A função deve trocar os valores das variáveis originais para as quais os ponteiros a e b apontam. (Dica: você precisará de uma variável temporária dentro da função).

Na função main, declare duas variáveis, x = 10 e y = 20.

Imprima os valores de x e y.

Chame a função troca para inverter os valores de x e y.

Imprima os valores de x e y novamente para confirmar a troca.*/
#include <stdio.h>

void troca (int *a, int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 10, y = 20;
    printf("Valor antes da troca: %d   %d\n", x, y);
    troca (&x, &y);
    printf("Valor depois da troca: %d   %d", x, y);

    return 0;
}