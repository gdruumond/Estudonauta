#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct{
    int x, y;
} ponto;

typedef struct{
    ponto sEsq, iDir;
} retangulo;

void main(){
    retangulo pt_ret;
    ponto ponto;

    printf("Ponto superior esquerdo do triangulo (x, y): ");
    scanf("%d %d", &pt_ret.sEsq.x, &pt_ret.sEsq.y);
    printf("Ponto inferior direito do triangulo (x, y): ");
    scanf("%d %d", &pt_ret.iDir.x, &pt_ret.iDir.y);
    printf("Informe um ponto qualquer (x,y): ");
    scanf("%d %d", &ponto.x, &ponto.y);

    if( (ponto.x > pt_ret.sEsq.x && ponto.x < pt_ret.iDir.x) && (ponto.y < pt_ret.sEsq.y && ponto.y > pt_ret.iDir.y))
        printf("O ponto esta inserido no retangulo");
    else printf("Nao esta inserido no retangulo");
}