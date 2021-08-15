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
    printf("\nHOR�RIO DO FILME: %ih - INGRESSO: R$%i", horafilm, ingresso);
    printf("\n--------------------------------------");
    printf("\nQuanto dinheiro voc� tem? R$");
    scanf("%i", &din);
    printf("\nAgora s�o %i horas", horaagora);

    if(horaagora > horafilm || din < ingresso){
        printf("\nVoc� n�o consegue comprar o ingresso!");
    } else{
        printf("\nVoc� consegue comprar o ingresso!");
    }
}
