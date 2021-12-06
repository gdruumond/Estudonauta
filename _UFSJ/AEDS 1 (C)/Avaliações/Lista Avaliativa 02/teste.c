#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXTAM 50
#define TARRAY 10


typedef struct{
    char nome[20];
    char telefone[20];
} Dono;

typedef struct{
    char nome[20];
    int idade;
    float peso;
    Dono dono;
} Animal;

typedef struct{
    char nome[20];
    int CFMV;
} Veterinario;

typedef struct{
    char data[20];
    int horario;
    Animal *animal;
    Veterinario *veterinario;
} Consulta;
    
void imprimeDono(Dono*);
void imprimeVeterinario(Veterinario*);
void imprimeAnimal(Animal*);
int buscarDono(Dono[], int, char);
int buscarAnimal(Animal[], int, char);
int buscarVeterinario(Veterinario[], int, char);
void cadastrarDono(Dono[], int*);
void cadastrarVeterinario(Veterinario[], int*);
void cadastrarAnimal(Animal[], int*, Dono[], int);
int horarioDisponivel(Consulta[], int, char, int, int);
void agendarConsulta(Consulta[], int*, Animal[], Veterinario[], int, int);
void visualizarAgenda(Consulta[], int, Animal[]);
void main();

void imprimeDono(Dono *dono){
    printf("\n\n\t>> Dados do Dono <<");
    printf("\n| Nome: %s", dono->nome);
    printf("\n| Telefone: %s\n", dono->telefone);
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
    printf("\n| Dono: %s", animal->dono.nome);
}  

/* int buscarDono(Dono donos[], int qtdDonos, char nomeDoDono){
    int j=0;

    for(int i=0; i<qtdDonos; i++)
        if(strcmp(donos[i].nome, nomeDoDono) == 0)
                return i;
        else
                j++;

        if(j==qtdDonos)
            return -1;
}

int buscarAnimal(Animal animais[], int qtdAnimais, char nomeDoAnimal){
    int j=0;

    for(int i=0; i<qtdAnimais; i++)
        if(strcmp(animais[i].nome, nomeDoAnimal) == 0)
           return i;
        else
            j++;

    if(j==qtdAnimais)
        return -1;
}

int buscarVeterinario(Veterinario veterinarios[], int qtdVeterinarios, char nomeDoVeterinario){
    int j=0;

   for(int i=0; i<qtdVeterinarios; i++)
       if(strcmp(veterinarios[i].nome, nomeDoVeterinario) == 0)
             return i;
       else
            j++;

    if(j==qtdVeterinarios)
        return -1;
}

int horarioDisponivel(Consulta consultas[], int qtdConsultas, char data, int horario, int i){
    if(strcmp(consultas[i].data, data) == 0 && strcmp(consultas[i].horario, horario) == 0)
        return 0;        

    if (i == qtdConsultas)
        return 1; 

    if(consultas[i].data != data && consultas[i].horario != horario)
        return horarioDisponivel(consultas, qtdConsultas, data, horario, i+1);
} 
 */
