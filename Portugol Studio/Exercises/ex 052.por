programa
{
	
	funcao inicio()
	{
		inteiro clin, c, lin, totest, totesp = 0

		escreva("Quantas linhas? ")
		leia(lin)

		totest = lin * 2 - 1

		para(clin=1; clin<=lin; clin++){
			para(c=1; c<=totesp; c++){
				escreva(" ")
			}
			para(c=1; c<=totest; c++){
				escreva("*")
			}
			totesp++
			totest -= 2
			escreva("\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 143; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */