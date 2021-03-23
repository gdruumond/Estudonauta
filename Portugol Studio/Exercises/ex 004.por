programa
{
	inclua biblioteca Matematica --> m
	inclua biblioteca Tipos --> t
	funcao inicio()
	{
		inteiro n1, n2
	
		escreva("Digite um número: ")
		leia(n1)
		escreva("Digite outro número: ")
		leia(n2)

		limpa()
		escreva("-------RESULTADOS-------")
		escreva("\nSOMA: " + (n1 + n2))
		escreva("\nSUBTRAÇÃO: " + (n1 - n2))
		escreva("\nMULTIPLICAÇÃO: " + (n1 * n2))
		escreva("\nDIVISÃO: " + m.arredondar(t.inteiro_para_real(n1) / n2, 2))
		escreva("\nRESTO DA DIVISÃO: " + (n1 % n2) )
		escreva("\n------------------------")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 216; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */