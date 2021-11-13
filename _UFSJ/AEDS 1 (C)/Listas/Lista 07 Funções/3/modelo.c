




/*
#include<stdio.h>
#include<string.h>

int posicaoCaracter(char str[], char c){
    for(int i=0; str[i]!='\0'; i++)
        if (str[i] == c) return i;
    return -1;
}

int subString(char str1[], char str2[]){
    
    int substring = 0, i; 

    for(i = 0; str1[i]!='\0' || str1[i] != ' '; i++){

        if(posicaoCaracter(str2, str1[i]) != -1) substring++;
        else substring = 0;

        if(substring == i) return 1;
        else return 0;
    }
}

void main(){
    char string1[100], string2[100];

    printf("Digite duas strings: ");
    gets(string1);
    gets(string2);

    int r = subString(string1, string2);

    printf("\n%s\n%s\nA primeira %seh substring da segunda", string1, string2, subString(string1, string2)?"":"nao ");
    
} */