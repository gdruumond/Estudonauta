void main(){

    char char1, char2, char3, char4, char5, c6, c7, c8, c9;
    int c, maior, pop1, pop2, pop3, numEstrelas1, numEstrelas2, numEstrelas3, total1, total2, total3;

    //identifica o numero de estrelas de cada pais
    numEstrelas1 = total1 / 10;
    numEstrelas2 = total2 / 10;
    numEstrelas3 = total3 / 10;

    //identifica a maior população, pois, ela vai dizer quantas linhas tera a tabela
    if(total1 > total2 && total1>total3)
        maior = pop1;
    //** A MESMA COISA PRO total2 e total3 **

    // escreve o nome dos paises
    printf("\n\n%c%c%c    %c%c%c    %c%c%c", char1, char2, char3, char4, char5, c6, c7, c8, c9);

    //aqui é o seguinte: vai escrever o numero da estrela e subtrair uma estrela da contagem, ate zerar, e nao escrever mais nenhuma estrela
    for(c=0; c < maior; c++){
        if(numEstrelas1 > 0){
            printf(" *");
            numEstrelas1--;
        }
        printf("\t");
        if(numEstrelas2 > 0){
            printf(" *");
            numEstrelas2--;
        }
        printf("\t");
        if(numEstrelas3 > 0){
            printf(" *");
            numEstrelas3--;
        }
        printf("\n");
    }
}