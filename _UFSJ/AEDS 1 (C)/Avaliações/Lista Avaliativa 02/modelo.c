/*  Autores do arquivo:
        - Gabriel Augusto Drumond
        - Rian Wagner Costa         */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXTAM 50
#define TARRAY 10
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
    
void imprimeDono(Dono);
void imprimeVeterinario(Veterinario*);
void imprimeAnimal(Animal*);
int buscarDono(Dono[], int, char*);
int buscarAnimal(Animal[], int, char*);
int buscarVeterinario(Veterinario[], int, char*);
void cadastrarDono(Dono[], int*);
void cadastrarVeterinario(Veterinario[], int*);
void cadastrarAnimal(Animal[], int*, Dono[], int);
int horarioDisponivel(Consulta[], int*, char*, int, int);
void agendarConsulta(Consulta[], int*, Animal[], Veterinario[], int, int);
void visualizarAgenda(Consulta[], int, Animal[]);
int main();

    // Inicio Questão 02
void imprimeDono(Dono dono){
    printf("\n\n\t>> Dados do Dono <<");
    printf("\n| Nome: %s", dono.nome);
    printf("\n| Telefone: %s\n", dono.telefone);
}
void imprimeVeterinario(Veterinario *veterinario){
    printf("\n\n\t>> Dados do Veterinario <<");
    printf("\n| Nome: %s", veterinario->nome);
    printf("\n| CFMV: %d\n", veterinario->CFMV);
} 
void imprimeAnimal(Animal *animal){
    printf("\n\n\t>> Dados do Animal <<");
    printf("\n| Nome: %s", animal->nome);
    printf("\n| Idade: %d", animal->idade);
    printf("\n| Peso: %.2f", animal->peso);
    printf("\n| Dono: %s", animal->dono->nome);
}   // Fim Questão 02

    // Inicio Questão 03
int buscarDono(Dono donos[], int qtdDonos, char *nomeDoDono){
    int j=0, retorno = -1;

    for(int i=0; i<qtdDonos; i++){
        if(strcmp(donos[i].nome, nomeDoDono) == 0)
                retorno = i;
        else
                j++;
    }

    if(j==qtdDonos)
        retorno = -1;

    return retorno;
}
int buscarAnimal(Animal animais[], int qtdAnimais, char* nomeDoAnimal){
    int j=0, retorno = -1;

    for(int i=0; i<qtdAnimais; i++){
        if(strcmp(animais[i].nome, nomeDoAnimal) == 0)
           retorno = i;
        else
            j++;
    }

    if(j==qtdAnimais)
        retorno = -1;

    return retorno;
}
int buscarVeterinario(Veterinario veterinarios[], int qtdVeterinarios, char* nomeDoVeterinario){
    int j=0, retorno = -1;

   for(int i=0; i<qtdVeterinarios; i++){
       if(strcmp(veterinarios[i].nome, nomeDoVeterinario) == 0)
             retorno = i;
       else
            j++;
    }

    if(j==qtdVeterinarios)
        retorno = -1;
    
    return retorno;
} // Fim questão 03

    // Inicio Questão 04
void cadastrarDono(Dono donos[], int *qtdDonos){
    if(*qtdDonos != TARRAY){
        donos[*qtdDonos].nome = (char*)calloc(MAXTAM, sizeof(char));
        donos[*qtdDonos].telefone = (char*)calloc(MAXTAM, sizeof(char));
        printf("\n\t>> Cadastro de Dono << ");
        printf("\n| Nome: ");
        fflush(stdin);
        gets(donos[*qtdDonos].nome);
        printf("| Telefone: ");
        fflush(stdin);
        gets(donos[*qtdDonos].telefone);
        (*qtdDonos)++;
    } else
        printf("\n\t>> Limite de donos atingido <<");
}
void cadastrarVeterinario(Veterinario veterinarios[], int *qtdVeterinarios){    
    if(*qtdVeterinarios != TARRAY){
        veterinarios[*qtdVeterinarios].nome = (char*)calloc(MAXTAM, sizeof(char));

        printf("\n\t>> Cadastro Veterinario << ");
        printf("\n| Nome: ");
        fflush(stdin);
        gets(veterinarios[*qtdVeterinarios].nome);
        printf("| CFMV: ");
        scanf("%d", &veterinarios[*qtdVeterinarios].CFMV);
        (*qtdVeterinarios)++;
    } else
        printf("\nLimite atingido, não é possível cadastrar mais");
} // Fim Questão 04

 // Inicio Questão 05
