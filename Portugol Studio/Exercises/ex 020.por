programa
{
	inclua biblioteca Calendario --> c
	funcao inicio()
	{	

		inteiro hatual = c.hora_atual(falso)
		inteiro cash, film = 17, ing = 20 
		escreva("HORÁRIO DO FILME: ", film, "h - PREÇO DO INGRESSO: R$", ing)
		escreva("\n-----------------------------------------------\n")
		escreva("Quantos reais você tem? ")
		leia(cash)

		se(hatual < film){
			se(cash > ing){
				escreva("Perfeito! Agora são ", hatual, " horas e você pode comprar até ", cash / ing, " ingressos para a sessão!")
			} senao{
				escreva("Poxa, faltam ", ing - cash, " reais para você comprar um ingresso :P")
			}
		} senao{
			escreva("O filme já começou! Infelizmente você perdeu essa sessão '-'\n\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 590; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */