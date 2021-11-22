#include<stdio.h>
#include<string.h>

void main(){
    int a, b, *pa = &a, *pb=&b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", pa, pb);
    printf("A soma entre os inteiros eh: %d", *pa + *pb);
}