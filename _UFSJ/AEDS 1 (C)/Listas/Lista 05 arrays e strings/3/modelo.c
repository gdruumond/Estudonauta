#include<stdio.h>
#define LIN 3
#define COL 3

void main(){
    int c, i, G[LIN][COL], SL[LIN] = {}, SC[COL] = {};

    // ENTRADA VALORES
    for(c=0; c<COL; c++){
        for(i=0; i<LIN; i++){
            printf("G[%d][%d]: ", c, i);
            scanf("%d", &G[c][i]);
        }
    }
    
    // SOMA + SAIDA DE VALORES
    for(c=0; c<COL; c++){
        for(i=0; i<LIN; i++){
            SL[c] += G[c][i];
            SC[c] += G[i][c];
            printf("%d\t", G[c][i]);
        }
        printf("| %d\n", SL[c]);
    }
    printf("___________________\n");
    for(c=0; c<LIN; c++)
        printf("%d\t", SC[c]);
}