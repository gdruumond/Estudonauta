#include<stdio.h>
// receba tres valores do usuario, e peça para selecionar uma das tres opções e retorne o valor correspondente da operação escolhida (médias)

void main(){
    int opc;
    float x, y, z, media;
    char res;


    do{
        printf("\n\nValor da primeira nota: ");
        scanf("%f", &x);
        printf("Valor da segunda nota: ");
        scanf("%f", &y);
        printf("Valor da terceira nota: ");
        scanf("%f", &z);

        printf("\n=-=-=-= MENU =-=-=-=");
        printf("\n1- Media aritmetica");
        printf("\n2- Media ponderada");
        printf("\n3- Media harmonica");
        printf("\n=-=-=-=-=-=-=-=-=-=-=");
        printf("\nOpcao selecionada (numero): ");
        scanf("%d", &opc);

        switch (opc){
        case 1:
        media = (x+y+z)/3;
        printf("Media aritmetica entre as notas: %f", x, y, z, media);
        break;
        
        case 2:
        media = (x+ 2*y + 3*z)/6;
        printf("Media ponderada entre as notas: %f", media);
        break;

        case 3:
        media = 1/ (1/x + 1/z + 1/3);
        printf("Media harmonica entre as notas: %f", media);
        break;
        }

        printf("\n\nDeseja repetir o calculo das medias (s/n)? ");
        scanf(" %c", &res);

    } while(res != 'n');
}