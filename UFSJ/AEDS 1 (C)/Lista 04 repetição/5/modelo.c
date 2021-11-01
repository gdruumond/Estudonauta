#include<stdio.h>

void main(){
    int maior=0, menor=0, valor=1, i=0;

    while(valor!=0){
        
        if(i==1) maior = menor = valor;
        else
            if (valor > maior)
                maior = valor;
            else
                menor = valor;

        printf("Digite um valor: ");
        scanf("%d", &valor);
        i++;
    }
    
    printf("Maior: %d\nMenor: %d", maior, menor);
}