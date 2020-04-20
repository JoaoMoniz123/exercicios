#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num1;
    int num2 = 12;
    int array[num2];
    int menor;
    int maior2 = 0;
    int maior;


    for (int i = 0; i < num2; i++){ 
         
        while (num1 > 20){
            printf("Diga um valor \n");
            scanf(" %d", &num1);
        }
        
        

        array[i] = num1; 
        if (num1 < menor){
            menor = num1;
        }
        
        else if (num1 > maior2){
            maior2 = num1;
        }
    }
    
   
   printf(" O maior = %d e o menor = %d", maior2, menor);
   return 0;
}