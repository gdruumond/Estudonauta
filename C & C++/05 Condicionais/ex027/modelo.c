#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(0, "Portuguese");

    int n1, n2, n3;

    printf("Digite três números que colocarei em ordem decrescente:\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if(n1>n2 && n1>n3){
        if(n2>n3){
            printf("%i %i %i", n1, n2, n3);
        } else{
            printf("%i %i %i", n1, n3, n2);
        }
    } else if(n2>n1 && n2>n3){
        if(n1>n3){
            printf("%i %i %i", n2, n1, n3);
        } else{
            printf("%i %i %i", n2, n3, n1);
        }
    } else if(n3>n2 && n3>n1){
        if(n2>n1){
            printf("%i %i %i", n3, n2, n1);
        } else{
            printf("%i %i %i", n3, n1, n2);
        }
    }
}
