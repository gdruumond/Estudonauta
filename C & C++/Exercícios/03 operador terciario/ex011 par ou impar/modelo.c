#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);
    printf("O número digitado é %s", (num%2==0)?"par":"ímpar");
}
