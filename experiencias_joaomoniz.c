#include <stdio.h>
#include <stdlib.h>

menu_Servicos(void);
menu_Servicos2(void);
menu(void);
calculos(void);
int menu2;
int menu3;
int transfer_ida = 50;
int transfer_volta = 75;
int alojamento = 75;   // por noite
int aluguer_Auto = 25; // dia


int safari = 250;
int visita_grutas = 75;
//dia completo
int passeio_barco = 150; 
int whale_watching = 55;
// primeiro menu
int menu1;
// saber quantidade de pessoas porque se passar de 6 aplica-se desconto
int pessoas;
//saber quantos dias irá ficar para calcular o aluguer do carro e alojamento
int dias;
 // verificar se a pessoa quer um guia ou nao para aplicar desconto necessario
int guia;
//utilizador defenir se quer um tansfer so de ida, de volta, ou entao os dois
int ida_Volta;
// quantidade que a pessoa vai escolher para aplicar os descontos
int i;
int calculo = 0;
int percentagem = 0;
int resultado_final = 0;

int main(void){
    
    //perguntas ao utilizador
    printf("Quantas pessoas ?\n");
    scanf(" %d", &pessoas);
    printf("Deseja ter um guia ?\n");
    printf("1- Sim\n");
    printf("2- Nao\n");
    scanf(" %d", &guia);
    printf("Quantos dias vai ficar?\n");
    scanf(" %d", &dias);
    menu();
}
int menu_Servicos(void){
    
    //comercar com as escolhas
    while (menu2 != 4)
    {
        printf("-----------Servicos--------------\n");
        printf("1- Transfer\n");
        printf("2- Alojamento \n");
        printf("3- Aluguer de carros\n");
        printf("4- Finalizar escolhas neste menu\n");
        scanf(" %d", &menu2);

        if (menu2 == 1){
            
            printf("1- Ida?\n");
            printf("2- Volta?\n");
            printf("3- Ida e volta ?\n");
            scanf(" %d", &ida_Volta);
            i++;

            if (ida_Volta == 1){
                calculo = calculo + transfer_ida;
            }
            
            else if (ida_Volta == 2){
                calculo = calculo + (transfer_volta);
            }
            
            else if (ida_Volta == 3){
                calculo = calculo + (transfer_volta + transfer_ida);
            }
        }
        else if (menu2 == 2){
            i++;
            calculo = calculo + (dias * alojamento);
        }
        
        else if (menu2 == 3){
            i++;
            calculo = calculo + (dias * aluguer_Auto);
        }
    }
    menu();
}
int menu_Servicos2(void){

    while (menu3 != 5){
        printf("-----------Experiencias--------------\n");
        printf("1- Safari\n");
        printf("2- Visitas às grutas\n");
        printf("3- Passeio de barco\n");
        printf("4- Whale Whatching\n");
        printf("5- Finalizar compras neste menu\n");
        scanf(" %d", &menu3);

        if (menu3 == 1){
            i++;
            calculo = calculo + safari;
        }
        
        else if (menu3 == 2){
            i++;
            calculo = calculo + visita_grutas;
        }
        
        else if (menu3 == 3){
            i++;
            calculo = calculo + passeio_barco;
            printf("Test1\n");
        }
        
        else if (menu3 == 4){
            i++;
            calculo = calculo + whale_watching;
        }
    }
    printf("Test2\n");
    menu();
}

int menu(void){

    printf("-----------Menu--------------\n");
    printf("1- Servicos\n");
    printf("2- Experiencias\n");
    printf("3- Finalizar\n");
    scanf(" %d", &menu1);

    if (menu1 == 1){
        menuServicos();
    }
    
    else if (menu1 == 2){
        menuServicos2();
    }
    
    else if (menu1 == 3){
        calculos();
    }
}
int calculos(void){

    printf("teste %d\n", calculo);
    if (guia == 1){

        if (i >= 2 || i < 4){

            percentagem = calculo * 0.25;
            resultado_final = calculo;
            printf(" percentagem %d\n", percentagem);
            resultado_final = resultado_final - percentagem;
            printf("teste %d", resultado_final);

            if (pessoas >= 6){
                percentagem = calculo * 0.45;
                resultado_final = resultado_final - percentagem;
            }
        }
        
        else if (i >= 4){
            percentagem = calculo * 0.50;
            resultado_final = calculo - percentagem;
            
            if (pessoas >= 6){
                percentagem = resultado_final * 0.45;
                resultado_final = resultado_final - percentagem;
            }
        }
    }
    else if (guia == 2){
        percentagem = calculo * 0.15;
        resultado_final = calculo;
        resultado_final = calculo - percentagem;

        if (i >= 2 || i < 4){
            percentagem = calculo * 0.25;
            resultado_final = resultado_final - percentagem;

            if (pessoas >= 6){
                percentagem = calculo * 0.45;
                resultado_final = resultado_final - percentagem;
            }
        }
        
        else if (i >= 4){
            percentagem = calculo * 0.50;
            resultado_final = calculo - percentagem;
            
            if (pessoas >= 6){
                percentagem = resultado_final * 0.45;
                resultado_final = resultado_final - percentagem;
            }
        }
    }
    //resultado final
    printf("O Total a pagar fica %d", resultado_final);
}
