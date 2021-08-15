#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(0, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int horaagora = data->tm_hour;
    int horafilm = 19;
    int ingresso = 20;
    int din;


    printf("\n=============== CINEMA ===============");
    printf("\nHORÁRIO DO FILME: %ih - INGRESSO: R$%i", horafilm, ingresso);
    printf("\n--------------------------------------");
    printf("\nQuanto dinheiro você tem? R$");
    scanf("%i", &din);
    printf("\nAgora são %i horas", horaagora);

    if(horaagora > horafilm || din < ingresso){
        printf("\nVocê não consegue comprar o ingresso!");
    } else{
        printf("\nVocê consegue comprar o ingresso!");
    }
}
