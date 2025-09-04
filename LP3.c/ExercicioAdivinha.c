#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
    int x, n, count=0;
    int baixo= 1, alto= 100, palpite, count2;
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
    printf("----------------------------\n");
    printf("AGORA VOU ADIVINHAR O SEU NUMERO\n");
    printf("DIGITE UM NUMERO PARA EU ADIVINHAR: \n");
    scanf("%d", &y);

    while (m != y)
    {
        metade = m/2;
        m = metade;
        if (m == y){
            printf("acertou");
            return 0;
        }
        else if(m < y){
            pritn
        }
    }
    

    return 0;
}