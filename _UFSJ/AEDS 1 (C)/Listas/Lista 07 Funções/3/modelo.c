#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Crie uma função que recebe uma string e um caractere e retorna a posição do caractere se ele existir na string, ou -1 caso ele não exista na
string. 
Crie uma função que recebe duas strings e retorna 1 se a primeira for uma substring da segunda ou 0, caso contrário. Utilize a primeira
função para implementar a segunda. 
Crie um programa que solicite duas strings e verifica se a primeira é uma substring da segunda. */
#define MAXTAM 50

int buscaLetra(char *str, char caractere){ // Funcao para buscar a primeira aparicao da letra que o usuario quer
    int Id = -1;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == caractere){
            Id = i;
            break;
        }
    return Id;
}

char *cortaString(char *str, int tam){ // Funcao para truncar a string, ignorando a parte que ja foi testada de substring
    int k = 0;
    char *strCortada;
    strCortada = (char*)calloc(MAXTAM,sizeof(char));
    for (int i = tam; i < strlen(str); i++){
        strCortada[k] = str[i];
        k++;
    }
    return strCortada;
}

int verifica(char *str1, char *str2){
/* Crie uma função que recebe duas strings e retorna 1 se a primeira for uma substring da segunda ou 0, caso contrário. Utilize a primeira
função para implementar a segunda. */
    int IdCorrente, IdPassado, k = 0, retorno = -1, cortes = 0;;
    char *strCortada, *aux;
    strCortada = (char*)calloc(MAXTAM,sizeof(char));
    aux = (char*)calloc(MAXTAM,sizeof(char));

    if (strlen(str1) < strlen(str2)){
        aux = str2;
        str2 = str1;
        str1 = aux;
    }

    strcpy(strCortada,str1); // String sera modificada, precisa ser armazenada
    IdCorrente = buscaLetra(strCortada,str2[k]);
    k++;
    IdPassado = IdCorrente;
    for (int i = IdCorrente; i < strlen(str1); i++){
        IdCorrente = buscaLetra(strCortada,str2[k]);
        if ((IdCorrente-1) == IdPassado){  // Se ocorrer o match entre as strings, a diferenca indica uma diferenca de uma letra
            k++;
            IdPassado = IdCorrente;
        }else{ // Caso nao ocorra o match, e a proxima letra esteja distante, ou seja, nao tem casamento
            cortes += IdCorrente - k;
            strCortada = cortaString(str1,cortes); // corta a parte da string ja testada
            k = 0;
            IdCorrente = buscaLetra(strCortada,str2[k]); // busca o Id, dentro da nova string cortada, qual e o valor dele
            k++;
            IdPassado = IdCorrente;
        }
        if (k == strlen(str2)-2){ // Caso encontre que a string menor é substring da string maior
            retorno = 1;
            printf ("\n\nValor de retorno: %i.\n\n",retorno);
            break;
        }
    }
    return retorno;
}

int substring(char *str1, char *str2){ // Crie um programa que solicite duas strings e verifica se a primeira é uma substring da segunda.
    int i, k = 0, verifica = 0, diferenca1 = 0, diferenca2 = 0, teste = 1, retorno = -1;
    char *aux;
    aux = (char*)calloc(MAXTAM,sizeof(char));

    if (strlen(str2) > strlen(str1)){
        aux = str2;
        str2 = str1;
        str1 = aux;
    }

    for (i = 0; i < strlen(str1); i++){
        diferenca1 = i - verifica;
        if (str1[i] == str2[k]){ // se as letras forem iguais na posicao i da string maior e k da string menor
            k++;
            verifica++;
        }
        diferenca2 = i - verifica;
        if (k == strlen(str2)-1){ // Caso encontre que a string menor e substring da string maior
            printf ("\nString:\n%sPresente na String:\n%s\n",str2,str1);
            retorno = 0;
            break;
        }
        if (diferenca1 == diferenca2) // Se verificou e nao deu diferenca, aqui vai dar diferenca por causa da variavel verifica, que e incrementada nos matchs
            k = verifica = 0;
    }

    if ( retorno == -1) 
        printf ("\nAs strings não sao substrings uma da outra.\n\n");
    return retorno;
}

int main(){
    int Id;
    char *str1, *str2, caractere;

    printf("____________ PARTE 1 DO PROGRAMA _________________\n\n");
    printf ("Digite um caractere: ");
    scanf("%c",&caractere);

    str1 = (char*)calloc(MAXTAM,sizeof(char)); // Inicializa a string e zera os valores
    printf ("Digite uma frase ou palavra: ");
    scanf(" "); // Limpa o buffer de entrada (stdin)
    fgets(str1,MAXTAM,stdin); // Le uma string

    printf("\nValor de retorno: %d", buscaLetra(str1,caractere));

    printf("\n____________ PARTE 2 DO PROGRAMA _________________\n\n");
    str1 = (char*)calloc(MAXTAM,sizeof(char));
    str2 = (char*)calloc(MAXTAM,sizeof(char));
    printf ("Digite uma frase ou palavra: ");
    fgets(str1,MAXTAM,stdin);
    printf ("\nDigite outra frase ou palavra: ");
    fgets(str2,MAXTAM,stdin);

    printf("\nValor de retorno: %d", verifica(str1, str2));

    printf("\n____________ PARTE 3 DO PROGRAMA _________________\n\n");
    str1 = (char*)calloc(MAXTAM,sizeof(char));
    str2 = (char*)calloc(MAXTAM,sizeof(char));
    printf ("Digite a primeira string: ");
    fgets(str1, MAXTAM, stdin);
    printf ("\nDigite a segunda string: ");
    fgets(str2, MAXTAM, stdin);

    substring(str1,str2);
}