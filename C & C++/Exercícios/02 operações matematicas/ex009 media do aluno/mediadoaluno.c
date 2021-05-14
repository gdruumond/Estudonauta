#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    char nome[30];
    float n1, n2;

    printf("Nome do aluno: ");
    gets(nome);
    printf("1º Nota: ");
    scanf("%f", &n1);
    printf("2º Nota: ");
    scanf("%f", &n2);

    printf("A média de notas (%.2f e %.2f) do %s é de %.2f", n1, n2, nome, (n1+n2)/2);
}
