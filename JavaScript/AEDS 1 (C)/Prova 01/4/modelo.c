#include<stdio.h>

void main(){

    int total, votoA=0, votoB=0, votoC=0, restam;
    char letra, vencedor;

    printf("Total de eleitores: ");
    scanf("%d", &restam); 

    total = restam;

    for(int i =0; i< total; i++){
        printf("Digite a letra do canditado que deseja votar:");
        scanf(" %c", &letra);

        if(letra == 'A')
            ++votoA;
        if(letra == 'B')
            ++votoB;
        if(letra == 'C')
            ++votoC;

        restam--;

        if(votoA > (restam + votoB + votoC)){
            vencedor = 'A';
            break;
        }

        if(votoB > (restam + votoA + votoC)){
            vencedor = 'B';
            break;
        }

        if(votoC > (restam + votoB + votoA)){
            vencedor = 'C';
            break;
        }
    }

    printf("Quantidade de votos: \nA: %d\nB: %d\nC: %d\n", votoA, votoB, votoC); 
    printf("Vencedor: %c", vencedor);
}