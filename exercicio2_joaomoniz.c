#include <stdio.h>
#include <stdlib.h>

//parte da tabuada
int tabuada;
int resultado (tabuada){
   int multiplicacao = 0;
   int resfinal;
   
   //local onde vamos fazer a multiplicação
   while (multiplicacao<=10) {
      resfinal = tabuada * multiplicacao;
      printf("\n %d x %d = %d",tabuada,multiplicacao,resfinal);
      multiplicacao++;
   }
}

//aqui vou pedir a tabuada que quer, e apresentar o seu resultado.
int main (void) {
   printf("\nDigite um numero para ver a sua tabuada: ");
   scanf("%d", &tabuada);
   if (tabuada==0) printf ("Tem de ser apartir de 1");
   else resultado (tabuada);
   }