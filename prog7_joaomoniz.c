#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void Valores(void);

int array1[3][3];
int array2[3][3];


int main() {

int num;


    Valores();      

    printf("\n< 1 > Somar matrizes\n");
    printf("< 2 > Subtrair a primeira matriz com a segunda matriz\n");

    while (!num || num < 1 || num > 2) {
      printf("\nInsira uma opcao valida!\n ");
      scanf(" %d", &num);
    }
    
    if (num == 1) {

        printf("Soma das 2 matrizes: \n");

        for (int i = 0; i < 3; i++) {
            for (int k = 0; k < 3; k++) {

                array1[i][k] = array1[i][k] + array2[i][k];
                printf(" %d \n", array1[i][k]);
            }
        }

    } else {

        printf("Subtracao das 2 matrizes: \n\n");;

            
        for (int i = 0; i < 3; i++) {
            for (int k = 0; k < 3; k++) {

                array1[i][k] = array1[i][k] - array2[i][k];
                printf("%d ", array1[i][k]);
            }
        printf("\n");
        }
    }
}




void Valores(void) {

int random;
int total;

 
    srand(time(NULL));
                                               
        for (int i = 0; i < 3; i++) {
            for (int u = 0; u < 3; u++) {
                random = rand() % 9;
                array1[i][u] = random;
                printf("%d ", array1[i][u]);
            }
           
        }
        
                                                

        for (int i = 0; i < 3; i++) {
            for (int k = 0; k < 3; k++) {

                random = rand() % 9;
                array2[i][k] = random;
                printf(" %d \n", array2[i][k]);
            }
           
        }
    

}

