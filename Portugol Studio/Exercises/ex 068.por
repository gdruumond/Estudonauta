programa
{
	inclua biblioteca Util --> u
	funcao inicio()
	{
		inteiro n[5][5], pts = 0, try = 0, l, c, num=0
		
		
		//BACK-END
		para(l=0; l<u.numero_linhas(n); l++){
			para(c=0; c<u.numero_colunas(n); c++){
				n[l][c] = sorteia(0,1)
			}
		}

		//FRONT-END
		para(l=0; l<u.numero_linhas(n); l++){
			para(c=0; c<u.numero_colunas(n); c++){
				escreva("-  ")
			}
			escreva("\n")
		}

		escreva("\nFaça sua jogada!")
		escreva("\nLinha: ")
		leia(l)
		escreva("Coluna: ")
		leia(c)

		se(n[l][c] == 1){
			escreva("BOOOM! Você acertou uma bomba")
		} senao{
			escreva("TIRO CERTO! Nenhuma bomba")
		}






		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 112; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {n, 6, 10, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */