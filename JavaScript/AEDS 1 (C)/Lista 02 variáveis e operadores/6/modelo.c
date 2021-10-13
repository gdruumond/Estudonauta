#include<stdio.h>

void main(){
    
    int tSegundos, horas, minutos, segundos;

    printf("Tempo em segundos: ");
    scanf("%d", &tSegundos);

    horas = tSegundos / 3600;
    minutos = (tSegundos % 3600) / 60;
    segundos = (tSegundos % 3600) % 60;

    printf("%d segundos em \nHoras: %d\nMinutos: %d\nSegundos: %d", tSegundos, horas, minutos, segundos);
}