#include<stdio.h>

void main(){
    int maior, meio, menor, a, b, c;

    do{
        printf("\n\nDigite tres numeros inteiros: ");
        scanf("%d %d %d", &a, &b, &c);

        if (a > b){
            if (a > c){
                if (b > c){
                    maior = a;
                    meio = b;
                    menor = c;
                } else{
                    maior = a;
                    meio = c;
                    menor = b;
                }
            } else{
                maior = c;
                meio = a;
                menor = b;
            }
        } else if (c > b){
            maior = c;
            meio = b;
            menor = a;
        } else if (a > c){
            maior = b;
            meio = a;
            menor = c;
        } else{
            maior = b;
            meio = c;
            menor = a;
        }

        printf("Soma dos dois menores numeros: %d", meio + menor);
        
    } while(a!=0 && b!=0 && c!=0);
}