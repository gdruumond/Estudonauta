#include <stdio.h>

void main()
{
    float a, b, c, media;

    printf("Digite tres valores que irei calcular a media!");
    scanf("%f %f %f", &a, &b, &c);

    media = (a + b + c) / 3;

    printf("A media dos valores eh: %2.f", media);
}