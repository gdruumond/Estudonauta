#include<stdio.h>

// Crie uma função que recebe um vetor de inteiros e ordene os seus elementos na ordem crescente. 
// Dica: utilize o algoritmo Selection Sort para ordenar o vetor. Para isso, encontre o menor valor do vetor e posicione-o na primeira  posição.  Em  seguida,  repita  esse  processo  para  encontrar  o segundo  menor  e  colocá-lo  na  segunda  posição  e  assim  sucessivamente. 
// Para facilitar, crie uma função que recebe um vetor de inteiros e uma posição inicial e retorna a posição que possui o menor elemento a partir da posição inicial informada. 
// Crie um programa que solicite os elementos do vetor de tamanho 10 e o imprima de forma ordenada.

void main(){

    int a[10], i, j, aux;

    for(i=0; i<10; i++) scanf("%d", &a[i]);

    for(i=0; i<9; i++)
        for(j=1; j<9; j++);{
            if (a[i] > a[j]){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    for(i=0; i<10; i++) printf("%d ", &a[i]);
}