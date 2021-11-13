#include<stdio.h>
#define T 3

void multiplicaMatriz(int[][T], int[][T], int[][T]);
void imprimeMatriz(int[][T]);
void preencheMatriz(int[][T], int[][T]);
void main();
int id = 1;

void multiplicaMatriz(int m1[][T], int m2[][T], int res[][T]){
    for(int i=0; i<T; i++)
        for(int j=0; j<T; j++)
            for(int m=0; m<T; m++)
                res[i][j] += m1[i][m] * m2[m][j];
    /*
        a00 a01 a02    b00 b01 b02    res00 = a00*b00 + a01*b10 + a02*b20   ...
        a10 a11 a12    b10 b11 b12    res10 = a10*b00 + a11*b10 + a12*b20   ...
        a20 a21 a22    b20 b21 b22    res20 = a20*b00 + a21*b10 + a22*b20   ...
    */
}

void imprimeMatriz(int m1[][T]){
    printf("\nMatriz %d:\n", id++);;
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++)
            printf("%d\t", m1[i][j]);
    printf("\n");
    }
}

void preencheMatriz(int m1[][T], int m2[][T]){
    
    int a[T][T], b[T][T], c[T][T] = {};

    for(int i=0; i<T; i++)
        for(int j=0; j<T; j++){
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }

    for(int i=0; i<T; i++)
        for(int j=0; j<T; j++){
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    
}

void main(){
    int a[T][T], b[T][T], c[T][T] = {};

    preencheMatriz(a, b); 

    imprimeMatriz(a);
    imprimeMatriz(b);

    multiplicaMatriz(a, b, c);
    imprimeMatriz(c);
}