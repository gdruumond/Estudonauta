// Crie uma função que recebe um vetor de inteiros e ordene os seus elementos na ordem crescente. 
// Dica: utilize o algoritmo Selection Sort para ordenar o vetor. Para isso, encontre o menor valor do vetor e posicione-o na primeira  posição.  Em  seguida,  repita  esse  processo  para  encontrar  o segundo  menor  e  colocá-lo  na  segunda  posição  e  assim  sucessivamente. 
// Para facilitar, crie uma função que recebe um vetor de inteiros e uma posição inicial e retorna a posição que possui o menor elemento a partir da posição inicial informada. 
// Crie um programa que solicite os elementos do vetor de tamanho 10 e o imprima de forma ordenada.
#include<stdio.h>
#define T 5 

int posicaoMenorElemento(int[], int);
void ordena(int[]);
void main();

int posicaoMenorElemento(int a[], int i){
    int menor = i;
    for(int p = i+1; p<T; p++)
        if(a[p] < a[i])
            menor = p;
    return menor;
}

void ordena(int a[]){
    int m, aux;
    for(int i=0; i<T-1; i++){
        m = posicaoMenorElemento(a,i);
        aux = a[i];
        a[i] = a[m];
        a[m] = aux;
    }
}


void main(){
    int a[T];

    for(int i=0; i<T; i++) 
        scanf("%d", &a[i]);
    ordena(a);
    for(int i=0; i<T; i++) 
        printf("%d ", a[i]);
}