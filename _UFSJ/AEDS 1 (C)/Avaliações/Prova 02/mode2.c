// Gabriel Augusto Drumond Soares

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXTAM 40

// 01.
typedef struct{
    char *linha[50];
    int qlinhas;
} Texto;

// 02.
void scvLinha(Texto *texto){
    if(texto->qlinhas >= 50){
        printf("\n\t>> Texto cheio <<\n\n");
        return;
    } else{
        texto->linha[texto->qlinhas] = (char*) calloc(MAXTAM, sizeof(char));

        printf("Digite o conteudo da string: ");
        fflush(stdin);
        gets(texto->linha[texto->qlinhas]);
        (texto->qlinhas)++;
    }
}

// 03.
void impTextoAux(Texto texto, int i){
    if(i >= texto.qlinhas)
        return;

    printf("\n%s\n", texto.linha[i]);
    return impTextoAux(texto, i+1);
}
void impTexto(Texto texto){
    impTextoAux(texto, 0);
}

//04.
Texto subtexto(Texto texto ,int i, int f){
   Texto novoTexto;
    novoTexto.qlinhas = 0;

    if(i<=0)
        i=0;
    if(f>=texto.qlinhas)
        f=texto.qlinhas;
    
    for(int j=0; i<f; j++){
        novoTexto.linha[j] = (char*) calloc(MAXTAM, sizeof(char));

        strcpy(novoTexto.linha[j], texto.linha[i++]);
        (novoTexto.qlinhas)++;
    }

    return novoTexto;
}

// 05.
int main(){
    Texto texto;
    texto.qlinhas = 0;
    int i, f, res, qtdlinhas;

    do{
        do{
            printf("\nQuantas linhas o texto tera (Maximo 50): ");
            scanf("%d", &qtdlinhas);
            if(qtdlinhas + texto.qlinhas > 50) 
                printf("\n\t>> %d + %d = %d excede o numero maximo de linhas permitido <<\n\n", qtdlinhas, texto.qlinhas, (qtdlinhas + texto.qlinhas));
        } while(qtdlinhas + texto.qlinhas>50);

        printf("\n");
        for(int q=0; q<qtdlinhas; q++)
            scvLinha(&texto);

        impTexto(texto);

        printf("\nLinha inicial: ");
        scanf("%d", &i);
        printf("Linha final: ")/
        scanf("%d", &f);

        impTexto(subtexto(texto, i-1, f));
        
        printf("\n\nDeseja repetir o processo...: 1");
        printf("\nDeseja encerrar o programa..: 0");
        printf("\nOpcao selecionada: ");
        scanf("%d", &res);
    }while(res!=0);
    return 0;
}