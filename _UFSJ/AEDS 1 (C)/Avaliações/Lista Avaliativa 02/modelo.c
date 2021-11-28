/*
Autores do arquivo:
    - Gabriel Augusto Drumond
    - Rian Wagner Costa 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXTAM 50
#define TARRAY 20

// Diretivas
void imprimeDono(Dono*);
void imprimeVeterinario(Veterinario*);
void imprimeAnimal(Animal*);
int buscarDono(Dono[], int, char*);
int buscarAnimal(Animal[], int, char*);
int buscarVeterinario(Veterinario[], int, char*);
void cadastrarDono(Dono[], int*);
void cadastrarVeterinario(Veterinario[], int*);
void cadastrarAnimal(Animal[], int*, Dono[], int);
int horarioDisponivel(Consulta[], int, char*, int );
void agendarConsulta(Consulta[], int*, Animal[], Veterinario[], int, int);
void visualizarAgenda(Consulta[], int);
void main();

    // Inicio Questão 01
typedef struct{
    char *nome;
    char *telefone;
} Dono;

typedef struct{
    char *nome;
    int idade;
    float peso;
    Dono *dono;
} Animal;

typedef struct{
    char *nome;
    int CFMV;
} Veterinario;

typedef struct{
    char *data;
    int horario;
    Animal *animal;
    Veterinario *veterinario;
} Consulta;
    // Fim Questão 01

    // Inicio Questão 02
void imprimeDono(Dono *dono){
    printf("\n>>Dados do Dono<<");
    printf("\nNome: %s");
    printf("\nTelefone: %s\n");
} // Imprime dados do Dono

void imprimeVeterinario(Veterinario *veterinario){
    printf("\n>>Dados do Veterinario<<");
    printf("\nNome: %s");
    printf("\nCFMV: %s\n");
} 

void imprimeAnimal(Animal *animal){
    printf("\n>>Dados do Animal<<");
    printf("\nNome: %s");
    printf("\nIdade: %s");
    printf("\nPeso: %.2f",);
}
    // Fim Questão 02

    // Inicio Questão 03
int buscarDono(Dono donos[], int qtdDonos, char *nomeDoDono){
    /* recebe o array de donos, a quantidade de donos cadastrados(int)e o nome do dono que se deseja encontrar(string)
    Esta função procura no array o dono que possui o nome passado 
        e retorna o índice (int) dele no array
        caso não encontre, a função retorna -1
    Faça também as funções buscarAnimal e buscarVeterinario seguindo a mesma lógica.
    */
    int pos = -1;

    return pos;
}

int buscarAnimal(Animal animais[], int qtdAnimais, char *nomeDoAnimal){
    int pos = -1;

    return pos;
}

int buscarVeterinario(Veterinario veterinarios[], int qtdVeterinarios, char *nomeDoVeterinario){
    int pos = -1;

    return pos;
}
    // Fim Questão 03

    // Inicio Questão 04
void cadastrarDono(Dono donos[], int *qtdDonos){
    /* 
    verifica se o array donos está cheio
    se estiver cheio, avisa o usuario que nao pode mais cadastrar e encerra
    se tiver espaço, solicita dados do novo Dono ao usuário e armazena no array recebido, e atualiza a quantidade de donos cadastrados
    Faça também a função cadastrarVeterinario seguindo a mesma lógica. */
}

void cadastrarVeterinario(Veterinario veterinarios[], int *qtdVeterinarios){
    // mesma lógica do cadastrarDono
}
    // Fim Questão 04

    // Inicio Questão 05
void cadastrarAnimal(Animal animais[], int *qtdAnimais, Dono donos[], int qtdDonos){
    /*
    Verifica se o array está cheio
    Se estiver cheio, avisa que não pode cadastrar mais e encerra
    Se tiver espaço, solicita o nome do dono -> busca os dados do dono. 
        Caso não encontre o dono, a função avisa ao usuário e pergunta se deseja novamente buscar o dono, ou desistir de cadastrar o animal (encerrando a função)
        Caso encontre o dono, a função solicita os demais dados do animal, armazenando tudo no array de animais e atualiza a quantidade de animais cadastrados
    */
}
    // Fim Questão 05


    // Inicio Questão 06
int horarioDisponivel(Consulta consultas[], int qtdConsultas, char *data, int horario){ // DEVE SER FUNÇÃO RECURSIVA
    // Verifica se existe uma consulta marcada na data e horário passados e retorna:
    // 1, se não existir
    // 0, se já exista
}
    // Inicio Questão 06

    // Inicio Questão 07
