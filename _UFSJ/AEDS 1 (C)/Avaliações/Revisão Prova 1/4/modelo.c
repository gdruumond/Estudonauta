#include<stdio.h>

void main(){
    int linhas, c, i, soma = 0, coluna;

    printf("Numero de linhas: ");
    scanf("%d", &linhas);

    for(c = 1; c <= linhas; c++){
        for(coluna = 1; coluna <= c; coluna++){
            printf(" %d ", ++soma);
        }
        printf("\n");
    }   
}