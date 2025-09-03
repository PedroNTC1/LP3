/*Array de Funções:
Utilizar um array de ponteiros de funções para armazenar várias operações matemáticas e permitir seleção dinâmica.
*/
#include <stdio.h>

double somar (double a , double b) {
    return a + b;
}
double subtrair (double a, double b){
    return a-b;
}
double multiplicar(double a , double b){
    return a*b;
}
double dividir(double a, double b){
    if (b == 0){
        printf("Erro divisão por zero!\n");
        return 1;
    }
    return a/b;
}

int main (void){
    typedef double (*Operacoes)(double, double);
    
    Operacoes operacoes[4] = {
        somar,
        subtrair, 
        multiplicar, 
        dividir
    };
    int escolha;
    double num1, num2, resultado;

    //MENU
    printf("Calculadora com Aray de funcos \n");
    printf("---------------------------------\n");
    printf("Escolha uma opcao de operacao\n");
    printf("1- Adicao\n");
    printf("2- Subtracao\n");
    printf("3- Multiplicacao\n");
    printf("4- Divisao\n");

    scanf("%d", &escolha);
    escolha--;

    if  (escolha <0 && escolha > 3){
        printf("Nao temos essa opcao\n");
        return 1;
    }
    printf("Digite o primeiro numero: \n");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%lf", &num2);

    if(escolha == 4 && num2 == 0){
        printf("Operacao invalida\n");
        return 1;
    }
    resultado = operacoes[escolha](num1, num2);
    printf("O resultado: %.2f", resultado);

    return 0;
}