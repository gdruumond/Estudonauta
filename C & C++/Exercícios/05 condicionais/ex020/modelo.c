#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int distancia, valorT;

    printf("\n=========TABELA DE PREÇOS===========");
    printf("\nViagens até 200km\t R$0,50 /Km");
    printf("\nA partir de 200km\t R$0,35 /Km");
    printf("\n====================================");
    printf("\nDistância total da viagem, em Km: ");
    scanf("%i", &distancia);

    if(distancia >= 200){
        float valor = distancia * 0.5;
        printf("Uma viagem de %iKm vai custar R$0,35 /Km\nValor total: R$%.2f", distancia, valor);
    } else{
        float valor = distancia * 0.35;
        printf("Uma viagem de %iKm vai custar R$0,50 /Km\nValor total: R$%.2f", distancia, valor);
    }
}
