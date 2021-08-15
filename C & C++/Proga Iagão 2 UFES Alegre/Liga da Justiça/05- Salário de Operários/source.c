#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
// Iago Gravel do Nascimento
// Pedro Tardin dos Santos Jacinto
// Entradas para teste do programa:
//      Maria
//      30
//      F
//
//      Julia
//      34
//      F
//
//      Lorena
//      38
//      F
//
// Adotamos o valor de R$1.000,00 para salário mínimo

int main(void)
{
    setlocale(0, "Portuguese");

    float salario_minimo, folha_pagamento, salario, maior_salario;
    float media, media_mulher_a, media_mulher_b, media_mulher_c;

    int c, operarios, numero_total_pecas, pecas;
    int total_mulher_a, total_mulher_b, total_mulher_c;
    int total_peca_mulher_a, total_peca_mulher_b, total_peca_mulher_c;

    char nome[50];
    char sexo, sexo_maior_salario, resposta;
    char operario_maior_salario[50];

    salario_minimo = 1000.0;
    folha_pagamento = 0.0;
    salario = 0.0;
    maior_salario = 0.0;
    media = 0.0;
    media_mulher_a = 0.0;
    media_mulher_b = 0.0;
    media_mulher_c = 0.0;
    c = 0;
    operarios = 0;
    numero_total_pecas = 0;
    pecas = 0;
    total_mulher_a = 0;
    total_mulher_b = 0;
    total_mulher_c = 0;
    total_peca_mulher_a = 0;
    total_peca_mulher_b = 0;
    total_peca_mulher_c = 0;
    nome[50] = " ";
    sexo = " ";
    sexo_maior_salario = " ";
    resposta = " ";
    operario_maior_salario[50] = " ";

    printf("Quantos funcionários deseja incluir no sistema? ");
    scanf("%d", &operarios);

    do
    {
        printf("\nNome do funcionario: ");
        fflush(stdin);
        scanf("%s", &nome);
        printf("Pecas fabricados no mes: ");
        fflush(stdin);
        scanf("%d", &pecas);
        printf("Sexo do funcionario: ");
        fflush(stdin);
        scanf("%c", &sexo);

        numero_total_pecas += pecas;

        // Classe A
        if ( pecas <= 30 )
        {

            salario = salario_minimo;

            if ( sexo == 'F' || sexo == 'f' )
            {
                total_mulher_a++;
                total_peca_mulher_a += pecas;
            }
        }

        // Classe B
        if ( pecas >= 31 && pecas <= 35 )
        {
            salario = salario_minimo + (pecas - 30) * (0.03 * salario_minimo);
            if ( sexo == 'F' || sexo == 'f' )
            {
                total_mulher_b++;
                total_peca_mulher_b += pecas;
            }
        }

        // Classe C
        if ( pecas > 35 )
        {

            salario = salario_minimo + ( pecas - 30 ) * (0.05 * salario_minimo);

            if ( sexo == 'F' || sexo == 'f' )
            {
                total_mulher_c++;
                total_peca_mulher_c =+ pecas;
            }
        }

        folha_pagamento += salario;

        if (c == 1)
        {
            maior_salario = salario;
            strcpy(operario_maior_salario, nome);
        }
        else
        {
            if(salario > maior_salario)
            {
                maior_salario = salario;
                strcpy(operario_maior_salario, nome);
                strcpy(sexo_maior_salario, sexo);
            }
        }

        printf("\nSalario do funcionario: %2.f\n", salario);

        c++;

    } while(c<=operarios);

    media_mulher_a = total_peca_mulher_a / total_mulher_a;
    media_mulher_c = total_peca_mulher_c / total_mulher_c;
    media_mulher_b = total_peca_mulher_b / total_mulher_b;

    printf("Total da folha de pagamento: %f\n", folha_pagamento);
    printf("Total de peças fabricadas no mes: %d\n", numero_total_pecas );
    printf("Media de pecas de mulheres da classe A: %f\n", media_mulher_a );
    printf("Media de pecas de mulheres da classe B: %f\n", media_mulher_b );
    printf("Media de pecas de mulheres da classe C: %f\n", media_mulher_c );
    printf("%s é do genêro %c, e é o operário com maior salário do mês, com R$%2.f de ganhos\n", operario_maior_salario, sexo_maior_salario, maior_salario);

}
