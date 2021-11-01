#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct{
    float x, y;
} ponto;

void main(){
    ponto a, b;
    float d;

    printf("Ponto A (x,y): ");
    scanf("%f %f", &a.x, &a.y);

    printf("Ponto B (x,y): ");
    scanf("%f %f", &b.x, &b.y);

    d = sqrt( pow(a.x - b.x, 2) + pow(a.y - b.y, 2) );

    printf("A distancia entre os ponto (%.0f,%.0f) e (%.0f,%.0f) eh: %.1f", a.x, a.y, b.x, b.y, d);
}