#include <stdio.h>

int main() {
    int tamanho = 10;
    float vetor[tamanho];
    int quantidadeNegativos = 0;
    float somaPositivos = 0.0;

    // Preencher o vetor com 10 números reais

    printf("Digite 10 números reais:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    // Calcular a quantidade de números negativos e a soma dos números positivos

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    // Exibir os resultados
    
    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
