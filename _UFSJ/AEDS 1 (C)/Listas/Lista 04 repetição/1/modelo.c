#include<stdio.h>

void main(){
    int n1=0, n2=0, soma=0;

    printf("Numero 1: ");
    scanf("%d", &n1);
    printf("Numero 2: ");
    scanf("%d", &n2);

    for(int i = 1; i <= n1; i++)
            soma+=n2;

    printf("%d x %d = %d", n1, n2, soma);




}