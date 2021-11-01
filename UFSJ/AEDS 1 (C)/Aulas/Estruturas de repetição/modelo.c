#include <stdio.h>

void main()
{
    int num, fat = 1, c = 1;

    printf("Numero: ");
    scanf("%d", &num);

    while (c <= num)
        fat *= c++;
    printf("\n%d! = %d", num, fat);
    fat = 1;
    c = 1;


    do
        fat *= c++;
    while (c <= num);
    printf("\n\n%d! = %d", num, fat);
    fat = 1;
    c = 1;


    for (c; c <= num; c++)
        fat *= c;
    printf("\n\n%d! = %d", num, fat);
}