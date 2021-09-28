#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(0, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int anohoje = data -> tm_year + 1900;
    int anonasc, idade;

    printf("Atualmente estamos no ano de %i.", anohoje);
    printf("\nEm que ano você nasceu? ");
    scanf("%i", &anonasc);

    idade = anohoje - anonasc;

    printf("Sua idade atual � de %i", idade);

    if(idade > 18){
        printf("\nVoc� j� completou 18 anos, ent�o ja deve ter se alistado");
    } else if(idade < 18){
        printf("\nVoc� ainda n�o completou 18 anos, ent�o, n�o precisa se alistar");
    } else{
        printf("\nVoc� completa 18 anos este ano, e precisa ir se alistar");
    }
}
