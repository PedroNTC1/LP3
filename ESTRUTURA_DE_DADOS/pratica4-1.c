#include <stdio.h>
#include <stdlib.h>

 typedef struct Lista{
    int valor;
    struct Lista *proximo;
 } Lista;

// funcao criar novo no
 Lista *novo_no(int valor){
    Lista *no = (Lista*)malloc(sizeof(Lista));
    no -> valor = valor;
    no -> proximo = NULL;
    return no;
 }

 // inserir no final da lista 
void inserir_final(Lista** l, int valor){
    Lista* novo = novo_no(valor);
    if(*l == NULL){
        *l = novo;
    }else{
        Lista *temp = *l;
        while(temp -> proximo != NULL)
            temp = temp -> proximo;
        temp -> proximo = novo;
    }
}
//funcao para imprimir 
void imprimir_lista(Lista *l){
    while(l != NULL){
        printf("%d", l->valor);
        if(l -> proximo != NULL) printf(" ");
        l = l-> proximo;
    }
    printf("\n");
}
// funcao para reordenar 
 int main (){

    return 0;
 }