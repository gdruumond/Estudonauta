#include <stdio.h>
#include <locale.h>

main(){
    setlocale(0, "Portuguese");

    int contador=0, somapar=0, subimpar=0, numero;

    for(contador = 1; contador <= 4; contador++){

        printf("Digite um n�mero inteiro: ");
        scanf("%d", &numero);

        if(numero%2==0){
            somapar += numero;
        } else{
            subimpar -= numero;
        }
    }

    printf("\nA soma dos n�meros pares � %d", somapar);
    printf("\nA subtra��o dos n�meros impares � %d", subimpar);
    printf("\n\n\n\n\n");

    getch();
    return 0;
}

