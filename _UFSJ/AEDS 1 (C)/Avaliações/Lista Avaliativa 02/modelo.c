/*  Autores do arquivo:
        - Gabriel Augusto Drumond
        - Rian Wagner Costa         */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXTAM 50
#define TARRAY 10

    // Diretivas
void imprimeMenu();
void imprimeDono(Dono*);
void imprimeVeterinario(Veterinario*);
void imprimeAnimal(Animal*);
int buscarDono(Dono[], int, char*);
int buscarAnimal(Animal[], int, char*);
int buscarVeterinario(Veterinario[], int, char*);
void cadastrarDono(Dono[], int*);
void cadastrarVeterinario(Veterinario[], int*);
void cadastrarAnimal(Animal[], int*, Dono[], int);
int horarioDisponivel(Consulta[], int, char*, int, int);
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
} Consulta; // Fim Questão 01
    
void imprimeMenu(){
    printf("\n\n**************************************");
    printf("\t\t\t>>DIGITE A OPÇÃO<<");
    printf("\n| Sair......................:\t 0 |");
    printf("\n| Cadastrar dono............:\t 1 |");
    printf("\n| Cadastrar animal..........:\t 2 |");
    printf("\n| Cadastrar veterinario.....:\t 3 |");
    printf("\n| Buscar dono...............:\t 4 |");
    printf("\n| Buscar animal.............:\t 5 |");
    printf("\n| Buscar veterinario........:\t 6 |");
    printf("\n| Agendar consulta..........:\t 7 |");
    printf("\n| Visualizar agenda do dia..:\t 8 |");
    printf("\n| Opção selecionada: ");
}

    // Inicio Questão 02
void imprimeDono(Dono *dono){
    printf("\n\t>>Dados do Dono<<");
    printf("\n| Nome: %s", dono->nome);
    printf("\n| Telefone: %s\n", dono->telefone);
}

void imprimeVeterinario(Veterinario *veterinario){
    printf("\n\t>>Dados do Veterinario<<");
    printf("\n| Nome: %s", veterinario->nome);
    printf("\n| CFMV: %s\n", veterinario->CFMV);
} 

void imprimeAnimal(Animal *animal){
    printf("\n\t>>Dados do Animal<<");
    printf("\n| Nome: %s", animal->nome);
    printf("\n| Idade: %s", animal->idade);
    printf("\n| Peso: %.2f", animal->peso);
}   // Fim Questão 02

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
}   // Fim Questão 03

    // Inicio Questão 04
void cadastrarDono(Dono donos[], int *qtdDonos){
    /* 
    verifica se o array donos está cheio
    se estiver cheio, avisa o usuario que nao pode mais cadastrar e encerra
    se tiver espaço, solicita dados do novo Dono ao usuário e armazena no array recebido, e atualiza a quantidade de donos cadastrados*/

    // alocando strings dinamicas
    int contador, ultimo;

    for(int i=0; i<TARRAY; i++) // verifica se tem espaço no array
        if (donos[i].nome != NULL){
            ultimo = i;
            contador++;
        }
    
    if(contador != TARRAY){
            // aloca as novas strings dinamicamente
        donos[ultimo].nome = (char*)calloc(MAXTAM, sizeof(char));
        donos[ultimo].telefone = (char*)calloc(MAXTAM, sizeof(char));

            // recebendo os valores das strings
        printf("\n>> Cadastro do dono << ");
        printf("\n| Nome: ");
        scanf(" ");
        gets(donos[ultimo].nome);
        printf("\n| Telefone: ");
        scanf(" ");
        gets(donos[ultimo].telefone);
        (*qtdDonos)++;
    } else{
        printf("\nLimite atingido, não é possível cadastrar mais");
        return;
    }
}

void cadastrarVeterinario(Veterinario veterinarios[], int *qtdVeterinarios){
    // mesma lógica do cadastrarDono
    int contador, ultimo;

    for(int i=0; i<TARRAY; i++) //verifica se tem espaço no array
        if (veterinarios[i].nome == NULL){
            ultimo = i;
            contador++;
            break;
        }
    
    if(contador != TARRAY){
        veterinarios[ultimo].nome = (char*)calloc(MAXTAM, sizeof(char));

        // recebendo os valores das strings
        printf("\n>> Cadastro do dono << ");
        printf("\n| Nome: ");
        scanf(" ");
        gets(veterinarios[ultimo].nome);
        printf("\n| CFMV: ");
        scanf("%d", &veterinarios[ultimo].CFMV);
        (*qtdVeterinarios)++;
    } else{
        printf("\nLimite atingido, não é possível cadastrar mais");
        return;
    }

    
} // Fim Questão 04

    // Inicio Questão 05
void cadastrarAnimal(Animal animais[], int *qtdAnimais, Dono donos[], int qtdDonos){
    /*
    Verifica se o array está cheio
    Se estiver cheio, avisa que não pode cadastrar mais e encerra
    Se tiver espaço, solicita o nome do dono -> busca os dados do dono. 
        Caso não encontre o dono, a função avisa ao usuário e pergunta se deseja novamente buscar o dono, ou desistir de cadastrar o animal (encerrando a função)
        Caso encontre o dono, a função solicita os demais dados do animal, armazenando tudo no array de animais e atualiza a quantidade de animais cadastrados
    */
}   // Fim Questão 05

    // Inicio Questão 06
