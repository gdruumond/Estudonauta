#include <stdio.h>
#include <stdlib.h>

void boasPraticas(){
    char *nome1 = (char*) calloc(20, sizeof(char));

    if(nome1 == NULL){ // verifica se a alocação deu certo
        printf("Erro na alocação de memória");
        exit(1);
    }

    free(nome1); // após liberar o espaço na memória que estava reservado, apontar o ponteiro para NULL, para que não fique um ponteiro solto
    nome1 = NULL;
}

typedef struct{
    char *nome;
    int idade;
} teste;

void StructArrayStringDinamica(){
    int n;

    teste *oi = (teste*) malloc(n * sizeof(teste));

    // alocando dinamicamente strings dentro de um array dinamico
    for(int i=0; i<n; i++)
        oi[i].nome = (char*) calloc(20, sizeof(char));

    // liberando espaço alocado dinamicamente das strings
    for(int i=0; i<n; i++)
        free(oi[i].nome);

    free(oi);    
}
