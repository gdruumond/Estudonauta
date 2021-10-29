#include<stdio.h>
#include<string.h>

void main(){
    float x[10], y[10];
    int c;
    
    for(c=0; c<10; c++){
        printf("Digite o %do valor do elemento X: ", c+1);
        scanf("%f", &x[c]);
    }

    for(c=0; c<10; c++){
        if(c%2==0){
            y[c] = x[c] / 2;
        } else{
            y[c] = x[c] * 3;
        }
    }

    for(c=0; c<10; c++){
        printf("\nX[%d]: %2.f", c, x[c]);
        printf("\nY[%d]: %2.f", c, y[c]);
    }
}