int horarioDisponivel(Consulta consultas[], int qtdConsultas, char *data, int horario, int i){
    if(consultas[i].data == data && consultas[i].horario == horario)
        return 0;        
    if (i == qtdConsultas)
        return 1; 
    if(consultas[i].data != data && consultas[i].horario != horario)
        return horarioDisponivel(consultas, qtdConsultas, data, horario, i+1);
}   // Fim Questão 06 

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
}   // Fim Questão 07

    // Inicio Questão 08
void visualizarAgenda(Consulta consultas[], int qtdConsultas){
    // Esta função solicita uma data (string) e imprime a data,hora e os nomes do veterinário, animal e donodas consultas naquela data, conforme o exemplo mostrado abaixo em que aparecem 2 consultas.
    printf("\n\n***************************");
    printf("\n Data.........:\t\t%s\t|");
    printf("\n Hora.........:\t\t\t%s\t|");
    printf("\n Veterinario..:\t\t%s\t|");
    printf("\n Animal......:\t\t%s|");
}   // Fim Questão 08

    // Inicio Questão 09
void main(){
   Dono donos[TARRAY] = {};
   Animal animais[TARRAY] = {};
   Veterinario veterinarios[TARRAY] = {};
   Consulta consultas[TARRAY] = {};
   int resp, i = 0;
   int qtd_Donos, qtd_Animais, qtd_Veterinarios, qtd_Consultas;
   int *qtdDonos = &qtd_Donos, *qtdAnimais = &qtd_Animais, *qtdVeterinarios = &qtd_Veterinarios, *qtdConsultas = &qtd_Consultas;


    do{
        imprimeMenu();
        scanf("%d", &resp);
        printf("\n**************************************\n\n");
        switch (resp){
            case 0:
            break;    

            case 1:  // OK
                cadastrarDono(donos, qtdDonos);
            break;
            
            case 2:
                cadastrarAnimal(animais, qtdAnimais, donos, qtd_Donos);
            break;

            case 3:  // OK
                cadastrarVeterinario(veterinarios, qtdVeterinarios);
            break;

            case 4:   // OK
                char nome_doDono = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n>> Buscar Dono << ");
                printf("\n| Nome: ");
                scanf(" ");
                gets(nome_doDono);

                int DonoNoArray = buscarDono(donos, qtd_Donos, nome_doDono);

                if(DonoNoArray){
                    printf("\n| Posicao do dono \"%s\" no array: %d", nome_doDono, DonoNoArray);
                    imprimeDono(donos + DonoNoArray);
                    system("PAUSE");
                } else
                    printf("\n| Dono \"%s\" nao encontrado no array: %d", nome_doDono, DonoNoArray);
            break;    

            case 5:  // OK
                char nome_doAnimal = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n>> Buscar Dono << ");
                printf("\n| Nome: ");
                scanf(" ");
                gets(nome_doAnimal);

                int AnimalNoArray = buscarAnimal(animais, qtd_Animais, nome_doAnimal);

                if(AnimalNoArray){
                    printf("\n| Posicao do animal \"%s\" no array: %d", nome_doAnimal, AnimalNoArray);
                    imprimeDono(animais + AnimalNoArray);
                    system("PAUSE");
                } else
                    printf("\n| Animal \"%s\" nao encontrado no array: %d", nome_doAnimal, AnimalNoArray);
            break;    

            case 6:   // OK
                char nome_doVeterinario = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n>> Buscar Dono << ");
                printf("\n| Nome: ");
                scanf(" ");
                gets(nome_doVeterinario);

                int VeterinarioNoArray = buscarVeterinario(animais, qtd_Veterinarios, nome_doVeterinario);

                if(VeterinarioNoArray){
                    printf("\n| Posicao do veterinario \"%s\" no array: %d", nome_doVeterinario, VeterinarioNoArray);
                    imprimeDono(veterinarios + VeterinarioNoArray);
                    system("PAUSE");
                } else
                    printf("\n| Veterinario \"%s\" nao encontrado no array: %d", nome_doVeterinario, VeterinarioNoArray);
            break;    

            case 7:
                char *data = (char*)calloc(MAXTAM, sizeof(char));
                char *horario = (char*)calloc(MAXTAM, sizeof(char));

                horarioDisponivel(consultas, qtd_Consultas, data, horario, 0);
                agendarConsulta(consultas, qtdConsultas, animais, veterinarios, qtd_Animais, qtd_Veterinarios);
            break;    

            case 8:
                visualizarAgenda(consultas, qtd_Consultas);
                printf("\n\n***************************");
                system("PAUSE");
            break;    

            default:
                printf("\n>>> Por favor, digite uma opção válida <<<");
        }

    }while (resp != 0);
}
    // Fim Questão 05


    /* OBSERVAÇÕES IMPORTANTES:
        -> liberar as variaveis dinamicas free(__variavel)
        -> ver sobre os "qtd_AlgumaCoisa", pq eu num mentalizando a contagem das paradas
    */