programa
{
	inclua biblioteca Calendario --> c
	funcao inicio()
	{
		inteiro y, old
		escreva("Em que ano você nasceu? ")
		leia(y)

		old = c.ano_atual() - y

		se (old>=18){
			escreva("Você tem ", old, " anos e espero sinceramente que já tenha se alistado.")
		} senao {
			escreva("Você ainda não completou 18 anos e não precisa se alistar!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 265; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */