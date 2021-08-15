#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(0, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int anonasc, anohoje = data -> tm_year + 1900;

    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%i", &anonasc);
    int idade = anohoje - anonasc;

    printf("Você tem %i anos, correto?\nSeja bem vindo ao Meu Banco!", idade);

    if (idade >= 60){
        printf("\n===ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL===");
    }
}
