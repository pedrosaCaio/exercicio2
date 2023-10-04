#include <stdio.h>

int main() {
    int quantidade = 5;
    int valores[quantidade];
    int maior, menor, soma = 0;

    // Ler os 5 valores
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];

        // Inicializar maior e menor com o primeiro valor lido
        if (i == 0) {
            maior = menor = valores[i];
        } else {
            // Verificar se o valor lido é maior ou menor que os atuais
            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }
    }

    // Calcular a média
    float media = (float)soma / quantidade;

    // Exibir os resultados
    printf("Valores lidos:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
