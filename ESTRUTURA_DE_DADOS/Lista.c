#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
    int itens;
    struct Lista* prox;
}Lista;

Lista *inserir_comeco (Lista *lista, int num){
    Lista *Nonovo = (Lista *)malloc(sizeof(Lista));
    Nonovo -> itens = num;
    Nonovo -> prox = NULL;
    return Nonovo;
}
Lista *inserir_final(Lista *lista, int num){
    Lista *Novono = (Lista *)malloc(sizeof(Lista));
    Novono -> itens = num;
    Novono -> prox = NULL;

    if (lista == NULL){
        return Novono;
    }
    else{
        Lista *aux = lista;
        while (aux->prox != NULL){
            aux = aux -> prox;
        }
        aux->prox = Novono;
        return lista;
    }

}

int main (){

    Lista *lista= NULL;

    lista = inserir_final(lista, 23);
    lista = inserir_final(lista, 10);
    lista = inserir_final(lista, 11);
    lista = inserir_final(lista, 99);
    lista = inserir_final(lista, 33);
    lista = inserir_final(lista, 12);
    
    Lista *aux = lista;

    while(aux != NULL){
        printf("%d \n", aux->itens);
        aux = aux ->prox;
    }
    aux = lista;

    return 0;
}