void cadastrarAnimal(Animal animais[], int *qtdAnimais, Dono donos[], int qtdDonos){
    int resp = 0, encontrado = 0;

    if(*qtdAnimais != TARRAY){
        do{
            char *nome_doDono = (char*)calloc(MAXTAM, sizeof(char));
            printf("\n\t>> Cadastro Animal <<");
            printf("\n| Nome do dono: ");
            fflush(stdin);
            gets(nome_doDono);
            encontrado = buscarDono(donos, qtdDonos, nome_doDono);

            if(encontrado != -1){
                animais[*qtdAnimais].dono = (Dono*)calloc(1, sizeof(Dono));
                animais[*qtdAnimais].dono->nome = (char*)calloc(MAXTAM, sizeof(char));
                animais[*qtdAnimais].nome = (char*) calloc(MAXTAM, sizeof(char));
                strcpy(animais[*qtdAnimais].dono->nome, nome_doDono);

                printf("| Nome do animal: ");
                fflush(stdin);
                gets(animais[*qtdAnimais].nome);
                printf("| Idade: ");
                scanf("%d", &animais[*qtdAnimais].idade);
                printf("| Peso: ");
                scanf("%f", &animais[*qtdAnimais].peso);
                (*qtdAnimais)++;
                free(nome_doDono);
                nome_doDono = NULL;
                resp = 0;
            } else{
                printf("\n\t>> Dono nao encontrado <<");
                printf("\n| Buscar outro dono.......:\t1");
                printf("\n| Sair....................:\t0");
                printf("\n| Opcao selecionada: ");
                scanf("%d", &resp);
                free(nome_doDono);
                nome_doDono = NULL;
                if(resp == 0)
                    return;
            }
        } while(resp != 0);
    } else printf("\n\t>> Limite de animais atingido <<");
}   // Fim Questão 05

/* 
    // Inicio Questão 06
int horarioDisponivel(Consulta consultas[], int *qtdConsultas, char *data, int horario, int i){

    if(strcmp(consultas[i].data, data) == 0 && consultas[i].horario == horario)
        return 0;  

    if(i == *qtdConsultas)
        return 1; 
    
    return horarioDisponivel(consultas, qtdConsultas, data, horario, i+1);
}   // Fim Questão 06
*/

// Inicio Questão 06
int horarioDisponivel(Consulta consultas[], int *qtdConsultas, char *data, int horario, int i){
    int j;

    for(j=0; j<*qtdConsultas;j++)
        if(strcmp(consultas[j].data, data) == 0 && consultas[j].horario == horario)
            return 0; 
    
    return 1;
} // Fim Questão 06

     // Inicio Questão 07
