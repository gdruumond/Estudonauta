#include<stdio.h>
#include<string.h>

int tamanho(char[]);
int contem(char[], char);
void main();

int tamanho(char s[]){
    if(s[0] == '\0') return 0;
    return 1 + tamanho(&s[1]);
    // &s[1] -> começa a analisar a partir do segundo elemento
}

int contem(char s[], char c){
    if(s[0] == '\0') return 0;
    if(s[0] == c) return 1;
    return contem(&s[1], c); 
    // &s[1] -> começa a analisar a partir do segundo elemento
}

void main(){
    char s[20], c;
    printf("Digite uma string: ");
    scanf(" %s", s);
    printf("Digite um caracter: ");
    scanf(" %c", &c);
    printf("Tamanho da string: %d", tamanho(s));
    printf("\nContem caracter \"%c\" na string: %s", c, contem(s,c) ? "Sim" : "Nao" );
}