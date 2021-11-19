#include<stdio.h>
#include<string.h>

int tamanho(char s[]){
    if(s[0] == '\0') return 0;
    return 1 + tamanho(&s[1]);
    // &s[1] -> começa a analisar a partir do segundo elemento
}

void inverte(char s[], int i, int f){
    if(i >= f) return;
    char aux = s[i];
    s[i] = s[f];
    s[f] = aux;
    inverte(s, i+1, f-1);
}

void main(){
    char s[20];
    printf("Digite uma string: ");
    scanf(" %s", s);
    inverte(s, 0, tamanho(s)-1);
    printf("%s", s);
}