void agendarConsulta(Consulta consultas[], int *qtdConsultas, Animal animais[], Veterinario veterinarios[], int qtdAnimais, int qtdVeterinarios){
    /* verifica se o array de animais está cheio
        caso afirmativo, avisa que não pode cadastrar e encerra
        Caso tenha espaço,  a  função  solicita  o  nome  do  veterinário  ao  usuário  e  busca  os  dados  dele.  
            Caso  não  encontre  o veterinário, a função avisa ao usuário e pergunta se deseja buscar o dono novamente ou desistir de agendar a consulta,  encerrando  a  função.  Isso  se  repete  até  o  usuário  encontrar  o  veterinário  ou  desistir  e  encerrar  a função.
            Caso tenha sucesso em encontrar o veterinário, a função deve solicitar o nome do animal, repetindo os mesmos passos relativos ao veterinário.
                Em seguida, a função solicita a data e o horário da consulta e verifica se há disponibilidade. 
                    Caso não haja, a função avisa ao usuário e pergunta se deseja indicar outra data e horário ou desistir de agendar a consulta, encerrando a função. Isso se repete até o usuário encontrar uma data disponível ou desistir e encerrar a função. 
                    Caso tenha sido encontrado um horário disponível, a função deve armazenar todos os dados no array de consultas e atualizar a quantidade de consultas cadastradas
    */
}
    // Fim Questão 07

    // Inicio Questão 08
void visualizarAgenda(Consulta consultas[], int qtdConsultas){
    // Esta função solicita uma data (string) e imprime a data,hora e os nomes do veterinário, animal e donodas consultas naqueladata, conforme o exemplo mostrado abaixo em que aparecem 2 consultas.


}
    // Fim Questão 08

    // Inicio Questão 09
void main(){
    /* Implemente  a  função  main,  em  que  são  declarados  os  arrays  de  donos,  animais,  veterinários e  consultas. 
    A função apresenta um menu que possui as opções (a ordem não importa): sair, cadastrar dono, cadastrar animal, cadastrar veterinário, buscar dono, buscaranimal, buscar veterinário, agendar consulta e visualizar consultas do dia. 
    Ao selecionar uma opção, o programa deve utilizar a função correspondente, solicitando/passando todas as informações necessárias para executá-las e voltar para o menu. 
    No caso dasfunções de busca, o programa solicita o nome que busca ao usuário, busca e imprime todos os dados do dono, animal ou veterinário ou informa que não encontrou.
    Após a impressão resultante das buscas e da agenda de consultas, o programa deve pausar. 
    Para isso, use a função system(“PAUSE”); da biblioteca stdlib.h. 
    */
   Dono donos[1];
   Animal animais[1];
   Veterinario veterinairos[1];
   Consulta consultas[1];
   int resp;

    do{
        printf("\n\n**************************************");
        printf("\t\t\t>>DIGITE A OPÇÃO<<");
        printf("\n| Sair...........................: 0 |");
        printf("\n| Cadastrar dono.................: 1 |");
        printf("\n| Cadastrar animal...............: 2 |");
        printf("\n| Cadastrar veterinario..........: 3 |");
        printf("\n| Buscar dono....................: 4 |");
        printf("\n| Buscar animal..................: 5 |");
        printf("\n| Buscar veterinario.............: 6 |");
        printf("\n| Agendar consulta...............: 7 |");
        printf("\n| Visualizar agenda do dia....: 8 |");
        printf("\n| Opção selecionada: ");
        scanf("%d", &resp);
        printf("\n**************************************\n\n");
        switch (resp){
            case 0:
                break;    

            case 1:
                cadastrarDono();
                break;
            
            case 2:
                cadastrarAnimal();
                break;

            case 3:
                cadastrarVeterinario;
                break;

            case 4:
                buscarDono();
                break;    

            case 5:
                buscarAnimal();
                break;    

            case 6:
                buscarVeterinario();
                break;    

            case 7:
                agendarConsulta();
                break;    

            case 8:
                visualizarAgenda();
                break;    

            default:
                printf("\n>>> Por favor, digite uma opção válida <<<");
        }

    }while (resp != 0);
}
    // Fim Questão 05


    /* OBSERVAÇÕES IMPORTANTES:
        -> liberar as variaveis dinamicas free(__variavel)
        -> usar o system("PAUSE") aonde o professor pediu
    */