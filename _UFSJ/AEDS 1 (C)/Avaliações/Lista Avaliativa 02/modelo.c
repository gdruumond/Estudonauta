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
void main();

    // Inicio Questão 02
void imprimeDono(Dono dono){
    printf("\n\n\t>> Dados do Dono <<");
    printf("\n| Nome: %s", dono.nome);
    printf("\n| Telefone: %s\n", dono.telefone);
}

void imprimeVeterinario(Veterinario *veterinario){
    printf("\n\n\t>> Dados do Veterinario <<");
    printf("\n| Nome: %s", veterinario->nome);
    printf("\n| CFMV: %s\n", veterinario->CFMV);
} 

void imprimeAnimal(Animal *animal){
    printf("\n\n\t>> Dados do Animal <<");
    printf("\n| Nome: %s", animal->nome);
    printf("\n| Idade: %s", animal->idade);
    printf("\n| Peso: %.2f", animal->peso);
    printf("\n| Dono: %s", animal->dono->nome);
}   // Fim Questão 02

    // Inicio Questão 03
int buscarDono(Dono donos[], int qtdDonos, char *nomeDoDono){
    int j=0;

    for(int i=0; i<qtdDonos; i++)
        if(strcmp(donos[i].nome, nomeDoDono) == 0)
                return i;
        else
                j++;

        if(j==qtdDonos)
            return -1;
}

int buscarAnimal(Animal animais[], int qtdAnimais, char* nomeDoAnimal){
    int j=0;

    for(int i=0; i<qtdAnimais; i++)
        if(strcmp(animais[i].nome, nomeDoAnimal) == 0)
           return i;
        else
            j++;

    if(j==qtdAnimais)
        return -1;
}

int buscarVeterinario(Veterinario veterinarios[], int qtdVeterinarios, char* nomeDoVeterinario){
    int j=0;

   for(int i=0; i<qtdVeterinarios; i++)
       if(strcmp(veterinarios[i].nome, nomeDoVeterinario) == 0)
             return i;
       else
            j++;

    if(j==qtdVeterinarios)
        return -1;
} // Fim questão 03

    // Inicio Questão 04
void cadastrarDono(Dono donos[], int *qtdDonos){

    if(*qtdDonos != TARRAY){
        donos[*qtdDonos].nome = (char*)calloc(MAXTAM, sizeof(char));
        donos[*qtdDonos].telefone = (char*)calloc(MAXTAM, sizeof(char));
        printf("\n>> Cadastro de Dono << ");
        printf("\n| Nome: ");
        scanf(" ");
        gets(donos[*qtdDonos].nome);
        printf("| Telefone: ");
        scanf(" ");
        gets(donos[*qtdDonos].telefone);
        (*qtdDonos)++;
    } else
        printf("\n\n>> Limite de donos atingido");
}

void cadastrarVeterinario(Veterinario veterinarios[], int *qtdVeterinarios){    
    if(*qtdVeterinarios != TARRAY){
        veterinarios[*qtdVeterinarios].nome = (char*)calloc(MAXTAM, sizeof(char));

        printf("\n>> Cadastro Veterinario << ");
        printf("\n| Nome: ");
        scanf(" ");
        gets(veterinarios[*qtdVeterinarios].nome);
        printf("| CFMV: ");
        scanf("%d", &veterinarios[*qtdVeterinarios].CFMV);
        (*qtdVeterinarios)++;
    } else
        printf("\nLimite atingido, não é possível cadastrar mais");
} // Fim Questão 04

    // Inicio Questão 05
void cadastrarAnimal(Animal animais[], int *qtdAnimais, Dono donos[], int qtdDonos){
    int ultimo, contador, resp, encontrado = 0;
    char *nome_doDono = (char*)calloc(MAXTAM, sizeof(char));

    for(int i=0; i<TARRAY; i++){ // verifica se tem espaço no array
        if (animais[i].nome != NULL){
            ultimo = i;
            contador++;
        }
    }

    do{
        if(*qtdAnimais != TARRAY){
            printf("\n\t>> Cadastro Animal");
            printf("\n| Nome do dono: ");
            scanf(" ");
            gets(nome_doDono);
            
            encontrado = buscarDono(donos, qtdDonos, nome_doDono);

            if(encontrado != -1){
                animais[ultimo+1].nome = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n\t>> Cadastro do Animal <<");
                printf("\n| Nome: ");
                scanf(" ");
                gets(animais[ultimo+1].nome);
                printf("| Idade: ");
                scanf("%d", &animais[ultimo+1].idade);
                printf("\n| Peso: ");
                scanf("%f", &animais[ultimo+1].peso);
                printf("\n| Nome do dono: ");
                scanf(" ");
                gets(animais[ultimo+1].dono->nome);
                (*qtdAnimais)++;
            } else{
                printf("\n\t>> Dono nao encontrado");
                printf("\n| Buscar outro dono.......:\t1");
                printf("\n| Sair....................:\t0");
                printf("\n| Opcao selecionada: ");
                scanf("%d", &resp);
                if(resp == 0) return;
            }
        }
    } while(resp != 0);

    if(contador == TARRAY)
        printf("\n\t>> Limite de animais atingido");
}   // Fim Questão 05

    // Inicio Questão 06
