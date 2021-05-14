#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int num, deslo;

    printf("\nDigite um número: ");
    scanf("%i", &num);
    printf("\nDigite o deslocamento: ");
    scanf("%i", &deslo);

    printf("\n----OPERAÇÕES SHIFT----");
    printf("\nCalculando %i >> %i = %i", num, deslo, num >> deslo);
    printf("\nCalculando %i << %i = %i", num, deslo, num << deslo);
}
