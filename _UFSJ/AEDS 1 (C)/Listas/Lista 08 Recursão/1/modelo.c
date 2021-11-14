#include<stdio.h>
#include<string.h>

int funcao(int int1, int int2){
    if(int1 == int2) return int2;
    return int1 * funcao(int1+1, int2);
}
/*
1 2 3 4 5 6
(2 3 4 5)
2 (3 4 5)
2 (3 (4 5))
2 (3 (4 (5)))  
*/
void main(){
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("%d", funcao(a,b));
}