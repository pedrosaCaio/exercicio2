#include <stdio.h>

int main() {
    int numAlunos = 15;
    float notas[numAlunos];
    float soma = 0.0;
    
    // Ler as notas dos alunos

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        
        // Verificar se a nota é válida (entre 0 e 10)

        if (notas[i] < 0 || notas[i] > 10) {
            printf("Nota inválida! Por favor, insira uma nota entre 0 e 10.\n");
            i--;
            
             // Repetir a leitura da nota para o mesmo aluno

        } else {
            soma += notas[i];
        }
    }
    
    // Calcular a média geral
    float media = soma / numAlunos;
    
    // Imprimir a média geral
    printf("A média geral das notas é: %.2f\n", media);
    
    return 0;
}
