#include <stdio.h>

void main()
{
    int a, b, c, maior, meio, menor;

    printf("Digite tres inteiros:");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            if (b > c)
            {
                maior = a;
                meio = b;
                menor = c;
            }
            else
            {
                maior = a;
                meio = c;
                menor = b;
            }
        }
        else
        {
            maior = c;
            meio = a;
            menor = b;
        }
    }
    else if (c > b)
    {
        maior = c;
        meio = b;
        menor = a;
    }
    else if (a > c)
    {
        maior = b;
        meio = a;
        menor = c;
    }
    else
    {
        maior = b;
        meio = c;
        menor = a;
    }

    printf("\n\nMaior: %d\nMeio: %d\nMenor: %d\n\n", maior, meio, menor);
}
