#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int num1;
    int a;
    int resto;
	char exa[10], octal[10];
	
	printf("Numero para converter para EXADECIMAL\n\n");
	printf("Numero = ");
	scanf("%i", &num1);
	
	
	do{
		a = num1 / 16;
		resto = num1 % 16;
		num1 /= 16;
		
		switch(resto){
			case 10:
				strcat(exa, "A");
			break;
			case 11:
				strcat(exa, "B");
			break;
			case 12:
				strcat(exa, "C");
			break;
			case 13:
				strcat(exa, "D");
			break;
			case 14:
				strcat(exa, "E");
			break;
			case 15:
				strcat(exa, "F");
			break;
			case 16:
				strcat(exa, "G");
			break;
			default:
				printf(octal, "%i", resto);
				strcat(exa, octal);
		}
	}while(a != 0);
	printf("%s", exa);
}