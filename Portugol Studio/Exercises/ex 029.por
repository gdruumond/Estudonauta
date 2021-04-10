programa
{
	inclua biblioteca Util --> u
	funcao inicio()
	{
		inteiro ctg, fim, inc
		
		escreva("Aonde começa a contagem? ")
		leia(ctg)
		escreva("Aonde termina a contagem? ")
		leia(fim)
		escreva("Qual vai ser o incremento? ")
		leia(inc)

		escreva("INICIO - ")
		enquanto(ctg <= fim){
			escreva(ctg, " - ")
			ctg += inc
			u.aguarde(100)
		}
		escreva("FIM")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 350; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */