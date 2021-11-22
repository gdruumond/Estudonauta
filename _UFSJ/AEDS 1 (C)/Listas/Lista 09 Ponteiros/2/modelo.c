#include<stdio.h>
#include<string.h>

int fibonacci(int *ppa){
    int n1 = 0, n2 = 1, next=1;
    for (int i = 2; i<= *ppa; i++){
        next = n1 + n2;
        n1 = n2;
        n2 = next; 
    }
    return next;
}

void main(){
    int a, *pa;
    pa = &a;

    printf("Digite um inteiro: ");
    scanf("%d", &a);
    printf("O %do elemento da sequencia de fibonacci eh: %d", *pa, fibonacci(&a));
}