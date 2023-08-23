#include<stdio.h>

 main(){

    //variaveis
    float numCarros,TotalVendas,salarioFixo,valorPorCarrro,salarioFinal,porcentagemVendas = 0.05;

    printf("Digite quantos carros vendeu: ");
    scanf("%f", &numCarros);

    printf("Digite o total de vendas: ");
    scanf("%f", &TotalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro: ");
    scanf("%f", &valorPorCarrro);

    salarioFinal = (numCarros * valorPorCarrro) + (TotalVendas * porcentagemVendas) + salarioFixo;

    printf("O salario final e: R$%.2f", salarioFinal);


}

