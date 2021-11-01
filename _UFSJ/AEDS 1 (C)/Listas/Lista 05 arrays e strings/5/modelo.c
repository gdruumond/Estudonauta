#include<stdio.h>
#include<string.h>

void main(){
    // nome[5][20] -> 5 strings com max. 20 caracteres
    char nome[5][20], aux[20];
    int i, c, m;

    for(i=0; i<5; i++){
        printf("Nome: ");
        scanf(" %s", nome[i]);
    }

    for(i=0; i<5-1; i++){
        m = i;
        for(c=i+1; c<5; c++)
            if(strcmp(nome[c],nome[m]) < 0) m = c;
        if (i != m){
            strcpy(aux, nome[m]);
            strcpy(nome[m], nome[i]);
            strcpy(nome[i], aux);
        }
    }

    for(i=0; i<5; i++)
        printf("\n%s ", nome[i]);
}
/*Ordenação dos vetores exemplificado  

    i
    m
        c
    3   1   7   5

    i
        m
        c
    3   1   7   5


    i
        m
        c
    1   3   7   5

        i
        m
                c
    1   3   7   5

            i
            m
                c
    1   3   7   5

            i
                m
                c
    1   3   7   5

            i
                m
                c
    1   3   5   7 */