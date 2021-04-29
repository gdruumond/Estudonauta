programa
{
	inclua biblioteca Util --> u
	funcao inicio()
	{
		caracter jogo[5][5]
		inteiro l, c

		// CRIANDO O CAMPO MINADO COM "-"
		para(l=0; l<u.numero_linhas(jogo); l++){
			para(c=0; c<u.numero_colunas(jogo); c++){
				jogo[l][c] = '-'
			}
		}

		/* SORTEANDO OS LUGARES DAS BOMBAS
		quant -> quantidade de bombas no game
		pL -> posição linha da bomba
		pC -> posição coluna da bomba
		bomba -> contador (c) para repetir criação de bombas */
		inteiro quant = 5, pL, pC, bomba=0
		enquanto(bomba < quant){
			pL = sorteia(0, u.numero_linhas(jogo) - 1)
			pC = sorteia(0, u.numero_colunas(jogo) - 1)
			se(jogo[pL][pC] == '-'){
				// Se o lugar estiver vazio, ele coloca uma bomba
				jogo[pL][pC] = '0'
				bomba++
			}
		}

		// INICIAR O JOGO
		inteiro totTentativas = 5, tentativa = 0, pontos = 0, lin, col
		logico boom = falso
		enquanto(tentativa < totTentativas ou pontos < totTentativas * 2){
			
			// MONTAR TABULEIRO
			escreva("\n----------------------------\n")
			para(l=0; l<u.numero_linhas(jogo); l++){
				para(c=0; c<u.numero_colunas(jogo); c++){
					se(jogo[l][c] == '-' ou jogo[l][c] == '0') escreva("- ")
					senao escreva(jogo[l][c], " ")
				}
				escreva("\n")
			}
	
			// ESCOLHA DO JOGADOR
			escreva("----------------------------")
			escreva("\nFaça a sua jogada! (Tentativa ", tentativa + 1, ")\n")
			faca{
				escreva("LINHA -> ")
				leia(lin)
			} enquanto(lin>=u.numero_linhas(jogo))
			faca{
				escreva("COLUNA -> ")
				leia(col)
			} enquanto(col>=u.numero_colunas(jogo))

			// VERIFICANDO LOCAL DE TIRO
			se(jogo[lin][col] == '0'){
				escreva("\n--> BOOMM! Você acertou uma bomba!\n")
				boom = verdadeiro
				jogo[lin][col] = '*'
				tentativa++
				pare
			} senao se(jogo[lin][col] == '-'){
				escreva("--> TIRO CERTO!")
				tentativa++
				pontos += 2
				jogo[lin][col] = 'V'
			} senao se(jogo[lin][col] == 'V'){
				escreva("Você já atirou aqui, tente novamente!")
			}
		}

		// FIM DE JOGO
		escreva("\n================================\n")
		se(boom == falso) escreva("\t YOU WIN!\n\n")
		escreva("\tGAME OVER\n\n")

		// DESENHANDO TABULEIRO FINAL
		para(l=0; l<u.numero_linhas(jogo); l++){
			para(c=0; c<u.numero_colunas(jogo); c++){
				escreva(jogo[l][c], " ")
			}
			escreva("\n")
		}
		escreva("\nVocê fez ", pontos, " pontos, em ", tentativa, " tentativa(s)\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2089; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {jogo, 6, 11, 4};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */