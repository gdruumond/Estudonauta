#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    float valor, valorF, desconto;

    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &valor);
    printf("Você comprou R$%.2f na nossa loja.", valor);

    desconto = valor * 0.10;
    valorF = valor - desconto;

    if (valor >= 500){
        printf("\n====ATENÇÃO====\nPor fazer mais de R$500 em compras, você vai receber R$%.2f de desconto", desconto);
        printf("\nO valor a ser pago é R$%.2f! Volte sempre!", valorF);
    }
}
