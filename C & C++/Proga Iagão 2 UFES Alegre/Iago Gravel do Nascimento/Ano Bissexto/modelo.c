// Iago Gravel do Nascimento
//
// Entradas para teste do programa: 1400; 2016; 2021

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int ano;

    printf("Digite um ano qualquer para verificar se � bissexto ou n�o: ");
    scanf("%i", &ano);

    if(ano%4==0 && ano%100!=0 || ano%400==0){
        printf("O ano %i � bissexto", ano);
    } else{
        printf("O ano %i n�o � bissexto", ano);
    }
}
