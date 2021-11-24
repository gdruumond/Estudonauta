#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[50];
    int valor;
} Carro;

void main(){
    Carro carro[5], *pc[5], caro, *cc = &caro;

    for(int i=0; i<5; i++){
        pc[i] = &carro[i];
        printf("\n>> Carro %d <<\nNome: ", i+1);
        scanf(" %s", pc[i]->nome);
        printf("Valor: ");
        scanf("%d", &pc[i]->valor);
        if(i==0)
            *cc = *pc[i];        
        else if(pc[i]->valor > caro.valor)
            *cc = *pc[i];
    }
    printf("\n\nO carro mais caro eh: %s\nValor: %d", cc->nome, cc->valor);
}