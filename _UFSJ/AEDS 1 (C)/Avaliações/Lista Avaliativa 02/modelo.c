/*  Autores do arquivo:
        - Gabriel Augusto Drumond
        - Rian Wagner Costa         */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXTAM 50
#define TARRAY 10

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
int horarioDisponivel(Consulta[], int, char*, int, int);
void agendarConsulta(Consulta[], int*, Animal[], Veterinario[], int, int);
void visualizarAgenda(Consulta[], int, Animal[]);
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
    
    // Inicio Questão 02
void imprimeDono(Dono *dono){
    printf("\n\t>> Dados do Dono <<");
    printf("\n| Nome: %s", dono->nome);
    printf("\n| Telefone: %s\n", dono->telefone);
}

void imprimeVeterinario(Veterinario *veterinario){
    printf("\n\t>> Dados do Veterinario <<");
    printf("\n| Nome: %s", veterinario->nome);
    printf("\n| CFMV: %s\n", veterinario->CFMV);
} 

void imprimeAnimal(Animal *animal){
    printf("\n\t>> Dados do Animal <<");
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
   int j;

   for(int i=0; i<qtdDonos; i++){
       if(donos[i].nome == nomeDoDono){
           return i;
       }
   } else{
       j++;
   } 

    if(j==qtdDonos){
        return -1;
    }

}

int buscarAnimal(Animal animais[], int qtdAnimais, char *nomeDoAnimal){
    int j;

   for(int i=0; i<qtdAnimais; i++){
       if(animais[i].nome == nomeDoAnimal){
           return i;
       }
   } else{
       j++;
   } 

    if(j==qtdAnimais){
        return -1;
    }
}

int buscarVeterinario(Veterinario veterinarios[], int qtdVeterinarios, char *nomeDoVeterinario){
    int j;

   for(int i=0; i<qtdVeterinarios; i++){
       if(veterinarios[i].nome == nomeDoVeterinario){
           return i;
       }
   } else{
       j++;
   } 

    if(j==qtdVeterinarios){
        return -1;
    }
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
    int ultimo, contador, encontrado = 0;
    char *nome_doDono = (char*)calloc(MAXTAM, sizeof(char));

    for(int i=0; i<TARRAY; i++) // verifica se tem espaço no array
        if (animais[i].nome != NULL){
            ultimo = i;
            contador++;
        }

    do{
        if(contador != TARRAY){
            printf("\n\t>> Dados do dono");
            printf("\n| Nome: ");
            scanf(" ");
            gets(nome_doDono);

            for(int j = 0; j<qtdDonos; j++){
                if(donos[i].nome == nome_doDono){
                    encontrado = 1;
                }
            }
            
            if(encontrado){
                printf("\n\t>> Cadastro do Animal <<");
                printf("\n| Nome: ");
                scanf(" ");
                gets(animais[ultimo].nome)
                printf("\n| Idade: ")
                scanf("%d", &animais[ultimo].idade)
                printf("\n| Peso: ");
                scanf("%d", &animais[ultimo].peso)
                printf("\n| Nome do dono: ");
                scanf(" ");
                gets(animais[ultimo].dono);
                (*qtdAnimais)++;
            } else{
                printf("\n\t>> Dono não foi encontrado");
                printf("\n| Continuar busca pelo dono..:\t1");
                printf("\n| Sair.......................:\t0");
                if(resp == 0) return;
            }
    } while(resp != 0);

    } else{
        printf("\n\t>> Limite atingido, não é possível cadastrar mais animais");
        return;
    }
}   // Fim Questão 05

    // Inicio Questão 06
