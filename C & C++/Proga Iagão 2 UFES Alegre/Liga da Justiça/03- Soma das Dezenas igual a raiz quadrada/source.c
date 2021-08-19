// Grupo Liga da Justi�a
// Iago Gravel do Nascimento
// Pedro Tardin dos Santos Jacinto
// Entradas para teste do programa: 1297; 5314; 9801

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int n, primeira_metade, segunda_metade;

    printf("Digite um n�mero inteiro para verificar se a raiz quadrada do n�mero � igual a soma de suas dezenas: ");
    scanf("%d", &n);

    primeira_metade = n/100; // Retorna os 2 primeiros algorismos
    segunda_metade = n%100; // Retorna os 2 ultimos algorismos

    if((primeira_metade+segunda_metade)*(primeira_metade+segunda_metade) == n){
      printf("Portanto a raiz quadrada de %d � igual a soma de suas dezenas.", n);
    } else{
      printf("Portanto a raiz quadrada de %d n�o � igual a soma de suas dezenas.", n);
    }
}
