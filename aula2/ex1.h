#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
float bask2()
{
    float v1 = 0, v2, v3;

    while(v1 == 0 || v1 < 0)
    {
        printf("Entre com \"a\": ");
        scanf("%f", &v1);//esse espaço antes do %f evita erros na leitura
        if (v1 == 0)
        {
            printf("Esta não pode ser uma equação do segundo grau!\n tente novamente.\n ");
            return 0;
        }
        else if(v1 < 0)
        {
            printf("A raiz de numeros negativos não é real \n tente novamente. \n");
            return 0;
        }
    }
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