#include<stdio.h>
#include<string.h>

void novaString(char str[], int x){
    int nTam = strlen(str) - x;
    
    for(int i=0; i<nTam; i++)
        str[i] = str[i+x];
    str[nTam] = '\0';
}

void main(){
    char str[50];
    int num;

    printf("Digite uma string: ");
    scanf(" %s", str);
    printf("Digite um inteiro: ");
    scanf("%d", &num);
    novaString(str, num);
    printf("Nova string: %s", str);
}