int horarioDisponivel(Consulta consultas[], int *qtdConsultas, char *data, int horario, int i){
    if(strcmp(consultas[i].data, data) == 0 && consultas[i].horario == horario)
        return 0;        

    if (i == *qtdConsultas)
        return 1; 

    if(consultas[i].data != data && consultas[i].horario != horario)
        return horarioDisponivel(consultas, qtdConsultas, data, horario, i+1);
}   // Fim Questão 06 

    // Inicio Questão 07
void agendarConsulta(Consulta consultas[], int *qtdConsultas, Animal animais[], Veterinario veterinarios[], int qtdAnimais, int qtdVeterinarios){
    int ultimoAnimal, ultimaConsulta, ultimoVeterinario;
    int contadorAnimal, contadorConsulta, contadorVeterinario;
    int contador2, resp, resp2 = 0, horaConsulta, horaVaga;
    int posicaoAnimal=0;
    int posicaoVeterinario=0;
    char *nome_doVeterinario = (char*)calloc(MAXTAM, sizeof(char));
    char *nome_doAnimal = (char*)calloc(MAXTAM, sizeof(char));
    char *dataConsulta = (char*)calloc(MAXTAM, sizeof(char));

    for(int i=0; i<TARRAY; i++)
        if (animais[i].nome != NULL){
            ultimoAnimal = i;
            contadorAnimal++;
        }

    for(int i=0; i<TARRAY; i++)
        if (consultas[i].data != NULL){
            ultimaConsulta = i;
            contadorConsulta++;
        }

    for(int i=0; i<TARRAY; i++)
        if (veterinarios[i].nome != NULL){
            ultimoVeterinario = i;
            contadorVeterinario++;
        }

    if(contadorAnimal != TARRAY){
        printf("\n\n>> Agendamento de Consulta ");
        printf("\n| Nome do veterinario: ");
        scanf(" ");
        gets(nome_doVeterinario);
    
        for(int i=0; i<contadorVeterinario; i++)
            if(strcmp(veterinarios[i].nome, nome_doVeterinario) != 0)
                contador2++;
            else
                 posicaoVeterinario = i;

        if(contador2 == contadorVeterinario){
            printf("\n\n|\t >> Veterinario não encontrado");
            printf("\n| Continuar busca de veterinario..:\t1 |");
            printf("\n| Sair............................:\t0 |");
            printf("\n| Opcao selecionada: ");
            scanf("%d", &resp);
            if(resp == 0) return;
            if(resp == 1) return agendarConsulta(consultas, qtdConsultas, animais, veterinarios, qtdAnimais, qtdVeterinarios);
            
        } else{
            do{
                contador2 = 0;
                printf("\n| Nome do animal: ");
                scanf(" ");
                gets(nome_doAnimal); 

                for(int i=0; i<contadorAnimal; i++){
                    if(animais[i].nome != nome_doAnimal)
                        contador2++;
                    else posicaoAnimal = i;
                    
                    if(contador2 == contadorAnimal){
                        printf("\n\n|\t >> Animal não encontrado");
                        printf("\n| Continuar busca de Animal..:\t1 |");
                        printf("\n| Sair........................:\t0 |");
                        printf("\n| Opcao selecionada: ");
                        scanf("%d", &resp);
                        if(resp == 0) return;
                    } else{
                        do{
                            printf("\n\n|\t >> Agendar Consulta");
                            printf("\n| Data: ");
                            scanf(" ");
                            gets(dataConsulta);
                            printf("\n| Hora: ");
                            scanf("%d", &horaConsulta);

                            horaVaga = horarioDisponivel(consultas, qtdConsultas, dataConsulta, horaConsulta, 0);

                            if(horaVaga){
                                printf("\n\n|\t >> Consulta marcada!");
                                printf("\n| Data: %s", dataConsulta);
                                printf("\n| Horario: %d", horaConsulta);
                                printf("\n| Animal: %s", nome_doAnimal);
                                printf("\n| Veterinario: %s", nome_doVeterinario);

                                consultas[ultimaConsulta+1].animal = &animais[posicaoAnimal];
                                consultas[ultimaConsulta+1].veterinario = &veterinarios[posicaoVeterinario];

                                /* consultas[ultimaConsulta+1].animal->dono = animais[posicaoAnimal].dono;
                                consultas[ultimaConsulta+1].animal->idade = animais[posicaoAnimal].idade;
                                consultas[ultimaConsulta+1].animal->nome = animais[posicaoAnimal].nome;
                                consultas[ultimaConsulta+1].animal->peso = animais[posicaoAnimal].peso; */
                                consultas[ultimaConsulta+1].data = dataConsulta;
                                consultas[ultimaConsulta+1].horario = horaConsulta;
                                /* consultas[ultimaConsulta+1].veterinario->CFMV = veterinarios[posicaoVeterinario].CFMV;
                                consultas[ultimaConsulta+1].veterinario->nome = veterinarios[posicaoVeterinario].nome; */
                                (*qtdConsultas)++;

                            } else{
                                printf("\n\n|\t >> Horario indisponivel");
                                printf("\n| Buscar novo horario..:\t1 |");
                                printf("\n| Sair.................:\t0 |");
                                printf("\n| Opcao selecionada: ");
                                scanf("%d", &resp2);
                                if(resp2 == 0) return;
                            }
                        }while(resp2 != 0);
                    }
                }
            } while(resp != 0);
        }

    } else
        printf("\n|\t >> Limite de animais atingido, não é possível cadastrar mais ");
}   // Fim Questão 07

    // Inicio Questão 08
