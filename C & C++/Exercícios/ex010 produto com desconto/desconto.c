#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    char produto[30];
    float desconto, precoI, precoF;

    printf("Produto: ");
    gets(produto);
    printf("Pre�o (R$): ");
    scanf("%f", &precoI);
    printf("Desconto (%%): ");
    scanf("%i", &desconto);

    precoF = desconto / 100;

    printf("O %s custava R$%.2f, por�m, com o desconto de %i, ele passar� a valer R$%.2f", produto, precoI, desconto, precoF);
}
