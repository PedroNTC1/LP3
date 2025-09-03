#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
    int x, n, count=0;
    srand(time(NULL));
    
    printf("ESCOLHE UM NUMERO PARA A MAQUINA ADIVINHAR\n");
    printf("NUMERO: ");
    scanf("%d", &x);
    
    for (int i= 0; i<= 100; i++){
        n = (rand()% 100) + 1;

        if(x == n){
            printf("ACERTEI SEU NUMERO, ERA O NUMERO: %d\n", n);
            count++;
            printf("QUANTIDADE DE CHUTES: %d", count);
            return 0;
        }
        else if( x > n){
            printf("ERREI, ESCOLHI %d, VOU CHUTAR UM VALOR MAIS ALTO\n", n);
            count ++;
        }
        else if(x < n){
            printf("ERREI,ESCOLHI %d, VOU CHUTAR UM VALOR MAIS BAIXO\n", n);
            count ++;
        }

    }
    printf("QUANTIDADE DE CHUTES: %d", count);
    return 0;
}