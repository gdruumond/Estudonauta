#include <stdio.h>
#include <locale.h>

void main() {
    char n1[18], n2[18], n3[18];
    char s1, s2, s3;
    float no1, no2, no3;

    printf("\nCadastrando a primeira pessoa");
    printf("\nNome: ");
    gets(n1);
    printf("\nSexo [M/F]: ");
    s1 = getchar();
    printf("\nNota: ");
    scanf("%f", &no1);
    fflush(stdin);

    printf("\nCadastrando a segunda pessoa");
    printf("\nNome: ");
    gets(n2);
    printf("\nSexo [M/F]: ");
    s2 = getchar();
    printf("\nNota: ");
    scanf("%f", &no2);
    fflush(stdin);

    printf("\nCadastrando a terceira pessoa");
    printf("\nNome: ");
    gets(n3);
    printf("\nSexo [M/F]: ");
    s3 = getchar();
    printf("\nNota: ");
    scanf("%f", &no3);
    fflush(stdin);

    printf("\nListagem Completa");
    printf("\n-------------------");
    printf("\nNOME\t\tSEXO\tNOTA");
    printf("\n%-18s %c\t %3.1f\t", n1, s1, no1);
    printf("\n%-18s %c\t %3.1f\t", n2, s2, no2);
    printf("\n%-18s %c\t %3.1f\t", n3, s3, no3);
    printf("\n--------------------");
}
