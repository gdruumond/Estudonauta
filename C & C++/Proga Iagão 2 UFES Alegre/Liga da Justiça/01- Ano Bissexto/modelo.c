// Iago Gravel do Nascimento
//
// Entradas para teste do programa: 1400; 2016; 2021

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int ano;

    printf("Digite um ano qualquer para verificar se é bissexto ou não: ");
    scanf("%i", &ano);

    if(ano%4==0 && ano%100!=0 || ano%400==0){
        printf("O ano %i é bissexto", ano);
    } else{
        printf("O ano %i não é bissexto", ano);
    }
}
