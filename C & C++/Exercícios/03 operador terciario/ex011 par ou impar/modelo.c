#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um n�mero: ");
    scanf("%i", &num);
    printf("O n�mero digitado � %s", (num%2==0)?"par":"�mpar");
}
