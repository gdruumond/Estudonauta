#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Crie uma função que recebe uma string e um caractere e retorna a posição
do caractere se ele existir na string, ou -1 caso ele não exista na
string. 
Crie uma função que recebe duas strings e retorna 1 se a primeira
for uma substring da segunda ou 0, caso contrário. Utilize a primeira
função para implementar a segunda. 
Crie um programa que solicite duas strings e verifica se a primeira é uma substring da segunda.
*/
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
    char *strCortada;
    strCortada = (char*)calloc(MAXTAM,sizeof(char));
    if (strlen(str1) > strlen(str2)){ // String1 maior que string2
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
            if (k == strlen(str2)-2){ // Caso encontre que a string menor e substring da string maior
                retorno = 0;
                printf ("\n\nEntro aqui e finalizo a funcao de verificao de substrings. Valor de retorno: %i.\n\n",retorno);
                break;
            }
        }
    }else{// String2 maior que string1 (Mesmo codigo e comentarios da parte de cima, so muda as comparacoes das strings)
        strcpy(strCortada,str2);
        IdCorrente = buscaLetra(strCortada,str1[k]);
        k++;
        IdPassado = IdCorrente;
        for (int i = IdCorrente; i < strlen(str2); i++){
            IdCorrente = buscaLetra(strCortada,str1[k]);
            if ((IdCorrente-1) == IdPassado){ 
                k++;
                IdPassado = IdCorrente;
            }else{
                cortes += IdCorrente - k;
                strCortada = cortaString(str2,cortes);
                k = 0;
                IdCorrente = buscaLetra(strCortada,str1[k]);
                k++;
                IdPassado = IdCorrente;
            }
            if (k == strlen(str1)-2){
                retorno = 1;
                printf ("\n\nEntro aqui e finalizo a funcao de verificao de substrings. Valor de retorno: %i.\n\n",retorno);
                break; // finaliza o loop
            }
        }
    }
    return retorno;
}


int substring(char *str1, char *str2){ // Crie um programa que solicite duas strings e verifica se a primeira é uma substring da segunda.
    int i, k = 0, verifica = 0, diferenca1 = 0, diferenca2 = 0, teste = 1, retorno = -1;

    if (strlen(str1) < strlen(str2))
        teste = 0;

    if (teste){ // String1 maior que a string2
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
                break; // finaliza o loop
            }
            if (diferenca1 == diferenca2){ // Se verificou e nao deu diferenca, aqui vai dar diferenca por causa da variavel verifica, que e incrementada nos matchs
                k = 0;
                verifica = 0;
            }
        }

    }else{ // String2 maior que string1 (Mesmo codigo e comentarios da parte de cima, so muda as comparacoes das strings)
        for (i = 0; i < strlen(str2); i++){
            diferenca1 = i - verifica;
            if (str2[i] == str1[k]){ 
                k++;
                verifica++;
            }
            diferenca2 = i - verifica;
            if (k == strlen(str1)-1){ 
                printf ("\nString:\n%sPresente na String:\n%s\n",str1,str2);
                retorno = 1;
                break;
            }
            if (diferenca1 == diferenca2){ 
                k = 0;
                verifica = 0;
            }
        }
    }
    return retorno;
}


int main(){
    int Id, retorno;
    char *str1, *str2, caractere;

    printf("______________ PARTE 1 DO PROGRAMA ___________________\n\n");
    printf ("Digite um caractere: ");
    scanf("%c",&caractere);

    str1 = (char*)calloc(MAXTAM,sizeof(char)); // Inicializa a string e zera os valores
    printf ("Digite uma frase ou palavra: ");
    setbuf(stdin,NULL); // Limpa o buffer de entrada (stdin)
    fgets(str1,MAXTAM,stdin); // Le uma string

    Id = buscaLetra(str1,caractere);
    if (Id != -1)
        printf ("\nO caractere \"%c\" esta na posicao %i da palavra: %s",caractere,Id,str1);
    else
        printf ("\nO caractere nao esta na palavra.\n");

    printf("\n______________ PARTE 2 DO PROGRAMA ___________________\n\n");
    str1 = (char*)calloc(MAXTAM,sizeof(char));
    str2 = (char*)calloc(MAXTAM,sizeof(char));
    printf ("Digite uma frase ou palavra: ");
    setbuf(stdin,NULL);
    fgets(str1,MAXTAM,stdin);

    printf ("\nDigite outra frase ou palavra: ");
    setbuf(stdin,NULL);
    fgets(str2,MAXTAM,stdin);

    retorno = verifica(str1, str2);
    if (retorno == -1) printf ("\nUma string não é substring da outra!\n");

    printf("\n______________ PARTE 3 DO PROGRAMA ___________________\n\n");
    str1 = (char*)calloc(MAXTAM,sizeof(char));
    str2 = (char*)calloc(MAXTAM,sizeof(char));
    printf ("Digite a primeira string: ");
    setbuf(stdin,NULL);
    fgets(str1, MAXTAM, stdin);
    printf ("\n");
    printf ("Digite a segunda string: ");
    setbuf(stdin,NULL);
    fgets(str2, MAXTAM, stdin);

    retorno = substring(str1,str2);
    if (retorno == -1) printf ("As strings não sao substrings uma da outra.\n");
}