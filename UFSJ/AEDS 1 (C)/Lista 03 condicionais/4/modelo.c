#include <stdio.h>

void main()
{

    int num;

    printf("Digite um número inteiro entre 2 e 10: \n");
    scanf("%d", &num);

    switch (num)
    {
    case 2: case 3: case 5: case 7:
        printf("Número primo");
        break;
    case 1: case 4: case 6: case 8: case 9: case 10:
        printf("Número nao primo");
        break;
    default:
    printf("Você não digitou um número entre 2 e 10");
    }
}