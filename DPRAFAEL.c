#include <stdio.h>
#include <math.h> // Necessário para a função de raiz quadrada (sqrt)

// Protótipo da função que fará o cálculo principal
double calcularDesvioPadrao(double dados[], int n);

int main() {
    int n; // Variável para armazenar o número de valores

    // Pergunta ao usuário quantos números ele irá inserir
    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    // Validação: Garante que o número de termos seja válido
    if (n <= 0) {
        printf("Erro: O numero de valores deve ser maior que zero.\n");
        return 1; // Encerra o programa com um código de erro
    }

    // Declara um array de 'double' com o tamanho exato que o usuário pediu
    // 'double' é usado para permitir números com casas decimais
    double numeros[n];

    // Pede ao usuário para inserir cada um dos números
    printf("\nDigite os %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%lf", &numeros[i]); // '%lf' é o especificador para ler um 'double'
    }

    // Chama a função para calcular o desvio padrão e armazena o resultado
    double desvioPadrao = calcularDesvioPadrao(numeros, n);

    // Imprime o resultado final formatado
    printf("\n----------------------------------\n");
    printf("O Desvio Padrao (Dp) e: %.6f\n", desvioPadrao);
    printf("----------------------------------\n");

    return 0; // O programa terminou com sucesso
}

/**
 * @brief Calcula o desvio padrão de um conjunto de dados.
 * @param dados Um array de números do tipo double.
 * @param n O número de elementos no array.
 * @return O valor do desvio padrão.
 */
double calcularDesvioPadrao(double dados[], int n) {
    double soma = 0.0;
    double media = 0.0;
    double soma_diferencas_quadradas = 0.0;
    double variancia = 0.0;

    // --- PASSO 1: Calcular a Média (x̄) ---
    // Soma todos os valores do array
    for (int i = 0; i < n; i++) {
        soma += dados[i];
    }
    // Divide a soma pelo número de elementos para obter a média
    media = soma / n;

    // --- PASSO 2 e 3: Calcular Σ(xi - x̄)² ---
    // Para cada valor, calcula a diferença da média, eleva ao quadrado e soma
    for (int i = 0; i < n; i++) {
        // (dados[i] - media) -> Calcula a diferença (xi - x̄)
        // O resultado é multiplicado por ele mesmo para elevar ao quadrado
        soma_diferencas_quadradas += (dados[i] - media) * (dados[i] - media);
    }

    // --- PASSO 4: Calcular a Variância ---
    // Divide a soma das diferenças pelo número de elementos
    variancia = soma_diferencas_quadradas / n;

    // --- PASSO 5: Calcular o Desvio Padrão ---
    // Tira a raiz quadrada da variância
    // A função sqrt() vem da biblioteca math.h
    return sqrt(variancia);
}