void agendarConsulta(Consulta consultas[], int *qtdConsultas, Animal animais[], Veterinario veterinarios[], int qtdAnimais, int qtdVeterinarios){
    int horaConsulta, horaVaga, posVet, posAni, resp = 0;
    
    printf("\n\t>> Agendar Consulta <<");
    if(*qtdConsultas != TARRAY){
        do{
            resp = 0;
            char *nome_doVeterinario = (char*)calloc(MAXTAM, sizeof(char));
            printf("\n| Nome do veterinario: ");
            fflush(stdin);
            gets(nome_doVeterinario);
            posVet = buscarVeterinario(veterinarios, qtdVeterinarios, nome_doVeterinario);
            free(nome_doVeterinario);
            nome_doVeterinario = NULL;
            if(posVet == -1){
                printf("\n\t >> Veterinario nao encontrado <<");
                printf("\n| Continuar busca de veterinario..:\t1 |");
                printf("\n| Sair............................:\t0 |");
                printf("\n| Opcao selecionada: ");
                scanf("%d", &resp);
                if(resp == 0) 
                    return;
            }
        }while(resp != 0);
    } else{
        printf("\n\t >> Limite de consultas atingido <<");
        return;
    }

    do{
        resp = 0;
        char *nome_doAnimal = (char*)calloc(MAXTAM, sizeof(char));
        printf("| Nome do animal: ");
        fflush(stdin);
        gets(nome_doAnimal); 
        posAni = buscarAnimal(animais, qtdAnimais, nome_doAnimal);
        free(nome_doAnimal);
        nome_doAnimal = NULL; 
        if(posAni == -1){
            printf("\n\n\t >> Animal nao encontrado <<");
            printf("\n| Continuar busca de Animal..:\t1 |");
            printf("\n| Sair........................:\t0 |");
            printf("\n| Opcao selecionada: ");
            scanf("%d", &resp);
            if(resp == 0) return;
        }
    } while(resp != 0);

    do{
        char *dataConsulta = (char*)calloc(MAXTAM, sizeof(char));
        resp = 0;
        printf("| Data: ");
        fflush(stdin);
        gets(dataConsulta);
        printf("| Hora: ");
        scanf("%d", &horaConsulta);
        horaVaga = horarioDisponivel(consultas, qtdConsultas, dataConsulta, horaConsulta, 0);

        if(horaVaga){
            printf("\n\n\t >> Consulta marcada! <<");
            consultas[*qtdConsultas].data = (char*)calloc(MAXTAM, sizeof(char));
            consultas[*qtdConsultas].animal = &(animais[posAni]);
            consultas[*qtdConsultas].veterinario = &(veterinarios[posVet]);
            consultas[*qtdConsultas].data = dataConsulta;
            consultas[*qtdConsultas].horario = horaConsulta;
            (*qtdConsultas)++;
            free(dataConsulta);
            dataConsulta = NULL;
        } else{
            free(dataConsulta);
            dataConsulta = NULL;
            printf("\n\n\t >> Horario indisponivel <<");
            printf("\n| Buscar novo horario..:\t1 |");
            printf("\n| Sair.................:\t0 |");
            printf("\n| Opcao selecionada: ");
            scanf("%d", &resp);
            if(resp == 0) return;
        }
    } while(resp!=0);
}   // Fim Questão 07

    // Inicio Questão 08
void visualizarAgenda(Consulta consultas[], int qtdConsultas, Animal animais[]){
    char *data_Agenda = (char*)calloc(MAXTAM, sizeof(char));
    int achou = 0;
    printf("\n\t>> Agenda <<");
    printf("\n| Data da consulta: ");
    fflush(stdin);
    gets(data_Agenda);

    for(int i=0; i<qtdConsultas; i++)
        if(strcmp(consultas[i].data, data_Agenda) == 0){
            printf("\n\n**************************************");
            printf("\n| Data.........:\t%s", consultas[i].data);
            printf("\n| Hora.........:\t%d", consultas[i].horario);
            printf("\n| Animal.......:\t%s", consultas[i].animal->nome);
            printf("\n| Veterinario..:\t%s", consultas[i].veterinario->nome);
            printf("\n| Dono.........:\t%s", consultas[i].animal->dono->nome);
            achou++;
        }

    free(data_Agenda);
    data_Agenda = NULL;

    if(achou == 0)
        printf("\n\t>> Sem consultas nesta data <<");
}   // Fim Questão 08

    // Inicio Questão 09
