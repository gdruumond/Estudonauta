#include<stdio.h>

void imprimeResultado(int N, char c){
    while(N-->0) printf("%c", c);
}

void main(){
    int N; 
    char c;

    printf("Digite um numero, e em seguida, um caracter: ");
    scanf("%d %c", &N, &c);
    imprimeResultado(N, c);
}