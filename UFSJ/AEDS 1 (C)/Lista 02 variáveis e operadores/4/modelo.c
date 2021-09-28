#include<stdio.h>

void main(){
    float area, volume, raio, pi;

    pi = 3.14159265359;

    printf("Raio da circunferência: ");
    scanf("%f", &raio);

    area = 4 * pi *raio;
    volume = pi * raio * raio;

    printf("Area da circunferencia: %f \nVolume da circunferencia: %f", area, volume);
}