#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um n�mero: ");
    scanf("%i", &num);
    printf("O dobro de %i � %i, e a ter�a parte � %.2f", num, num*2, (float)num/3);
}
