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

    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%i", &anonasc);
    int idade = anohoje - anonasc;

    printf("Voc� tem %i anos, correto?\nSeja bem vindo ao Meu Banco!", idade);

    if (idade >= 60){
        printf("\n===ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL===");
    }
}
