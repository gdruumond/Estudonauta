#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int n1, n2;

    printf("Primeira nota: ");
    scanf("%i", &n1);
    printf("Segunda nota: ");
    scanf("%i", &n2);

    float media = (float)(n1+n2)/2;

    printf("A média do aluno foi %.2f\nSua situação é %s", media, (media>=7)?"APROVADO":"REPROVADO");
}
