#include<stdio.h>

void main(){
    int n1 = 0, n2 = 0, mmc = 1, numPrimo = 2, dividiu = 1, primo = 0;

    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &n1, &n2);

    while(n1 > 1 || n2 > 1){
        printf("\n%d %d | %d", n1, n2, numPrimo);

        dividiu = 0;

        if(n1 % numPrimo == 0){
            n1 /= numPrimo;
            dividiu = 1;
        }

        if(n2 % numPrimo == 0){
            n2 /= numPrimo;
            dividiu = 1;
        }

        if(dividiu)
            mmc *= numPrimo;
        else
            numPrimo++;
    }

    printf("\n\nMMC = %d", mmc);
}