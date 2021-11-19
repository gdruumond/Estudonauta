#include<stdio.h>
#include<string.h>

int funcao(int a, int b){
    if(a == b) return b;
    return a * funcao(a+1, b);
}
/*
1 2 3 4
1 (2 3 4)
1 (2 (3 4)
1 (2 (3 (4))
1 (2 (12))
1 (24)
24
*/
void main(){
    int a, b, aux;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        aux = b;
        b = a;
        a = aux;
    }
    printf("%d", funcao(a,b));
}