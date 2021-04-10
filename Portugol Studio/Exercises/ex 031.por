programa
{
	
	funcao inicio()
	{	
		inteiro init, mult
		escreva("Sua contagem regressiva vai começar em: ")
		leia(init)
		escreva("Marcarei os números multiplos de: ")
		leia(mult)

		enquanto(init >= 0){
			se(init % mult == 0){
				escreva("[", init, "] ")
			} senao{
				escreva(init, " ")
			}
			init--
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 188; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */