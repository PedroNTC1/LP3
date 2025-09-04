#include <stdio.h>

#define MAX_INTERVALOS 100

typedef struct {
    int inicio;
    int fim;
} Intervalo;

int main() {
    Intervalo intervalos[MAX_INTERVALOS];
    int qtd = 0;  // quantidade de intervalos armazenados
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Adicionar intervalo\n");
        printf("2 - Verificar ponto\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (qtd >= MAX_INTERVALOS) {
                printf("Nao e possivel adicionar mais intervalos.\n");
            } else {
                int inicio, fim;
                printf("Digite o valor de inicio do intervalo: ");
                scanf("%d", &inicio);
                printf("Digite o valor de fim do intervalo: ");
                scanf("%d", &fim);

                if (fim < inicio) {
                    // troca se o usuário digitou invertido
                    int temp = inicio;
                    inicio = fim;
                    fim = temp;
                }

                intervalos[qtd].inicio = inicio;
                intervalos[qtd].fim = fim;
                qtd++;

                printf("Intervalo [%d, %d] adicionado com sucesso!\n", inicio, fim);
            }
        }
        else if (opcao == 2) {
            if (qtd == 0) {
                printf("Nenhum intervalo foi adicionado ainda.\n");
            } else {
                int ponto;
                int encontrado = 0;
                printf("Digite o ponto a verificar: ");
                scanf("%d", &ponto);

                for (int i = 0; i < qtd; i++) {
                    if (ponto >= intervalos[i].inicio && ponto <= intervalos[i].fim) {
                        printf("Dentro do intervalo [%d, %d]\n",
                               intervalos[i].inicio, intervalos[i].fim);
                        encontrado = 1;
                        break; // basta encontrar o primeiro
                    }
                }
                if (!encontrado) {
                    printf("Fora de todos os intervalos.\n");
                }
            }
        }
        else if (opcao != 0) {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");
    return 0;
}