int main(){
   Dono donos[TARRAY];
   Animal animais[TARRAY];
   Veterinario veterinarios[TARRAY];
   Consulta consultas[TARRAY];
   int resp, qtdDonos = 0, qtdAnimais = 0, qtdVeterinarios = 0, qtdConsultas = 0;
   char *nome_doDono, *nome_doVeterinario, *nome_doAnimal;

    do{
        printf("\n\n**************************************");
        printf("\n\t>> DIGITE A OPCAO <<");
        printf("\n| Sair......................:\t 0 |");
        printf("\n| Cadastrar dono............:\t 1 |");
        printf("\n| Cadastrar animal..........:\t 2 |");
        printf("\n| Cadastrar veterinario.....:\t 3 |");
        printf("\n| Buscar dono...............:\t 4 |");
        printf("\n| Buscar animal.............:\t 5 |");
        printf("\n| Buscar veterinario........:\t 6 |");
        printf("\n| Agendar consulta..........:\t 7 |");
        printf("\n| Visualizar agenda do dia..:\t 8 |");
        printf("\n| Opcao selecionada: ");
        scanf("%d", &resp);
        printf("\n**************************************\n\n");
        switch (resp){
            case 0:
            break;    

            case 1:
                cadastrarDono(donos, &qtdDonos);
            break;
            
            case 2:
                cadastrarAnimal(animais, &qtdAnimais, donos, qtdDonos);
            break;

            case 3:
                cadastrarVeterinario(veterinarios, &qtdVeterinarios);
            break;

            case 4:;
                nome_doDono = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n\t>> Buscar Dono << ");
                printf("\n| Nome: ");
                fflush(stdin);
                gets(nome_doDono);

                int DonoNoArray = buscarDono(donos, qtdDonos, nome_doDono);

                if(DonoNoArray != -1){
                    printf("| Posicao do dono \"%s\" no array: %d", nome_doDono, DonoNoArray);
                    imprimeDono(donos[DonoNoArray]);
                    printf("\n");
                    system("PAUSE");
                } else
                    printf("| \"%s\" nao encontrado em \"donos\": %d", nome_doDono, DonoNoArray);
                
                free(nome_doDono);
                nome_doDono = NULL;
            break;    

            case 5:;
                nome_doAnimal = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n\t>> Buscar Animal <<");
                printf("\n| Nome: ");
                fflush(stdin);
                gets(nome_doAnimal);

                int AnimalNoArray = buscarAnimal(animais, qtdAnimais, nome_doAnimal);

                if(AnimalNoArray != -1){
                    printf("| Posicao do animal \"%s\" no array: %d", nome_doAnimal, AnimalNoArray);
                    imprimeAnimal(animais + AnimalNoArray);
                    printf("\n");
                    system("PAUSE");
                } else
                    printf("\n| Animal \"%s\" nao encontrado no array: %d", nome_doAnimal, AnimalNoArray);

                free(nome_doAnimal);
                nome_doAnimal = NULL;
            break;    

            case 6:;
                nome_doVeterinario = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n\t>> Buscar Veterinario <<");
                printf("\n| Nome: ");
                fflush(stdin);
                gets(nome_doVeterinario);

                int VeterinarioNoArray = buscarVeterinario(veterinarios, qtdVeterinarios, nome_doVeterinario);

                if(VeterinarioNoArray != -1){
                    printf("| Posicao do veterinario \"%s\" no array: %d", nome_doVeterinario, VeterinarioNoArray);
                    imprimeVeterinario(veterinarios + VeterinarioNoArray);
                    printf("\n");
                    system("PAUSE");
                } else
                    printf("| \"%s\" nao encontrado em \"veterinarios\": %d", nome_doVeterinario, VeterinarioNoArray);

                free(nome_doVeterinario);
                nome_doVeterinario = NULL;
            break;    

            case 7:
                agendarConsulta(consultas, &qtdConsultas, animais, veterinarios, qtdAnimais, qtdVeterinarios);
            break;    

            case 8:
                visualizarAgenda(consultas, qtdConsultas, animais);
                printf("\n**************************************");
                printf("\n");
                system("PAUSE");
            break;    

            default:
                printf("\n>>> Por favor, digite uma opção válida <<<");
        }
    }while (resp != 0);
    return 1;
}   // Fim Questão 09