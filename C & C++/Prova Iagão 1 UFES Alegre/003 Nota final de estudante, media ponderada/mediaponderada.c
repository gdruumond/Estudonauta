#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    char conceito[2];
    float trabalho, avaliacao, exame, media;

    printf("Nota do trabalho:");
    scanf("%f", &trabalho);
    printf("Nota da avaliação:");
    scanf("%f", &avaliacao);
    printf("Nota do exame:");
    scanf("%f", &exame);

    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / (2 + 3 + 5);

    if (media >= 8){
        strcpy(conceito, "A");
    } else if (media >= 7 && media < 8){
        strcpy(conceito, "B");
    } else if (media >= 6 && media < 7){
        strcpy(conceito, "C");
    } else if (media >= 5 && media < 6){
        strcpy(conceito, "D");
    } else{
        strcpy(conceito, "E");
    }

    printf("Media do aluno: %f", media);
    printf("\nConceito do aluno: %s", conceito);
    getch();
    return 0;
}
