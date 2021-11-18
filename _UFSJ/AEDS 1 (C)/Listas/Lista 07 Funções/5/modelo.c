#include<stdio.h>
#include<string.h>

/* 
0123456
palavra

23456
lavra
01234 

use a palavra: "palavra" como input
teste substituir: nTam por 5 e x por 2
verá que vai dar certo

entretanto, se tu voltar à usar as variáveis com nome de variáveis, vai ver que não vai dar certo.

na linha 24 do programa tem o >> printf("%d", nTam); << veja que vai dar um número muito doido como output, sendo que, se você tirar o x do >> int nTam = strlen(str)-x; << vai dar o número condizente, logo, me leva a crer que o erro - ou bug - do programa está na passagem de variável do tipo inteiro de uma função para outra

outra coisa, note que eu coloquei dois printf de TESTE >> printf("Teste2") e printf("Teste3") << no programa, porém ao executar o programa não tá saindo esses printf... '-'
*/ 

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