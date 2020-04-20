#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int ordem;
    int quan = 0;
    int array[quan];
    int numero;
    int box;

    printf("Ordem\n");
    printf("1- Crescente\n");
    printf("2-Decrescente\n");
    scanf(" %d", &ordem);

    printf("Quantos numeros quer introduzir\n");
    scanf(" %d", &quan);

    for (int i = 0; i < quan; i++)
    {
        printf("Diga um numero\n");
        scanf(" %d", &numero);
        array[i] = numero;
    }

    if (ordem == 1)
    {
        printf(" Crecente");
        for (int i = 0; i < quan; i++) {

            for (int u = 0; u < quan; u++) {

                if (array[u] > array[i]){

                    box = array[i];
                    array[i] = array[u];
                    array[u] = box;
                }
            }
        }
        for (int i = 0; i < quan; i++){
            printf(" %d", array[i]);
        }
    }
    else if (ordem == 2)
    {
        printf("Decrescente\n");
        for (int i = 0; i < quan; i++) {
            
            for (int u = 0; u < quan; u++){
                if (array[u] < array[i]){
                    
                    box = array[i];
                    array[i] = array[u];
                    array[u] = box;
                }
            }
        }
        for (int i = 0; i < quan; i++){
            printf(" %d", array[i]);
        }
    }
    
}