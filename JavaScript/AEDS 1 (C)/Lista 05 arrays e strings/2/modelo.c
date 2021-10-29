#include<stdio.h>
#include<string.h>

void main(){
    float num[10], maior, menor, soma;
    int c;

    for(c=0; c<10; c++){
        printf("Digite o %do valor: ", c+1);
        scanf("%f", &num[c]);
    }

    for(c=0; c<10; c++){
        soma += num[c];
        if(c==0){
            maior = num[c];
            menor = num[c];
        } else if(num[c] > maior) maior = num[c];
        else if(num[c] < menor) menor = num[c];
    }

    printf("Maior: %2.f", maior);
    printf("Menor: %2.f", menor);
    printf("Média: %2.f", soma/10);

}