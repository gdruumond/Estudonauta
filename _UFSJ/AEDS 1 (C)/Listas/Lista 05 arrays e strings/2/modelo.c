#include<stdio.h>
#include<string.h>

void main(){
    float num[10], maior, menor, soma;
    int c;

    // ENTRADA DE VALORES + CALCULOS
    for(c=0; c<10; c++){
        printf("Digite o %do valor: ", c+1);
        scanf("%f", &num[c]);

        soma += num[c];
        if(num[c] > maior || c==0) maior = num[c];
        if(num[c] < menor || c==0) menor = num[c];
    }

    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);
    printf("\nMedia: %.2f", soma/10);
}