#include<stdio.h>
#define K 91000000000


void main(){
    float q1, q2, F, d;

    printf("Digite o valor das duas cargas eletricas: \n");
    scanf("%f %f", &q1, &q2);
    printf("Digite a distancia entre as cargas eletricas: ");
    scanf("%f", &d);

    F = (K * q1 * q2) / d*d;

    printf("Forca gerada entre as cargas eletricas: %2.f", F);
}