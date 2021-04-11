programa
{
	
	funcao inicio()
	{

		inteiro init, end, passo, c
		
		escreva("Início: ")
		leia(init)
		escreva("Final: ")
		leia(end)
		escreva("Intervalo: ")
		leia(passo)

		se(passo < 0) passo *= -1
		
		se(init < end) para(c = init; c <= end; c += passo){
			escreva(c, "... ")
		}
		senao para(c = init; c >= end; c -= passo){
			escreva(c, "... ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 364; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */