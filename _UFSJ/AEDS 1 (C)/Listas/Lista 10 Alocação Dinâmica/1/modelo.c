#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(){
    int tam;
    char *str;

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    str = (char*) calloc(tam, sizeof(char));

    printf("Digite uma string: ");
    scanf(" ");
    fgets(str, tam, stdin);
    
    printf("String digitada: \n%s\n\n", str);
}
