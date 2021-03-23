programa
{
	inclua biblioteca Calendario --> c
	funcao inicio()
	{
		inteiro y, old
		escreva("Em que ano você nasceu? " )
		leia(y)

		old = c.ano_atual() - y
		
		escreva("Você tem ", old, " anos, certo? Seja bem-vindo (a) ao Banco do Biel :)")

		se ( old > 65) {
			escreva("\n===ATENÇÕ! Dirija-se para a fila preferencial! ===")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 337; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */