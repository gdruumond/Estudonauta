#include <stdio.h>

void main()
{

    double logaritmo;
    int resposta = 0, n1, n2, i = 0, x, y, log, mdc = 1;
    char c;

    while (resposta != 5){
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-= MENU =-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n1- Logaritmo na base 10");
        printf("\n2- Maximo Divisor Comum (MDC)");
        printf("\n3- Verificacao de caracter");
        printf("\n4- Tabela de tabuada");
        printf("\n5- Sair do menu principal");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &resposta);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        switch (resposta){
        case 1:
            printf("Numero (apenas potencias base 10): \n");
            scanf("%d", &x);
            log = x;
            while (x % 10 == 0 && x >= 1){
                y = x / 10;
                x = y;
                i++;
            }
            if (x % 10 != 0 || x < 1)
                printf("Por favor, insira um numero inteiro positivo que seja potencia de 10");
            else
                printf("\nLog(%d) = %d", log, i);
        break;

        case 2:
            printf("Digite dois numeros para calcular o MDC entre eles: \n");
            scanf("%d %d", &n1, &n2);
            for (i = 1; i <= n1 && i <= n2; ++i)
                if (n1 % i == 0 && n2 % i == 0)
                    mdc = i;
            printf("MDC entre %d e %d eh %d", n1, n2, mdc);
        break;

        case 3:
            printf("Digite um caracter para analise: ");
            scanf(" %c", &c);

            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
                printf("\"%c\" eh uma letra.", c);
            else if (c >= 48 && c <= 57)
                printf("\"%c\" eh um digito.", c);
            else if (c >= 33 && c <= 43 || c == 45 || c == 47 || c >= 60 && c <= 63)
                printf("\"%c\" é um operador.", c);
            else if (c == '.' || c == ',' || c == ';')
                printf("\"%c\" é uma pontuação.", c);
            else
                printf("\"%c\" nao e letra, nem digito, nem operador, nem pontuação.", c);

        break;

        case 4:
            printf("Numero que deseja construir a tabuada: ");
            scanf("%d", &n1);
            printf("\t-----------------------------------\n");
            for (int i = 1; i <= 10; i++)

                printf("\n\t| %d * %d = %d |", n1, i, n1 * i);

        break;

        case 5:
        break;

        default:
            printf("\n*** Digite um número presente na tabela de menu");
        break;
        }
    }
}