#include <stdio.h>

int main()
{
    int vetor[10], maior, menor;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite os numeros");
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 8; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("O maior valor é %d e o menor é %d", maior, menor);
}