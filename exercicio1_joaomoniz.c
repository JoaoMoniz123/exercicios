#include<stdio.h>

int main(void)

{

float metros;
float decimetros;
float centimetros;
float milimetros;

printf("Qual o valor em metros\n");

scanf("%f",&metros);

decimetros = metros*10;

centimetros = metros*100;

milimetros = metros*1000;

printf("O valor em decimetros = %f\n",decimetros);

printf("O valor em centimetros = %f\n",centimetros);

printf("o valor em milimetros = %f\n",milimetros);

}
