#include <stdio.h>
#include <stdlib.h>
/*  ----------RASCUNHO AUXILIAR-------------

    vetor = (int *) malloc (tam * sizeof (int))
    vetor = (int *) calloc (tam, sizeof(int))
    vetor = (int *) realloc (vet, count * sizeof(int)) "realocar dinamicamente um espaço de memória, diminuir ou aumentar"
    if (vetor == NULL){
    printf("erro de alocação dinamica")
    return 1;}
    free(vetor);
    return 0;
    
    
    
*/
int main (){
    int n, *vet1, *vet2, *vet3;
    //ENTRADA TAMANHO DOS VETORES
    printf("DIGITE O TAMANHO DA LISTA ENTRE 0 A 1000: \n");
    scanf("%d", &n);

    // tamanho minimo e maximo dos vetores
    if (n < 0 || n > 1000){
        return 1;
    }

    //alocacao dinamica dos vetores
    vet1 = (int*) malloc(n * sizeof(int));
    vet2 = (int*) malloc(n * sizeof(int));
    vet3 = (int*) malloc(n * sizeof(int));

    //VERIFICACAO ALOCACAO
    if (vet1 == NULL || vet2 == NULL || vet3 == NULL){
        printf("ALOCACAO FALHOU\n");
        return 1;
    }

    //entrada lista 1, lista 2 e soma lista 1 com 2 no vetor 3
    for (int i=0; i<n; i++){
        printf("LISTA 1 - DIGITE O NUMERO %d: ", i+1);
        scanf("%d", &vet1[i]);
    }
    for (int i=0; i<n; i++){
        printf("LISTA 2 - DIGITE O NUMERO %d: ", i+1);
        scanf("%d", &vet2[i]);
    }
    int j = n-1;
    for(int i=0; i<n; i++){
        vet3[i] = vet1[i] + vet2[j];
        j--;
    }
    //imprimir lista 1, lista 2, soma.
        for (int i=0; i<n; i++){
        printf("%d ", vet1[i]);
    }
    printf("\n");
        for (int i=0; i<n; i++){
        printf("%d ", vet2[i]);
    }
    printf("\n");

        for (int i=0; i<n; i++){
        printf("%d ", vet3[i]);
    }
    //LIBERAR ESPACO
    free(vet1);
    free(vet2);
    free(vet3);
    return 0;
}