#include <stdio.h>
#include <string.h>

int mostrar(void);
void decimalRomano(int input);
void romanoDecimal(char input[30]);


int main() {

int opcao, input;
char inputC[30];


opcao = mostrar();

switch(opcao) {
    case 1:

        printf("Insira o valor decimal: ");
        scanf("%d", &input);

        decimalRomano(input);
        break;
    case 2:
        printf("\nInsira o valor em romano: ");
        scanf("%s", inputC);            

        romanoDecimal(inputC);
        break;
    case 3:
        printf("\nSair\n\n");
        break;
}


return 0;
}


int mostrar(void) {

int opcao = -1;

printf(R"EOF(
1- Decimal----- Romano
2- Romano------ Decimal
3- Sair

)EOF");

while (!opcao || opcao < 1 || opcao > 3) {

    if (opcao == -1) {
        printf("Escolha uma das opcoes:\n");
        scanf("%d", &opcao);
    } else {

    printf("Menu errado! Tente novamente:\n");
    scanf("%d", &opcao);

    }
}

return opcao;
}



void decimalRomano(int input) {

char output[40] ="";

for (int i = 0; input > 0; ++i) {

    if (input >= 1000) {
        strcat(output, "M");
        input -= 1000;
    } else if (input >= 900) {
        strcat(output, "CM");
        input -= 900;
    } else if (input >= 500) {
        strcat(output, "D");
        input -= 500;
    } else if (input >= 400) {
        strcat(output, "CD");
        input -= 400;
    } else if (input >= 100) {
        strcat(output, "C");
        input -= 100;
    } else if (input >= 90) {
        strcat(output, "XC");
        input -= 90;
    } else if (input >= 50) {
        strcat(output, "L");
        input -= 50;
    } else if (input >= 40) {
        strcat(output, "XL");
        input -= 40;
    } else if (input >= 10) {
        strcat(output, "X");
        input -= 10;
    } else if (input >= 9) {
        strcat(output, "IX");
        input -= 9;
    } else if (input >= 5) {
        strcat(output, "V");
        input -= 5;
    } else if (input >= 4) {
        strcat(output, "IV");
        input -= 4;
    } else if (input >= 1) {
        strcat(output, "I");
        input -= 1;
    }
 }

printf(" %s\n", output);

}



void romanoDecimal(char input[30]) {

int output = 0;


for (int i = 0; i < strlen(input); i++) {

    if (input[i] == 'M' || input[i] == 'm') {
        output += 1000;
    } else if (input[i] == 'D' || input[i] == 'd') {
        output += 500;
    } else if (input[i] == 'C' || input[i] == 'c') {
        output += 100;
    } else if (input[i] == 'X' && input[i+1] == 'C' || input[i] == 'x' && input[i+1] == 'c') {
        output += 90;
        i++;
    } else if (input[i] == 'L' || input[i] == 'l') {
        output += 50;
    } else if (input[i] == 'X' || input[i] == 'x') {
        output += 10;
    } else if (input[i] == 'I' && input[i+1] == 'X' || input[i] == 'i' && input[i+1] == 'x') {
        output += 9;
        i++;
    } else if (input[i] == 'V' || input[i] == 'v') {
        output += 5;
    } else if (input[i] == 'I' || input[i] == 'i') {
        output += 1;
    }
 }

printf(" %d\n", output);

}