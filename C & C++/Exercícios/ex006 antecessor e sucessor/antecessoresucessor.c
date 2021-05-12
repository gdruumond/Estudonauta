#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);
    printf("O antecessor de %i é %i, e o sucessor é %i", num, num-1, num+1);
}
