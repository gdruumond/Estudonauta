#include<stdio.h>
#include<string.h>

void main(){
    int c, i, num[3][3], lin[3] = {0,0,0}, col[3] = {0,0,0};

    for(c=0; c<3; c++){
        for(i=0; i<3; i++){
            printf("Digite o valor do vetor[%d][%d]: ", c, i);
            scanf("%d", &num[c][i]);
            lin[c] += num[c][i];
            col[c] += num[i][c];
        }
    }

    for(c=0; c<3; c++){
        for(i=0; i<3; i++){
            printf("%d\t", num[c][i]);
        }
        printf("\n");
    }

    for(c=0; c<3; c++){
        printf("\nSoma da linha %d: %d", c, lin[c]);
        printf("\nSoma da coluna %d: %d", c, col[c]);
    }
}X