int horarioDisponivel(Consulta consultas[], int qtdConsultas, char *data, int horario, int i){
    if(consultas[i].data == data && consultas[i].horario == horario){
        return 0;        
    }
    if (i == qtdConsultas){
        return 1; 
    }
    if(consultas[i].data != data && consultas[i].horario != horario){
        return horarioDisponivel(consultas, qtdConsultas, data, horario, i+1);
    }
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
    int ultimoAnimal, ultimaConsulta, ultimoVeterinario;
    int contadorAnimal, contatorConsulta, contadorVeterinario
    int contador2, contador3, resp, resp2 = 0, horaConsulta;
    int posicaoAnimal; posicaoVeterinario;
    char *nome_doVeterinario = (char*)calloc(MAXTAM, sizeof(char));
    char *nome_doAnimal = (char*)calloc(MAXTAM, sizeof(char);
    char *dataConsulta = (char*)calloc(MAXTAM, sizeof(char);

    for(int i=0; i<TARRAY; i++){
        if (animais[i].nome != NULL){
            ultimoAnimal = i;
            contadorAnimal++;
        }
    }

    for(int i=0; i<TARRAY; i++){
        if (consultas[i].data != NULL){
            ultimaConsulta = i;
            contadorConsulta++;
        }
    }

    for(int i=0; i<TARRAY; i++){
        if (veterinarios[i].nome != NULL){
            ultimoVeterinario = i;
            contadorVeterinario++;
        }
    }

    if(contadorAnimal != TARRAY){
        printf("\n| Nome do veterinario: ");
        scanf(" ");
        gets(nome_doVeterinario);
    
        for(int i=0; i<contadorVeterinario; i++){
            if(veterinarios[i].nome != nome_doVeterinario){
                contador2++;
            } else{
                 posicaoVeterinario = i;
            }
        }

        if(contador2 == contadorVeterinario){
            printf("\n|\t >> Veterinario não encontrado");
            printf("\n| Continuar busca de veterinario..:\t1 |");
            printf("\n| Sair............................:\t0 |");
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
                        printf("\n|\t >> Animal não encontrado");
                        printf("\n| Continuar busca de Animal..:\t1 |");
                        printf("\n| Sair........................:\t0 |");
                        scanf("%d", &resp);
                        if(resp == 0) return;
                    } else{
                        do{
                            printf("\n|\t >> Agendar Consulta");
                            printf("\n| Data: ");
                            scanf(" ");
                            gets(dataConsulta);
                            printf("\n| Hora: ");
                            scanf("%d", horaConsulta);

                            horaVaga = horarioDisponivel(consultas, *qtdConsultas, dataConsulta, horaConsulta, 0);

                            if(horaVaga){
                                printf("\n|\t >> Consulta marcada!");
                                printf("\n| Data: %s", dataConsulta);
                                printf("\n| Horario: %d", horaConsulta);
                                printf("\n| Animal: %s", nome_doAnimal);
                                printf("\n| Veterinario: %s", nome_doVeterinario);

                                consultas[ultimaConsulta+1].animal = animais[posicaoAnimal];
                                consultas[ultimaConsulta+1].data = dataConsulta;
                                consultas[ultimaConsulta+1].horario = horaConsulta;
                                consultas[ultimaConsulta+1].veterinario = veterinarios[posicaoVeterinario];
                                (*qtdConsultas)++;

                            } else{
                                printf("\n|\t >> Horario indisponivel");
                                printf("\n| Buscar novo horario..:\t1 |");
                                printf("\n| Sair.................:\t0 |");
                                scanf("%d", &resp2);
                                if(resp2 == 0) return;
                            }
                        }while(resp2 != 0);

                    } while(resp != 0)
                }
            } while(resp != 0);

            if(contador2 == contador){
                printf("\n|\t >> Animal não encontrado");
                printf("\n| Continuar busca de Animal..:\t1 |");
                printf("\n| Sair.......................:\t0 |");
                scanf("%d", &resp);
            }
        }

    } else{
        printf("\n|\t >> Limite atingido, não é possível cadastrar mais animais/ consultas");
        return;

    }
}   // Fim Questão 07

    // Inicio Questão 08
void visualizarAgenda(Consulta consultas[], int qtdConsultas, Animal animais[]){
    // Esta função solicita uma data (string) e imprime a data,hora e os nomes do veterinário, animal e donodas consultas naquela data, conforme o exemplo mostrado abaixo em que aparecem 2 consultas.
    char *data_Agenda = (char*)calloc(MAXTAM, sizeof(char));
    int achou = 0;

    printf("\n\t>> Agenda <<");
    printf("\n| Data da consulta: ");
    scanf(" ");
    gets(dataAgenda);

    for(int i=0; i<qtdConsultas; i++){
        if(consultas[i].data == data_Agenda){
            printf("\n\n*****************************");
            printf("\n| Data.........:\t\t%s", consultas[i].data);
            printf("\n| Hora.........:\t\t%d", consultas[i].horario);
            printf("\n| Veterinario..:\t\t%s", consultas[i].veterinario->nome);
            printf("\n| Animal.......:\t\t%s", consultas[i].animal->nome);
            printf("\n| Dono.........:\t\t%s", consultas[i].animal->dono->nome);

            achou++;
        }
    }

    if(!achou){
        printf("\n\t>> Sem consultas nessa data <<");
    }


    printf("\n\n***************************");
    printf("\n Data.........:\t\t%s\t|");
    printf("\n Hora.........:\t\t\t%s\t|");
    printf("\n Veterinario..:\t\t%s\t|");
    printf("\n Animal.......:\t\t%s|");
}   // Fim Questão 08

    // Inicio Questão 09
void main(){
   Dono donos[TARRAY] = {};
   Animal animais[TARRAY] = {};
   Veterinario veterinarios[TARRAY] = {};
   Consulta consultas[TARRAY] = {};
   int resp, i = 0;
   int qtd_Donos = 0, qtd_Animais = 0, qtd_Veterinarios = 0, qtd_Consultas = 0;
   int *qtdDonos = &qtd_Donos, *qtdAnimais = &qtd_Animais, *qtdVeterinarios = &qtd_Veterinarios, *qtdConsultas = &qtd_Consultas;


    do{
        do{
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
        } while(0);
        scanf("%d", &resp);
        printf("\n**************************************\n\n");
        switch (resp){
            case 0:
            break;    

            case 1:  // OK
                cadastrarDono(donos, qtdDonos);
            break;
            
            case 2: // OK
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

                printf("\n>> Buscar Animal << ");
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

            case 7: // OK
                char *data = (char*)calloc(MAXTAM, sizeof(char));
                char *horario = (char*)calloc(MAXTAM, sizeof(char));

                horarioDisponivel(consultas, qtd_Consultas, data, horario, 0); // 0 se horario indisponivel, 1 se esta disponivel
                agendarConsulta(consultas, qtdConsultas, animais, veterinarios, qtd_Animais, qtd_Veterinarios);
            break;    

            case 8: // OK
                visualizarAgenda(consultas, qtd_Consultas);
                printf("\n\n*****************************");
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