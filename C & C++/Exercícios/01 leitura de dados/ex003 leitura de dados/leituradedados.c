#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");

    char nome[30];
    int anos;
    float peso;

    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf("%d", &anos);
    printf("Qual é o seu peso? ");
    scanf("%f", &peso);
    printf("----->>>PROCESSANDO<<<-----\n");
    printf("Muito prazer, %s! Você tem %d anos e pesa %.1fKg", nome, anos, peso);
}