void visualizarAgenda(Consulta consultas[], int qtdConsultas, Animal animais[]){
    char data_Agenda[20];
    int achou = 0;

    printf("\n\n\t>> Agenda <<");
    printf("\n| Data da consulta: ");
    scanf(" %s", data_Agenda);

    for(int i=0; i<qtdConsultas; i++)
        if(consultas[i].data == data_Agenda){
            printf("\n\n*****************************");
            printf("\n| Data.........:\t\t%s", consultas[i].data);
            printf("\n| Hora.........:\t\t%d", consultas[i].horario);
            printf("\n| Veterinario..:\t\t%s", consultas[i].veterinario->nome);
            printf("\n| Animal.......:\t\t%s", consultas[i].animal->nome);
            printf("\n| Dono.........:\t\t%s", consultas[i].animal->dono.nome);

            achou++;
        }

    if(!achou)
        printf("\n\t>> Sem consultas nessa data <<");
}

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
        
        if(resp == 0) return;    

         if(resp == 1){
            int contador, ultimo;

            for(int i=0; i<TARRAY; i++)
                if (donos[i].nome != NULL){
                    ultimo = i;
                    contador++;
                }
            
            if(contador != TARRAY){
                donos[ultimo+1].nome[20];;
                donos[ultimo+1].telefone[20];

                printf("\n\n>> Cadastro do dono << ");
                printf("\n| Nome: ");
                scanf(" %s", donos[ultimo+1].nome);
                printf("\n| Telefone: ");
                scanf(" %s", donos[ultimo+1].telefone);
                (*qtdDonos)++;
            } else
                printf("\n\n>> Limite de donos atingido");
         }

         if(resp == 2){
            int ultimo, contador, resp, encontrado = 0;
            char nome_doDono[20];

            for(int i=0; i<TARRAY; i++){ // verifica se tem espaço no array
                if (animais[i].nome != NULL){
                    ultimo = i;
                    contador++;
                }
            }

            do{
                if(contador != TARRAY){
                    printf("\n\n\t>> Dados do dono");
                    printf("\n| Nome: ");
                    scanf(" %s", nome_doDono);
                    
                    encontrado = buscarDono(donos, qtd_Donos, nome_doDono);

                    if(encontrado != -1){
                        animais[ultimo+1].nome[20];

                        printf("\n\n\t>> Cadastro do Animal <<");
                        printf("\n| Nome: ");
                        scanf(" %s", animais[ultimo+1].nome);
                        printf("\n| Idade: ");
                        scanf("%d", &animais[ultimo+1].idade);
                        printf("\n| Peso: ");
                        scanf("%f", &animais[ultimo+1].peso);
                        printf("\n| Nome do dono: ");
                        scanf(" %s", animais[ultimo+1].dono.nome);
                        (*qtdAnimais)++;
                    } else{
                        printf("\n\t>> Dono não foi encontrado");
                        printf("\n| Continuar busca pelo dono..:\t1");
                        printf("\n| Sair.......................:\t0");
                        if(resp == 0) return;
                    }
                }
            } while(resp != 0);

            if(contador == TARRAY)
                printf("\n\t>> Limite de animais atingido");
         }

         if(resp == 3){
             int contador, ultimo;

            for(int i=0; i<TARRAY; i++) //verifica se tem espaço no array
                if (veterinarios[i].nome != NULL){
                    ultimo = i;
                    contador++;
                }
            
            if(contador != TARRAY){
                veterinarios[ultimo+1].nome[20];

                printf("\n>> Cadastro de Veterinario << ");
                printf("\n| Nome: ");
                scanf(" %s", veterinarios[ultimo+1].nome);
                printf("\n| CFMV: ");
                scanf("%d", &veterinarios[ultimo+1].CFMV);
                (*qtdVeterinarios)++;
            } else
                printf("\nLimite atingido, não é possível cadastrar mais");
         }

         if(resp == 4){
             char nome_doDono[20];

            printf("\n\n>> Buscar Dono << ");
            printf("\n| Nome: ");
            scanf(" %s", nome_doDono);

    /*         int DonoNoArray = buscarDono(donos, qtd_Donos, nome_doDono);

            if(DonoNoArray != -1){
                printf("\n| Posicao do dono \"%s\" no array: %d", nome_doDono, DonoNoArray);
                imprimeDono(donos + DonoNoArray);
                system("PAUSE");
            } else
                printf("\n| Dono \"%s\" nao encontrado no array: %d", nome_doDono, DonoNoArray); */
         }

         if(resp == 5){
             char nome_doAnimal[20];

            printf("\n\n>> Buscar Animal << ");
            printf("\n| Nome: ");
            scanf(" %s", nome_doAnimal);

/*            int AnimalNoArray = buscarAnimal(animais, qtd_Animais, nome_doAnimal);

            if(AnimalNoArray != -1){
                printf("\n| Posicao do animal \"%s\" no array: %d", nome_doAnimal, AnimalNoArray);
                imprimeDono(animais + AnimalNoArray);
                system("PAUSE");
            } else
                printf("\n| Animal \"%s\" nao encontrado no array: %d", nome_doAnimal, AnimalNoArray); */
         }

         if(resp == 6){
             char nome_doVeterinario[20];

            printf("\n\n>> Buscar Veterinario << ");
            printf("\n| Nome: ");
            scanf(" %s", nome_doVeterinario);

           /* int VeterinarioNoArray = buscarVeterinario(animais, qtd_Veterinarios, nome_doVeterinario);

            if(VeterinarioNoArray != -1){
                printf("\n| Posicao do veterinario \"%s\" no array: %d", nome_doVeterinario, VeterinarioNoArray);
                imprimeDono(veterinarios + VeterinarioNoArray);
                system("PAUSE");
            } else
                printf("\n| Veterinario \"%s\" nao encontrado no array: %d", nome_doVeterinario, VeterinarioNoArray); */
         }

         if(resp == 7){
             int ultimoAnimal, ultimaConsulta, ultimoVeterinario;
            int contadorAnimal, contadorConsulta, contadorVeterinario;
            int contador2, contador3, resp, resp2 = 0, horaConsulta, horaVaga;
            int posicaoAnimal=0;
            int posicaoVeterinario=0;
            char nome_doVeterinario[20], nome_doAnimal[20], dataConsulta[20];

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
                scanf(" %s", nome_doVeterinario);
            
                for(int i=0; i<contadorVeterinario; i++)
                    if(veterinarios[i].nome != nome_doVeterinario)
                        contador2++;
                    else
                        posicaoVeterinario = i;

                if(contador2 == contadorVeterinario){
                    printf("\n\n|\t >> Veterinario não encontrado");
                    printf("\n| Continuar busca de veterinario..:\t1 |");
                    printf("\n| Sair............................:\t0 |");
                    scanf("%d", &resp);
                    if(resp == 0) return;
                    if(resp == 1) return agendarConsulta(consultas, qtdConsultas, animais, veterinarios, qtdAnimais, qtdVeterinarios);
                    
                } else{
                    do{
                        contador2 = 0;
                        printf("\n| Nome do animal: ");
                        scanf(" %s", nome_doAnimal);

                        for(int i=0; i<contadorAnimal; i++){
                            if(animais[i].nome != nome_doAnimal)
                                contador2++;
                            else posicaoAnimal = i;
                            
                            if(contador2 == contadorAnimal){
                                printf("\n\n|\t >> Animal não encontrado");
                                printf("\n| Continuar busca de Animal..:\t1 |");
                                printf("\n| Sair........................:\t0 |");
                                scanf("%d", &resp);
                                if(resp == 0) return;
                            } else{
                                do{
                                    printf("\n\n|\t >> Agendar Consulta");
                                    printf("\n| Data: ");
                                    scanf(" %s", dataConsulta);
                                    printf("\n| Hora: ");
                                    scanf("%d", horaConsulta);

                                   // horaVaga = horarioDisponivel(consultas, *qtdConsultas, dataConsulta, horaConsulta, 0);

                                    if(horaVaga){
                                        printf("\n\n|\t >> Consulta marcada!");
                                        printf("\n| Data: %s", dataConsulta);
                                        printf("\n| Horario: %d", horaConsulta);
                                        printf("\n| Animal: %s", nome_doAnimal);
                                        printf("\n| Veterinario: %s", nome_doVeterinario);

 /*                                        consultas[1].animal->dono.nome = animais[1].dono.nome;
                                        consultas[ultimaConsulta+1].animal->idade = animais[posicaoAnimal].idade;
                                        consultas[ultimaConsulta+1].animal->nome = animais[posicaoAnimal].nome;
                                        consultas[ultimaConsulta+1].animal->peso = animais[posicaoAnimal].peso;
                                        consultas[ultimaConsulta+1].data = dataConsulta;
                                        consultas[ultimaConsulta+1].horario = horaConsulta;
                                        consultas[ultimaConsulta+1].veterinario->CFMV = veterinarios[posicaoVeterinario].CFMV;
                                        consultas[ultimaConsulta+1].veterinario->nome = veterinarios[posicaoVeterinario].nome;
                                        (*qtdConsultas)++; */

                                    } else{
                                        printf("\n\n|\t >> Horario indisponivel");
                                        printf("\n| Buscar novo horario..:\t1 |");
                                        printf("\n| Sair.................:\t0 |");
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
         }

         if(resp == 8){
                visualizarAgenda(consultas, qtd_Consultas, animais);
                printf("\n*****************************");
                system("PAUSE");
         }
    }while (resp != 0);
}