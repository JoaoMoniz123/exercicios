#include <stdio.h>

float tempo(float distancia, float velocidade);
float velo (float distancia, float tempo);
float dis(float velocidade, float tempo);

int main(){
    int resposta;
    float n1;
    float n2;
    float result;



    printf("-------------Menu-------------\n");
    printf("1-Calcular Tempo\n");
    printf("2-Velocidade\n");
    printf("3-Distancia\n");
    scanf(" %d", &resposta);

    if (resposta == 1)
    {
        printf("Diga a distancia \n");
        scanf(" %f", &n1);
        printf("Diga a velocidade media  \n");
        scanf(" %f", &n2);
        result = tempo(n1, n2);
        printf("Reusltado %f", result);

    }
    else if (resposta == 2)
    {
        printf("Diga a distancia \n");
        scanf(" %f", &n1);
        printf("Diga o tempo \n");
        scanf(" %f", &n2);
        result = velo(n1, n2);
        printf("Reusltado %f", result);
    }
    else if (resposta == 3)
    {
        printf("Diga a velocidade \n");
        scanf(" %f", &n1);
        printf("Diga o tempo \n");
        scanf(" %f", &n2);
        result = dis(n1, n2);
        printf("Reusltado %f", result);
    }
    

}

float tempo(float dis, float velo){
    float result;
    result = dis / velo;
    return result;
}
float velo (float dis, float tempo){
    float result;
    result = dis / tempo;
    return result;
}
float dis(float velo, float tempo){
    float result;
    result = velo * tempo;
    return result;
}
