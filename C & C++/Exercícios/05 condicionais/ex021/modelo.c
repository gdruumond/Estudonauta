#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if (num>0){
        float inverso = 1/(float)num;
        printf("O inverso de %i é %.2f", num, inverso);
    } else{
        printf("O oposto de %i é %i", num, num*-1);
    }
}
