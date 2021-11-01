#include<stdio.h>

void main(){
    
    int n, soma;

    printf("Vou calcular a soma de todos os números entre 1 e o numero: ");
    scanf("%d", &n);

    soma = n * (n+1) / 2;

    printf("Resultado: %d", soma);
}