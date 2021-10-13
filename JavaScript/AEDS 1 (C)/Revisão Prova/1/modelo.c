#include<stdio.h>
// crie um programa que solicite um numero fracionario em Kelvin e retorne a temperatura correspondente em Fahrenheit

void main(){
    float kelvin, fahrenheit;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &kelvin);

    fahrenheit = 32 + 1.8 * (kelvin - 273);

    printf("%2.f Kelvin = %2.f Fahrenheit", kelvin, fahrenheit);
}