#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um n�mero: ");
    scanf("%i", &num);
    printf("O antecessor de %i � %i, e o sucessor � %i", num, num-1, num+1);
}
