#include <stdlib.h>
#include <stdio.h>

int main (void){

    //declaraçao de variaveis todas do tipo float
    float num1;
    float num2;
    float num3;
    float media;

    //pedir informaçao ao utilizador e guardar
    printf("Qual a primeira nota? \n");
    scanf(" %f", &num1);

    printf("Qual a nota do segundo teste?\n");
    scanf(" %f", &num2);

    printf("Nota do terceiro teste?\n");
    scanf(" %f", &num3);
    
    //resultados
    num1 = num1 * 0.20;
    num2 = num2 * 0.35;
    num3 = num3 * 0.40;

    //fazer a media das notas
    media = num1 + num2 + num3;
    
    //apresentacao da media
    printf("Media = %f\n", media);

    if (media = 10 || media >= 9){
        printf("Nivel A\n");
    }
    else if (media < 9 || media >= 7.5){
        printf("Nivel B\n");
    }
    else if (media < 7.5 || media >= 6){
        printf("Nivel C\n");
    }
    else if (media < 6 || media >= 4){
        printf("Nivel D\n");
    }
    else if(media < 4){
        printf("Nivel E\n");
    }
}