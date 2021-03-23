programa
{
	inclua biblioteca Matematica --> m
	funcao inicio()
	{
		real dist
		escreva("Distância em metros: ")
		leia(dist)

		real km = m.arredondar(dist/1000, 2)
		real hm = m.arredondar(dist/100, 2)
		real dam = m.arredondar(dist/10, 2)
		real m = m.arredondar(dist*1, 2)
		real dm = m.arredondar(dist*10, 2)
		real cm = m.arredondar(dist*100, 2)
		real mm = m.arredondar(dist*1000, 2)

		escreva("----CONVERTENDO----\n")
		escreva( km + " Km\n")
		escreva( hm + " Hm\n")
		escreva( dam + " Dam\n")
		escreva( m + " M\n")
		escreva( dm + " Dm\n")
		escreva( cm + " Cm\n")
		escreva( mm + " mm\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 600; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */