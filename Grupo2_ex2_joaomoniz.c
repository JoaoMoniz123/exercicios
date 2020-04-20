#include <stdlib.h>
#include <stdio.h>

int main(void){

float margem= 0;
float percent = 0;
float calc = 0 ;
int percent2 = 0;

printf("Diga o valor do produto\n");
scanf(" %f", &margem);

if (margem < 99.99) {

    percent = 99.99 * 0.15;
    calc = margem - percent;
    percent2 = 15;
}
else if (margem > 100.01) {
    percent = 99.99 * 0.05;
    calc = margem - percent;
    percent2 = 5;
}
else if (margem == 100.00) {

    percent = 99.99 * 0.10;
    calc = margem - percent;
    percent2 = 10;
}
printf(" Valor inicial do produto = %f, precentagem = %d e total = %f ", margem, percent2 , calc);

}