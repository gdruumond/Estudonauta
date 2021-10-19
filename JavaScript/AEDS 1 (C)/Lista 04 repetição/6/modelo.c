#include<stdio.h>

void main(){
    int n1=1, n2=1, maior, menor, c;

    while(n1!=0 || n2!=0){
        printf("\nDigite dois inteiros: ");
        scanf("%d %d", &n1, &n2);

        if (n1 == n2) 
            maior = menor = n1;
        else if(n1 > n2){ 
            maior = n1;
            menor = n2;
        } else{
            maior = n2;
            menor = n1;
        }

        for(c=menor; c <= maior; c++){
            printf("%d ", c);
        }
    }
}