void visualizarAgenda(Consulta consultas[], int qtdConsultas, Animal animais[]){
    // Esta função solicita uma data (string) e imprime a data,hora e os nomes do veterinário, animal e donodas consultas naquela data, conforme o exemplo mostrado abaixo em que aparecem 2 consultas.
    char *data_Agenda = (char*)calloc(MAXTAM, sizeof(char));
    int achou = 0;

    printf("\n\n\t>> Agenda <<");
    printf("\n| Data da consulta: ");
    scanf(" ");
    gets(data_Agenda);

    for(int i=0; i<qtdConsultas; i++)
        if(consultas[i].data == data_Agenda){
            printf("\n\n*****************************");
            printf("\n| Data.........:\t\t%s", consultas[i].data);
            printf("\n| Hora.........:\t\t%d", consultas[i].horario);
            printf("\n| Veterinario..:\t\t%s", consultas[i].veterinario->nome);
            printf("\n| Animal.......:\t\t%s", consultas[i].animal->nome);
            printf("\n| Dono.........:\t\t%s", consultas[i].animal->dono->nome);

            achou++;
        }

    if(!achou)
        printf("\n\t>> Sem consultas nessa data <<");
}   // Fim Questão 08

    // Inicio Questão 09
void main(){
   Dono donos[TARRAY] = {};
   Animal animais[TARRAY] = {};
   Veterinario veterinarios[TARRAY] = {};
   Consulta consultas[TARRAY] = {};
   int resp, i = 0;
   int qtdDonos = 0, qtdAnimais = 0, qtdVeterinarios = 0, qtdConsultas = 0;
   char *nome_doDono, *nome_doVeterinario, *nome_doAnimal;

    do{
        do{
            printf("\n\n**************************************");
            printf("\n\t>>DIGITE A OPCAO<<");
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
        } while(0);
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

                printf("\n>> Buscar Dono << ");
                printf("\n| Nome: ");
                scanf(" ");
                gets(nome_doDono);

                int DonoNoArray = buscarDono(donos, qtdDonos, nome_doDono);

                if(DonoNoArray != -1){
                    printf("| Posicao do dono \"%s\" no array: %d", nome_doDono, DonoNoArray);
                    imprimeDono(donos[DonoNoArray]);
                    system("PAUSE");
                } else
                    printf("| \"%s\" nao encontrado em \"donos\": %d", nome_doDono, DonoNoArray);
            break;    

            case 5:;
                nome_doAnimal = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n\n>> Buscar Animal << ");
                printf("\n| Nome: ");
                scanf(" ");
                gets(nome_doAnimal);

                int AnimalNoArray = buscarAnimal(animais, qtdAnimais, nome_doAnimal);

                if(AnimalNoArray != -1){
                    printf("\n| Posicao do animal \"%s\" no array: %d", nome_doAnimal, AnimalNoArray);
                    imprimeAnimal(animais + AnimalNoArray);
                    system("PAUSE");
                } else
                    printf("\n| Animal \"%s\" nao encontrado no array: %d", nome_doAnimal, AnimalNoArray);
            break;    

            case 6:;
                nome_doVeterinario = (char*) calloc(MAXTAM, sizeof(char));

                printf("\n\n>> Buscar Veterinario << ");
                printf("\n| Nome: ");
                scanf(" ");
                gets(nome_doVeterinario);

                int VeterinarioNoArray = buscarVeterinario(veterinarios, qtdVeterinarios, nome_doVeterinario);

                if(VeterinarioNoArray != -1){
                    printf("| Posicao do veterinario \"%s\" no array: %d", nome_doVeterinario, VeterinarioNoArray);
                    imprimeVeterinario(veterinarios + VeterinarioNoArray);
                    system("PAUSE");
                } else
                    printf("| \"%s\" nao encontrado em \"veterinarios\": %d", nome_doVeterinario, VeterinarioNoArray);
            break;    

            case 7:
                agendarConsulta(consultas, &qtdConsultas, animais, veterinarios, qtdAnimais, qtdVeterinarios);
            break;    

            case 8:
                visualizarAgenda(consultas, qtdConsultas, animais);
                printf("\n*****************************");
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
    */