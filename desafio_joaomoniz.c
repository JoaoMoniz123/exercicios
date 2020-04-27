#include <stdlib.h>
#include <stdio.h>

 int escolha1;
 int escolha2, res;

//primeira funcao
int f(int escolha1, int escolha2);

int main(void){
char choice;

printf("Vamos comecar programa?\n 1) Iniciar.\n N) Sair.\n");
scanf(" %c", &choice);

switch(choice){
case '1':
printf("Insira um numero:\n->");
scanf("%d", &escolha1);
printf("Insira um numero:\n->");
scanf("%d", &escolha2);

//primeira funcao
f(escolha1, escolha2);
printf("\n %d + %d = %d", escolha1, escolha2, res);
break;

case '2':
exit(1);
break;
}

}


int f(int escolha1, int escolha2){
//Só serve para calcular dois numeros.
res = (escolha1 + escolha2);
return res;
}