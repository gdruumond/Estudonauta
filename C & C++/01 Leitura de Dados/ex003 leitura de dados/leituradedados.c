#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");

    char nome[30];
    int anos;
    float peso;

    printf("Qual � o seu nome? ");
    gets(nome);
    printf("Quantos anos voc� tem? ");
    scanf("%d", &anos);
    printf("Qual � o seu peso? ");
    scanf("%f", &peso);
    printf("----->>>PROCESSANDO<<<-----\n");
    printf("Muito prazer, %s! Voc� tem %d anos e pesa %.1fKg", nome, anos, peso);
}
