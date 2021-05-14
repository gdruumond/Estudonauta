#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int n1, n2, e, ou, exou;

    printf("\nDigite o primeiro valor: ");
    scanf("%i", &n1);
    printf("\nDigite o segundo valor: ");
    scanf("%i", &n2);

    e = n1 & n2;
    ou = n1 | n2;
    exou = n1 ^ n2;

    printf("\n----OPERAÇÕES BITWISE----");
    printf("\nCalculando %i & %i = %i", n1, n2, e);
    printf("\nCalculando %i | %i = %i", n1, n2, ou);
    printf("\nCalculando %i ^ %i = %i", n1, n2, exou);
}
