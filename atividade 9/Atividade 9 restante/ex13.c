#include <stdio.h>

int main() {
    int quantidade = 5;
    int valores[quantidade];
    int maior, menor, posicaoMaior, posicaoMenor;

    // Ler os 5 valores
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        // Inicializar maior e menor com o primeiro valor lido
        if (i == 0) {
            maior = menor = valores[i];
            posicaoMaior = posicaoMenor = i;
        } else {
            // Verificar se o valor lido é maior ou menor que os atuais
            if (valores[i] > maior) {
                maior = valores[i];
                posicaoMaior = i;
            }
            if (valores[i] < menor) {
                menor = valores[i];
                posicaoMenor = i;
            }
        }
    }

    // Exibir as posições do maior e do menor valor
    printf("Posição do maior valor: %d\n", posicaoMaior);
    printf("Posição do menor valor: %d\n", posicaoMenor);

    return 0;
}
