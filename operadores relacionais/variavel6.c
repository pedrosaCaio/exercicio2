#include<stdio.h>

main(){

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número digitado é par.");
    }

    return 0;
}
