#include<stdio.h>
#include<string.h>

void main(){
    float x[10], y[10];
    int c;
    
    for(c=0; c<10; c++){
        // ENTRADA DE VALORES
        printf("Digite o %do valor do elemento X: ", c+1);
        scanf("%f", &x[c]);

        // ANALISE DOS INDICES
        if(c%2==0)
            y[c] = x[c] / 2;
        else
            y[c] = x[c] * 3;
    }

    // SAIDA DO VETOR X
    for(c=0; c<10; c++)
        printf("X[%d]: %2.f\t", c, x[c]);
    
    printf("\n");

    // SAIDA DO VETOR Y
    for(c=0; c<10; c++)
        printf("Y[%d]: %.2f\t", c, y[c]); 
}