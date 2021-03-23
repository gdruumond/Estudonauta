programa
{
	inclua biblioteca Texto --> tx
	funcao inicio()
	{
		cadeia cidade
		escreva("Em qual cidade você mora? ")
		leia(cidade)

		limpa()
		
		escreva("\n-----ANALISANDO----")
		escreva("\nVocê mora na cidade ", tx.caixa_alta(cidade))
		escreva("\nA primeira letra é ", tx.obter_caracter(cidade,0))
		escreva("\nE contém ", tx.numero_caracteres(cidade), " caracteres")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 381; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */