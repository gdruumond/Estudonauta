 #include<stdio.h>

void multiplicaMatriz(int m1[][3], int m2[][3], int res[][3]){
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            for(int m=0; m<3; m++)
                res[i][j] += m1[i][m] * m2[m][j];
    /*
        a00 a01 a02    b00 b01 b02    res00 = a00*b00 + a01*b10 + a02*b20
        a10 a11 a12    b10 b11 b12    res10 = a10*b00 + a11*b10 + a12*b20
        a20 a21 a22    b20 b21 b22
    */
}

void imprimeMatriz(int m1[][3]){
    printf("\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            printf("%d\t", m1[i][j]);
    printf("\n");
    }
}

void main(){
    int a[3][3], b[3][3], c[3][3] = {};

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    printf("\nMatriz 1:");
    imprimeMatriz(a);
    printf("\nMatriz 2:");
    imprimeMatriz(b);
    multiplicaMatriz(a, b, c);
    imprimeMatriz(c);
}