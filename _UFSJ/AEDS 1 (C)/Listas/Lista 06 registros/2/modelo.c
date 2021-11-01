#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct{
    float x, y;
} ponto;

typedef struct{
    ponto sEsq, iDir;
} retangulo;

void main(){
    retangulo pt_ret;
    float diagonal, area, perimetro, base, altura;

    printf("Ponto superior esquerdo do triangulo (x, y): ");
    scanf("%f %f", &pt_ret.sEsq.x, &pt_ret.sEsq.y);
    printf("Ponto inferior direito do triangulo (x, y): ");
    scanf("%f %f", &pt_ret.iDir.x, &pt_ret.iDir.y);

    base = pt_ret.sEsq.x - pt_ret.iDir.x;
    altura = pt_ret.sEsq.y - pt_ret.iDir.y;

    if(base<0) base *= -1;
    if(altura<0) altura *= -1;

    diagonal = sqrt( pow(pt_ret.sEsq.x - pt_ret.iDir.x, 2) + pow(pt_ret.sEsq.y - pt_ret.iDir.y, 2) );
    area = base * altura;
    perimetro = 2*(base + altura);

    printf("\nBase: %.1f Altura: %.1f", base, altura);
    printf("\nArea: %.1f\nDiagonal: %.1f\nPerimetro: %.1f", area, diagonal, perimetro);
}