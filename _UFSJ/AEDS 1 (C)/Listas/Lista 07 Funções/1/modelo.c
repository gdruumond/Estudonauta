#include<stdio.h>

void imprimeResultado(int N, char c){
    for(; N>0; N--)
        printf("%c", c);
}


void main(){
    int N; 
    char c;

    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("Digite um caracter: ");
    scanf(" %c", &c);
    imprimeResultado(N, c);
}