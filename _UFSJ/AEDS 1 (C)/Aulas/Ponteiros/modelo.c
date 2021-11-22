#include<stdio.h>
#include<string.h>

int fatorial (int *y) {
    int fat = 1;
    while (*y > 1) fat *= (*y)--;
    return fat;
}

void main(){
    int x = 3, *a;
    a = &x;

    printf("\nEndereço de x: %x", &x);
    printf("\nValor de x: %d", x);
    printf("\nValor de a: %x", a);
    printf("\nDesreferencia de a: %d", *a);
    int fat = fatorial(&x);
    printf("\nFatorial de %d: %d", x, fat);

    /*
    Note que:
    o valor de "a" é o endereço de x
    ao desreferenciar "a", obtemos o valor de x
    obs: Ao alterar o valor de "*a", o valor de x também será alterado!!
    
    Devido à precedencia, ao incrementar "*a", você deve fazer dessa maneira: (*a)++. Caso contrário, você vai incrementar o endereço da variavel apontada por "a", não o valor da variável apontada por "a"

    Valor NULL
    é o elemento neutro dos ponteiros
    Um ponteiro para NULL é considerado um ponteiro que não aponta para lugar algum.

    Passagem de referencia
    Ao invés de receber uma cópia do valores das variáveis indicadas na chamada, na passagem por referência, os parâmetros recebem o endereço delas
    Ao chamar uma função, passa o endereço "&" da variável, e a variável que recebe será um ponteiro, dessa forma ao modificar a variável formal, também modificara a variável real
    na passagem por valor, modificar o parametro formal não afeta o parametro real. Na passagem por referencia, modificar o parametro formal afeta o parametro real
    note que o ponteiro Y vai receber o endereço de X, então, ao alterar o conteudo de Y (*Y) estará alterando o conteudo de X   
    A passagem por referência pode ser útil quando é necessário obter mais de um valor de uma função. Por exemplo, a função troca os valores de duas variáveis.

    array é um ponteiro para o primeiro valor de uma sequencia de valores do mesmo tipo
    então, string é um ponteiro que tem o valor do endereço do primeiro caracter da frase aponta para o primeiro caracter da sequencia de caracteres

    Como a passagem de array é sempre por referência, alterar o conteúdo do array numa função, altera diretamente o array na função main, pois eles apontam para o mesmo endereço

    O desreferenciamento de um ponteiro para um registro é feito sem o "*", sim da seguinte forma, ponteiro->variável. Exemplo
        #include <stdio.h>

        typedef struct {int x, y;} Ponto;

        void imprimePonto (Ponto *p){
            printf("(%d;%d)", p->x, p->y);
        }

        void main()
        {
            Ponto ponto = {2.5, 4.0}; // variavel ponto
            imprimePonto(&ponto);
        }
    */ 
}