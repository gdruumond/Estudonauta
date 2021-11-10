#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct{
    double x, y;
} ponto;

void main(){
    ponto a, b;
    double d;

    printf("Ponto A (x,y): ");
    scanf("%lf %lf", &a.x, &a.y);

    printf("Ponto B (x,y): ");
    scanf("%lf %lf", &b.x, &b.y);

    d = sqrt( pow(a.x - b.x, 2) + pow(a.y - b.y, 2) );

    printf("A distancia entre os ponto (%.0lf,%.0lf) e (%.0lf,%.0lf) eh: %.1lf", a.x, a.y, b.x, b.y, d);
}