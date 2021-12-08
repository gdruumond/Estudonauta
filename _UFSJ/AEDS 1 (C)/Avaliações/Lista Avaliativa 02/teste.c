#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TARRAY 3


typedef struct{
    char *data;
    int hora;
} Consulta;

int main(){
    Consulta consulta[TARRAY];

    for(int i=0; i<TARRAY; i++){
        consulta[i].data = (char*)calloc(20, sizeof(char));
        printf("\nConsulta %d\n\tData: ", i+1);
        fflush(stdin);
        gets(consulta[i].data);
        printf("\tHora: ");
        scanf("%d", &consulta[i].hora);
    }

    for(int i=0; i<TARRAY; i++){
        printf("\n\n>> Consulta %d\n\tData: %s\n\tHora: %d", i+1, consulta[i].data, consulta[i].hora);
    }

    return 0;
}