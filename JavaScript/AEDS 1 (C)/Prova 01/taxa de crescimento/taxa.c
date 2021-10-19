#include<stdio.h>

void main(){
    
    int pop1, pop2, anos=0;
    float tx1, tx2;

        printf("Populacao do primeiro pais:");
        scanf("%d", &pop1);
        printf("Taxa de crescimento do primeiro pais:");
        scanf("%f", &tx1);

    do{
        printf("Populacao do segundo pais: ");
        scanf("%d", &pop2);
        printf("Taxa de crescimento do segundo pais");
        scanf("%f", &tx2);
        printf("OBS: enquanto a populacao do pais 1 for maior, ou, a taxa de crescimento do pais 1 for menor que a taxa do pais 2, a entrada de dados sera repetida");

    }while(pop1 > pop2 || tx1 < tx2);

    do{
        pop1 = pop1 * (1 + tx1/100);
        pop2 = pop2 * (1 + tx2/100);
        anos++;
    }while(pop1 < pop2);

    printf("\n\nA população do primeiro ira ultrapassar a populacao segundo em %d anos", anos);
}