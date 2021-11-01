#include<stdio.h>

void main(){
    char c1, c2, c3, c4, c5, c6, c7, c8, c9;
    int i, maior, pop1, pop2, pop3, iStar1, iStar2, iStar3;

    printf("Sigla do primeiro pais: \n");
    scanf(" %c %c %c", &c1, &c2, &c3);
    printf("Sigla do segundo pais: \n");
    scanf(" %c %c %c", &c4, &c5, &c6);
    printf("Sigla do terceiro pais: \n");
    scanf(" %c %c %c", &c7, &c8, &c9);

    printf("Populacao do primeiro pais (em dezena de milhoes): \n");
    scanf("%d", &pop1);
    printf("Populacao do primeiro pais (em dezena de milhoes): \n");
    scanf("%d", &pop2);
    printf("Populacao do primeiro pais (em dezena de milhoes): \n");
    scanf("%d", &pop3);

    // CALCULO QUANTAS ESTRELAS SERAO NECESSARIAS
    iStar1 = pop1 / 10;
    iStar2 = pop2 / 10;
    iStar3 = pop3 / 10;

    //IDENTIFICA MAIOR PAIS
    if(pop1 > pop2 && pop1 > pop3)
        maior = pop1;
    if(pop2 > pop3 && pop2 > pop1)
        maior = pop2;
    if(pop3 > pop2 && pop3 > pop1)
        maior = pop3;

    // ESCREVE PAISES
    printf("\n%c%c%c\t%c%c%c\t%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8, c9);

    // ESCREVE TABELA NA TELA
    for(i=0; i < maior; i++){
        if(iStar1-- > 0)
            printf(" *");
        printf("\t");
        if(iStar2-- > 0)
            printf(" *");
        printf("\t");
        if(iStar3-- > 0)
            printf(" *");
        printf("\n");
    }
}