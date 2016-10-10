

/*a media de dois numeros
b. Faça um programa que leia 3 notas de um aluno, onde a primeira e
segunda nota possuem peso 1 e a terceira nota possui peso 2. Calcule a
média ponderada destas notas, usando os pesos, e depois mostre na
tela o resultado (exibir a média com apenas 2 casas após a vírgula).
c. Faça um programa que leia uma temperatura fornecida em graus Celsius
(◦C) e converta para graus Fahrenheit (◦F), exibindo o resultado na tela.
d. Faça um programa que leia o valor da hora de trabalho (em reais) e
número de horas trabalhadas no mês, e exiba na tela o valor a ser pago
ao funcionário, adicionando 10% sobre o valor calculado.*/

#include <stdio.h>
#include <stdlib.h>

void menu();
float media()
{
    float n1, n2;
    printf("Entre com a primeira nota: ");
    scanf("%f", &n1);
    printf("Entre com a segunda nota: ");
    scanf("%f", &n2);
    printf("A media é:  %.2f", (n1+n2)/2.0);
    printf("\n Digite algo e Precione enter para sair \n");
    scanf("%f", &n2);
    
 return 0;
}

float mediaDe3Notas()
{
    float n1, n2, n3;
    printf("Entre com a primeira nota: ");
    scanf("%f", &n1);
    printf("Entre com a segunda nota: ");
    scanf("%f", &n2);
    printf("Entre com a terceira nota: ");
    scanf("%f", &n3);
    printf("A media é:  %.2f", ((n1+n2)/4.0)+n3*0.5);
    printf("\nDigite algo e Precione enter para sair \n");
    scanf("%f", &n2);
    
 return 0;

}

float CelsFahren()
{
  float c1;
    printf("Entre com a temperatura em celsius: ");
    scanf("%f", &c1);
    printf("Isso em fahrenheits é:  %.2f", (c1*1.8)+32);
    printf("\n Digite algo e Precione enter para sair \n");
    scanf("%f", &c1);
    
 return 0;
 }

float abono()
{
    float s1, v1;
    printf("Entre numero de horas trabalhadas neste mês: ");
    scanf("%f", &s1);
    printf("Entre o valor de sua hora de trabalho: ");
    scanf("%f", &v1);
    printf("Seu salário abonado é:  %.2f", (s1*v1)*1.1);
    printf("\nDigite algo e Precione enter para sair \n");
    scanf("%f", &s1);
    
 return 0;

}