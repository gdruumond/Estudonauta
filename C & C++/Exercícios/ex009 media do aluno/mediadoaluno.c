#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    char nome[30];
    float n1, n2;

    printf("Nome do aluno: ");
    gets(nome);
    printf("1� Nota: ");
    scanf("%f", &n1);
    printf("2� Nota: ");
    scanf("%f", &n2);

    printf("A m�dia de notas do %s � de %.2f", nome, (n1+n2)/2);
}
