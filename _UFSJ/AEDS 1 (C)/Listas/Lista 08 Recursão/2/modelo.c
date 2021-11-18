#include<stdio.h>
#include<string.h>

int primo(int x){
    if(x==1 || x==2) return 1;
    for(int i=2; i< x/2; i++){
        if(x%i==0) return 0;
        else return 1;
    }
}

void main(){
    int x;

    printf("Numero: ");
    scanf("%d", &x);
    printf("%d %sé primo", x, primo(x)?"":"nao");
}