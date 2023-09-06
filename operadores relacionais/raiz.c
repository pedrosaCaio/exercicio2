#include<stdio.h>
#include<math.h>

main (){
    double num, raiz, quad;

    printf("Digite um numero:");
    scanf ("%1f", &num);

    if (num >= 0){
        raiz= sqrt (num);
         printf("A raiz quadrada do numero e: %.21f", raiz);

    }else{
quad= num * num;
printf ("O quadrado do numero e: %.21f", quad);
    }

}