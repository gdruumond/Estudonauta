#include <stdio.h>

void main(){
    int i = 0, inteiro[5], soma=0, *arpont[5];

    for(i=0; i<5; i++){
        // Ponteiro "arpont" recebendo os endereços de inteiro[5]
        arpont[i] = &inteiro[i];
        printf("Digit o %do elemento: ", i+1);
        scanf("%d", arpont[i]);
        // Soma dos valores apontados pelo ponteiro "arpont"
        soma += *arpont[i];
    }
    printf("Soma dos valores: %d", soma);
}