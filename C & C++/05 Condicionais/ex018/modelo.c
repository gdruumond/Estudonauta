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

    printf("Sua idade atual é de %i", idade);

    if(idade >= 18){
        printf("\nVocê já completou 18 anos, então ja deve ter se alistado");
    } else{
        printf("\nVocê ainda não completou 18 anos, então, não precisa se alistar");
    }
}
