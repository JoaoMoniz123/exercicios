#include <stdio.h>
#include <stdlib.h>

float soma(float num1, float num2, float num3);
float subtracao(float num1, float num2, float num3);
float divisao(float num1, float num2);
float multiplicacao(float num1, float num2);

int main(){
    int resposta;
    float num1, num2, num3, resultado;


do{
    
    printf("MENU\n");
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("3-Dividir\n");
    printf("4-Multiplicar\n");
    printf("5-Sair\n");
        scanf(" %d", &resposta);

} while (resultado >= 5 && resultado < 0);

    


    if (resposta == 1){
        
        printf("Diga 3 numeros\n");
            scanf(" %f", &num1);
        printf("Mais um\n");
            scanf(" %f", &num2);
        printf("ultimo\n");
            scanf(" %f", &num3);
        resultado = soma(num1, num2, num3);
        printf("Seu resultado = %f", resultado);

    }
    else if (resposta == 2){
        
        printf("Diga 3 numeros\n");
            scanf(" %f", &num1);
        printf("Mais um\n");
            scanf(" %f", &num2);
        printf("ultimo\n");
            scanf(" %f", &num3);
        resultado = subtracao(num1, num2, num3);
        printf("Seu resultado = %f", resultado);

    }
    else if (resposta == 3){

        printf("Diga 2 numeros\n");
            scanf(" %f", &num1);
        printf("Mais um\n");
            scanf(" %f", &num2);
        resultado = divisao(num1,num2);
        printf("Seu resultado = %f", resultado);
    }
    else if (resposta == 4){
       
        printf("Diga 2\n");
            scanf(" %f", &num1);
        printf("Mais um\n");
            scanf(" %f", &num2);
        resultado = multiplicacao(num1,num2);
        printf("Seu resultado = %f", resultado);
    }
    else if (resposta == 5){
        exit(0);
    }

}

float soma(float num1, float num2, float num3){
   float result = 0;
   result = num1 + num2 + num3;
   return result;

}

float subtracao(float num1, float num2, float num3){
   float result = 0;
   result = num1 - num2 - num3;
   return result;

}
float divisao(float num1, float num2){
    float result = 0;
    result = num1 / num2;
    return result;

}
float multiplicacao(float num1, float num2){
    float result = 0;
    result = num1 * num2;
    return result;

}

