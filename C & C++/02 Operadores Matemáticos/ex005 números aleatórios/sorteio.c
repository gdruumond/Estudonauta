#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");
    srand(time(NULL));

    int sorteio, num;
    sorteio = rand() % 5;

    printf("\nVou pensar em um numero de 0 a 5. Tente adivinhar!");
    printf("\nQual eh o seu palpite? ");
    scanf("%d", &num);
    printf("\nEu pensei no número %d e você pensou no %d", sorteio, num);
}
