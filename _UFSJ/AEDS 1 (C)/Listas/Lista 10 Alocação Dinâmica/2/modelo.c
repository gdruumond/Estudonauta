#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

typedef struct{
    char *nome;
    int RA;
} Aluno;

void main(){
    int resp, i = 0;
    Aluno *aluno = (Aluno*)calloc(i, sizeof(Aluno));

    do{
        printf("\n---------------------------------\n");
        printf("\n0- SAIR");
        printf("\n1- Incluir alunos");
        printf("\n2- Imprimir alunos cadastrados");
        printf("\nDigite opcao: ");
        scanf("%d", &resp);
        printf("\n---------------------------------\n");

        switch (resp){
        case 0:
            exit(1);
        
        case 1:
            aluno = realloc(aluno, i * sizeof(Aluno)); // aumenta o vetor aluno
            aluno[i].nome = (char*)calloc(MAX, sizeof(char)); // string alocada dinamicamente 
            printf("\nNome: ");
            scanf(" "); // limpa buffer de entrada
            gets(aluno[i].nome);
            printf("RA: ");
            scanf("%d", &aluno[i].RA);
            i++;
            break;

        case 2:
            // Imprime dados cadastrados
            for(int j=0; j<i; j++){
                printf("\n\n\t>>Aluno %d", j+1);
                printf("\nNome: %s", aluno[j].nome);
                printf("\nRA: %d", aluno[j].RA);
            }
            break;

        default:
            printf("\nDigite uma opcao valida!\n\n");
        }
    } while(resp != 0);

    // Liberando variaveis da Heap
    for(int j=0; j<i; j++){
        free(aluno[j].nome);
        aluno[j].nome = NULL;
    }
    free(aluno);
    aluno = NULL;
}
