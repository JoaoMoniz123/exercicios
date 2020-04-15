#include<stdio.h>
#include<conio.h>

int main(void){

int num;
int i;
int j;
int k = 0;
int n;
int l = 0;


printf(" Introduza um numero para a piramide : ");
scanf("%d",&num);

for (i=1; i<= 9; i++){

	for (l = 1; l <= 9; l++){
		printf(" ");
	}

	for (j = 1; j <= i; j++){
		printf("%d",j);
	}

	for (k = j; k <= i; k--){
		printf("%d",(k-1));
	}
	sair:
	printf("\n");
	n--;

 }
}