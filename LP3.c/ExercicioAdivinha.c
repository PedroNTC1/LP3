#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
    int x, n, count=0;
    srand(time(NULL));
    n = (rand()% 100) + 1;
    
    printf("ADIVINHE O NUMERO ENTRE 1 E 100\n");

    
    for (int i= 0; i<= 100; i++){
        printf("NUMERO: ");
        scanf("%d", &x);

        if(x == n){
            printf("VOCE ACERTOU O NUMERO, PARABENS\n");
            count++;
            printf("QUANTIDADE DE CHUTES: %d", count);
            return 0;
        }
        else if( x < n){
            printf("DIGITE UM VALOR MAIS ALTO\n");
            count ++;
        }
        else if(x > n){
            printf("DIGITE UM VALOR MAIS BAIXO\n");
            count ++;
        }

    }
    return 0;
}