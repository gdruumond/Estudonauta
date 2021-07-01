programa
{
	inclua biblioteca Texto --> tx
	funcao inicio()
	{	
		cadeia nome
		escreva("Digite o seu nome completo: ")
		leia(nome)

		inteiro pos = tx.posicao_texto(" ", nome, 0)
		cadeia pn = tx.extrair_subtexto(nome, 0, pos)

		escreva("\nO seu primeiro nome é: ", pn)

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 271; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
