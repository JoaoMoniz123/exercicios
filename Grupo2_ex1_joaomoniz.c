#include <stdio.h>
#include <stdlib.h>

int main (void){

    int x = 0;
    int y = 0;
    int i = 0;


    printf("Numero para X? \n");
    scanf(" %d", &x);
    i=x;

    printf("Numero para y?\n");
    scanf(" %d", &y);

    for(x = i; x <= y; x++ ) {
        printf(" %d\n", x, y);
       }
    printf("x = %d", x);
    printf(" y = %d",y);
}