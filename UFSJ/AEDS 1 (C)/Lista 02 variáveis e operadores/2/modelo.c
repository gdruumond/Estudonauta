#include <stdio.h>

void main()
{
    int anos, meses, dias, tDias;

    printf("Digite a sua idade em \nAnos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    tDias = (anos * 365) + (meses * 30) + (dias);

    printf("No total, voce viveu %d dias!", tDias);
}