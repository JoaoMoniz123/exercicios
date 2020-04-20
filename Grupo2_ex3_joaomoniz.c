#include <stdio.h>
#include int conta(void);

int valor;
int array[1000];
char operador;
int sum = 0;
int multi = 1;
int sub = 0;
int divi = 1;
int check = 2;
char check1;

int main(void)
{


printf("Qual do seguintes operadores vai querer usar (+,-,*,/)\n");
scanf(" %c", &operador);

for (int i = 0; i < 2; i++){
printf("Diga numemos \n");
scanf(" %d", &valor);
array[i] = valor;

if (operador == '+'){
    sum = sum + valor;
}

else if (operador == '-')  {
    sum = sum - valor;
}

else if (operador == '*'){
    sum = sum * valor;
}

else if (operador == '/'){
    sum  = sum/ valor;
}
}

printf("Quer parar ? (S = 1 || N = 2)\n");
scanf(" %d", &check);

if (check == 1){

}
else if (check == 2){


for (int i = 0; i < 1000; i++){


printf("Diga numemos \n");
scanf(" %d", &valor);
array[i] = valor;

if (operador == '+'){
    sum = sum + valor;
}

else if (operador == '-'){
    sum = sum - valor;
}

else if (operador == '*'){
    sum = sum * valor;
}

else if (operador == '/'){
    sum = sum / valor;
}

printf("Quer parar ? press q");
scanf(" %c", &check1);

if (check1 == 'q'){
    conta();
}

}


}


}

int conta(void){
printf(" %d", sum);
exit(0);
}
