programa
{
	
	funcao inicio()
	{
		inteiro n1, n2, c, y

		escreva("Tabuada INICIAL: ")
		leia(n1)
		escreva("Tabuada FINAL: ")
		leia(n2)
		
		para(n1; n1<=n2; n1++){
			escreva("\n== TABUADA DO ", n1, " ==\n")
			para(y=1; y<=10; y++){
				escreva(n1, " x ", y, " = ", n1 * y, "\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 182; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */