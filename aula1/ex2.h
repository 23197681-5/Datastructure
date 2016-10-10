/*a. Faça um programa que compute as soluções da
equação Ax2 + Bx + C = 0. Os valores de A, B e C
devem ser fornecidos pelo usuário

b. O valor do seno de x pode ser calculado pela série de
Taylor, dada por:
sin(x) = x − x33! + x55! − x77! ... Faça um programa que leia o valor de x e compute o
valor do seno usando os 5 primeiros termos da série de
Taylor. Mostre o valor calculado e o valor da função
padrão sin(x).*/
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
float bask()
{
    float v1, v2, v3;
    printf("Entre com \"a\": ");
    scanf("%f", &v1);
    printf("Entre com o valor de \"b\": ");
    scanf("%f", &v2);
    printf("Entre com o valor de c: ");
    scanf("%f", &v3);
    float x1 = ((-1*v2)+ sqrt(pow(v2,2)-(4*v1*v3)))/(2*v1);
    float x2 = ((-1*v2)- sqrt(pow(v2,2)-(4*v1*v3)))/(2*v1);
    printf("x\' é:  %.2f, x\" é %.2f", x1, x2);
	printf("\n Digite algo e Precione enter para sair \n");
    scanf("%f", &v2);

 return 0;
}
float sino(){
    double x;
    printf("Entre com o valor de \"x\": ");
    scanf("%g", &x);
    printf("\n sin(x)= %.20g \n a função pré arranjada sin()= %.20g\n",(x-(pow(x,3)/6)+(pow(x,5)/120)-(pow(x,7)/5040)+(pow(x,9)/362880)-(pow(x,11)/39916800)+(pow(x,13)/6227020800)), sin(x));
    printf("\n Digite algo e Precione enter para sair \n");
    scanf("%f", &x);

    return 0;
}
