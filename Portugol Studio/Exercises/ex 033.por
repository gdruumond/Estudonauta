programa
{
	funcao inicio()
	{
		inteiro c = 1, s = 0, nmrs, srt = 0
		escreva("Quantos números você quer que eu sorteie? ")
		leia(nmrs)

		enquanto(c <= nmrs){
			srt = sorteia(0, 60)
			escreva("\nO ", c,"º valor será: ", srt)
			s += srt
			c++
		} 
		escreva("\nA soma dos valores sorteados é de ", s)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 184; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */