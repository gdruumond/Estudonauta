#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int num;

    printf("Digite um n�mero que direi se ele � POSITIVO, NEGATIVO ou NULO:\n");
    scanf("%i", &num);

    printf("O valor %i � ", num);

    if(num > 0){
        printf("POSITIVO");
    } else if (num < 0){
        printf("NEGATIVO");
    } else{
        printf("NULO");
    }
}
