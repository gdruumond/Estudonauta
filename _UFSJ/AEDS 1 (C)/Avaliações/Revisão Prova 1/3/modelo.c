#include<stdio.h>

void main(){
    int num, i, N;
    float e;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(N; N<=num; N++){
    //identifica quantidade de divisores de X
     i = 1;
    if(num%N==0);
        i++;

    //efetua intercaladamente as operações de soma e subtração entre o número de divisores de X divido pelo valor de N  
    if(N%2==0)
        e += i/N;
    else
        e -= i/N;
        
    }

    printf("E = %d", e);
}