#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um n�mero: ");
    scanf("%i", &num);

    if (num>0){
        float inverso = 1/(float)num;
        printf("O inverso de %i � %.2f", num, inverso);
    } else{
        printf("O oposto de %i � %i", num, num*-1);
    }
}
