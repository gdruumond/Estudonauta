#include<stdio.h>
#include<string.h>

int primo(int, int);
void main();

int primo(int x, int d){
    if (d > x/2) return 1;
    if (x % d == 0) return 0;
    return primo(x, d+1);
}

void main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("%d%s eh primo", x, primo(x,2)?"":" nao");
}