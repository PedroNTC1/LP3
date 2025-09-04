#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct 
{
int inicio;
int fim;
}Intervalo;

int main (){
    Intervalo intervalos[MAX];
    int quantidade = 0;
    int opcao;

    do{
        printf("\n--------MENU--------\n");
        printf("\nOPCAO 1- ADICIONAR INTERVALO\n");
        printf("OPCAO 2- VERIFICAR PONTO\n");
        printf("0 PARA SAIR\n");
        printf("ESCOLHA UMA OPCAO\n");
        scanf("%d", &opcao);

        if(opcao == 1){
            if (quantidade >= MAX){
                printf("QUANTIDADE MAXIMA ATINGIDA");
                return 1;
            }
            else {
                int inicio, fim;
                printf("DIGITE O VALOR INICIAL\n");
                scanf("%d", &inicio);
                printf("DIGITE O VALOR FINAL\n");
                scanf("%d", &fim);

                if (fim < inicio){
                int temp = inicio;
                inicio = fim;
                fim = temp;
            }
                intervalos[quantidade].inicio = inicio;
                intervalos[quantidade].fim = fim;
                quantidade++;
                printf ("INTERVALOS [%d a %d] ADICIONADOS COM SUCESSO", inicio, fim);
            }
        }
        else if(opcao == 2){
            if(quantidade == 0){
                printf("NENHUM INTERVALO ADICIONADO AINDA");
            }
            else {
                int ponto; 
                int encontrado = 0;
                printf("DIGITE O PONTO PARA SER ENCONTRADO\n");
                scanf("%d", &ponto);

                for (int i = 0; i < quantidade; i++) {
                    if (ponto >= intervalos[i].inicio && ponto <= intervalos[i].fim) {
                        printf("DENTRO DO INTERVALO [%d, %d]\n",
                            intervalos[i].inicio, intervalos[i].fim);
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado){
                    printf("FORA DE TODOS OS INTERVALOS\n");
                }
            }
        }
    else if (opcao != 0){
            printf("OPCAO INVALIDA");
        }
    } while (opcao != 0);

    printf("--------PROGRAMA ENCERRADO--------\n");
    return 0;
}