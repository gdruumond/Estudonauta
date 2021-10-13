#include<stdio.h>

void main(){

    int n, d = 2, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (d <= n/2){
        if(n % d++ == 0){
            primo = 0;
            break;
        }
    }

    printf("%d %s eh primo\n", n, primo?"":"nao");
}