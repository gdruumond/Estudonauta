#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    char let;

    printf("Digite uma letra: ");
    let = getchar();
    printf("Antes do %c vem o %c, e depois vem o %c", let, let-1, let+1);
}
