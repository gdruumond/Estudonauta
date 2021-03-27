programa
{
	inclua biblioteca Calendario --> c
	funcao inicio()
	{
		inteiro ano, yo, anlist, antras
		escreva("Em que ano você nasceu? ")
		leia(ano)

		yo = c.ano_atual() - ano
		anlist = ano + 18
		antras = c.ano_atual() - anlist 
		

		se(yo > 18){
			escreva("Você deve ter se alistado em ", anlist, ", a ", antras, " anos atrás")
		}senao se(yo < 18){
			escreva("Você precisa de alistar só em ", anlist, " ainda restam ", antras *= -1, " anos")
		} senao{
			escreva("Você completa 18 anos este ano, busque o serviço de alistamente militar o quanto antes!")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 426; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */