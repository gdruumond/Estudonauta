#include<stdio.h>

void main(){
    float area, volume, raio;

    const float PI = 3.14159265359;

    printf("Raio da circunferência: ");
    scanf("%f", &raio);

    area = 4 * PI * raio;
    volume = PI * raio * raio;

    printf("Area da circunferencia: %f \nVolume da circunferencia: %f", area, volume);
}