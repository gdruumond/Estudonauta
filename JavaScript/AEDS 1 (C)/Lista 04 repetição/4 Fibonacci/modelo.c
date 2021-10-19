#include<stdio.h>

void main(){
    int i, n1 = 0, n2 = 1, next = 1, num;

    printf("Posicao que deseja do fibonacci: ");
    scanf("%d", &num);

    printf("%d %d ", n1, n2);

    for(i = 3; i <= num; i++){
        next = n1 + n2;
        n1 = n2;
        n2 = next;
        printf("%d ", next);
    }

    printf("\nNumero na posicao %d: %d", num, next);
}