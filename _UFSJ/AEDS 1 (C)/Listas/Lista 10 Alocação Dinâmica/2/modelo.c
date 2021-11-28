#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

typedef struct{
    char *nome;
    int RA;
} Aluno;

// Recebe qualquer ponteiro, e retorna se a alocação foi sucedida ou não
/* void erroAlocacao(void *ponteiro){   
    if(ponteiro == NULL){
        printf("Erro na alocação de memória");
        exit(1);
    }
} */

// verifica se a alocação do ponteiro tipo Aluno deu certo
void erroAlocacaoAluno(Aluno *ponteiro){   
    if(ponteiro == NULL){ 
        printf("Erro na alocação de memória");
        exit(1);
    }
}

// verifica se a alocação do ponteiro tipo char deu certo
void erroAlocacaoChar(char *ponteiro){   
    if(ponteiro == NULL){ 
        printf("Erro na alocação de memória");
        exit(1);
    }
}

void main(){
    int resp, i = 0;
    Aluno *aluno = (Aluno*)calloc(i, sizeof(Aluno));
        erroAlocacaoAluno(aluno);

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
            i++;
            aluno = realloc(aluno, i * sizeof(Aluno)); // aumenta o vetor aluno
            aluno[i-1].nome = (char*)calloc(MAX, sizeof(char)); // string alocada dinamicamente 
                erroAlocacaoChar(aluno[i-1].nome);
            printf("\nNome: ");
            scanf(" "); // limpa buffer de entrada
            gets(aluno[i-1].nome);
            printf("RA: ");
            scanf("%d", &aluno[i-1].RA);
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
