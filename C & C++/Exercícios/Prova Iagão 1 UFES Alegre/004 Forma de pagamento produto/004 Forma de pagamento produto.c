#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int escolha;
    float produto, preco, desconto;

    printf("Valor do produto:");
    scanf("%f", &produto);

    printf("\n====================");
    printf("\n[1] A Vista");
    printf("\n[2] À prazo");
    printf("\n[3] Cliente fidelidade");
    printf("\n====================\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            desconto = 0.9;
            break;
        case 3:
            desconto = 0.85;
            break;
    }

    preco = produto * desconto;

    printf("Total: R$%f", preco);

    getch();
    return 0;
}

