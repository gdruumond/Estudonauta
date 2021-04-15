programa
{
	
	inclua biblioteca Texto --> txt
	inclua biblioteca Tipos --> ti
	funcao inicio()
	{

		inteiro idVelho = 0, idNovo = 0, c = 1, idade = 0, validador = 0
		cadeia idade2 = "", nome = "", nomeVelho = "", nomeNovo = "", resp = "S"
		
		faca{
			escreva("\n=== PESSOA ", c, "===\n")
			
			enquanto(verdadeiro){
				escreva("\nNome: ")
				leia(nome)
				
				se(ti.cadeia_e_inteiro(nome, 10)) escreva("<< ERRO >> Não há númreros em nomes")
				senao se(txt.numero_caracteres(nome) < 3)escreva("<< ERRO >> O nome deve ter ao menos 3 letras")
				senao pare
			}

			enquanto(verdadeiro){
				escreva("\nIdade: ")
				leia(idade2)

				se(nao(ti.cadeia_e_inteiro(idade2, 10))) escreva("<< ERRO >> Escreva apenas números por favor")
				senao{
					idade = ti.cadeia_para_inteiro(idade2, 10)
					se(idade <= 0 ou idade > 120) escreva("<< ERRO >> Idade invalida")
					senao pare
				}
			}

			enquanto(verdadeiro){
				escreva("\nQuer continuar? [S/N] ")
				leia(resp)

				se(nao(resp == "S" ou resp == "s" ou resp == "N" ou resp == "n")) escreva("<< ERRO >> Escreva apenas S ou N por favor")
				senao pare


			}

			se(c == 1){
				nomeVelho = nome
				nomeNovo = nome
				idVelho = idade
				idNovo = idade
			}

			se(idade > idVelho){
				nomeVelho = nome
				idVelho = idade
			}

			se(idade < idNovo){
				nomeNovo = nome
				idNovo = idade
			}
			c++
		}enquanto(resp == "S" ou resp == "s")

		escreva("\nVocê cadastrou ", c-1, " pessoas\n")
		escreva(nomeVelho, " é a pessoa mais velha com ", idVelho, " anos\n")
		escreva(nomeNovo, " é a pessoa mais nova com ", idNovo, " anos\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1448; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {idade, 9, 42, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */