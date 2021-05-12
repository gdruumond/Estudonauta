#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);
    printf("O dobro de %i é %i, e a terça parte é %.2f", num, num*2, (float)num/3);
}
