#include<stdio.h>
#include<string.h>

void main(){
    char frase[50];
    int palindromo = 1, tamanho;

    printf("Frase: ");
    gets(frase);
    tamanho = strlen(frase) - 1;

    for(int i=0; i<tamanho; i++)
        if(frase[i] != frase[tamanho - i])
            palindromo = 0;

    if(palindromo)
        printf("eh polindromo");
    else
        printf("nao eh polindromo");
}