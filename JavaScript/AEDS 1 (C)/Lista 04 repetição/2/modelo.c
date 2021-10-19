#include<stdio.h>

void main(){
    int n=1, media=0, soma=0, i=0;

    while(n!=0){
        i++;

        printf("Numero: ");
        scanf("%d",&n);

        soma += n;
    }

    media = soma / (i-1);

    printf("Media dos numeros: %d", media);
}