#include <stdio.h>

char classificacao(float media){

    char notas;

    if(media < 10){
        notas = 'D';

    }else if(media < 15){
        notas = 'C';

    }else if(media < 19){
        notas = 'B';

    }else{
        notas = 'A';

    }

    return notas;

}

float valores(int nota1, int nota2, int nota3){

    float media2;

    media2 = (nota1*0.35) + (nota2*0.20) + (nota3 * 0.45);

    return media2;
}

int main(void){

    float media;
    int nota1;
    int nota2;
    int nota3;
    char nota;

    printf("Qual o valor do seu primeiro teste?\n");
    scanf(" %d", &nota1);

    printf("Do seu segundo teste?\n");
    scanf(" %d", &nota2);

    printf("E do seu terceiro teste?\n");
    scanf(" %d", &nota3);


    media = valores(nota1, nota2, nota3);

    nota = classificacao(media);

    printf("Sua media final = %.2f\n Nota corresponde: %c\n", media, nota);

}