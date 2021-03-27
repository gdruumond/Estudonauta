programa
{
	inclua biblioteca Tipos --> tp
	inclua biblioteca Texto --> t
	funcao inicio()
	{
		cadeia res
		escreva("Em qual esstado brasileiro você nasceu? ")
		leia(res)
		res = t.caixa_alta(res)

		se(res == "MG") escreva("Café, pão de queijo, uai... deve estar presente no seu dia a dia mineiro!")
		senao se(res == "RJ") escreva("Diretamente do RJ, fluente em carioqueix")
		senao se(res == "SP") escreva("VocÊ nascneu em São Paulo e é paulista")
		senao se(res == "ES") escreva("Você é capixaba... mas a muqueca também é, ou é baiana?!")
		senao escreva("Bom... você eu sei que não é do sudeste")
	}	
}	

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 610; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */