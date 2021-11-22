#include <stdio.h>

void main(){
    int i = 0, inteiro[5], soma=0, *arpont[5];

    // Input de valores no array inteiro
    while(i++<5){
        printf("Digit o %do elemento: ", i);
        scanf("%d", &inteiro[i-1]);
    }

    for(int i=0; i<5; i++){
        // Ponteiro "arpont" recebendo os endereços de inteiro[5]
        arpont[i] = &inteiro[i];
        // Soma dos valores apontados pelo ponteiro "arpont"
        soma += *arpont[i];
    }
    printf("Soma dos valores: %d", soma);
}