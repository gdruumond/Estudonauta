programa
{
	
	funcao inicio()
	{
		inteiro c=1, n, sort
		cadeia dica
		
		escreva("Vou pensar em um número de 1 a 10\nVocê tem 3 CHANCES para adivinhar!\n----------------------------------\n")
		sort = sorteia(0,10)
		
		faca{
			escreva("\n\n", c, "º chance. Qual número que pensei?\n")
			leia(n)
			se(n != sort){
				se(n < sort) dica = "maior"
				senao dica = "menor"
				
				escreva("Errrrrouu (voz do Faustão)! Tente um valor ", dica)
				c++
			}
		}enquanto(c < 4 e n != sort)

		se(n == sort) escreva("\nBoaaaa!! Você acertou na ", c, "º tentativa\n")
		senao escreva("\n\nInfelizmente, você não acertou.... O valor era ", sort)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 217; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */