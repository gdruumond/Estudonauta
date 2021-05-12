#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    char produto[30];
    float desconto, precoI, precoF;

    printf("Produto: ");
    gets(produto);
    printf("Preço (R$): ");
    scanf("%f", &precoI);
    printf("Desconto (%%): ");
    scanf("%i", &desconto);

    precoF = desconto / 100;

    printf("O %s custava R$%.2f, porém, com o desconto de %i, ele passará a valer R$%.2f", produto, precoI, desconto, precoF);
}
