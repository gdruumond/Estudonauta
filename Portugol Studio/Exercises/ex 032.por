programa
{
	
	funcao inicio()
	{
		inteiro s = 0, c = 1, spar = 0, simp = 0, n = 0

		enquanto(c <= 5){
			escreva("Digite o ", c, "º valor: ")
			leia(n)
			se(n % 2 == 0){
				spar += n
			} senao{
				simp += n
			}
			c ++
		} 
		escreva("Somando os números pares, temos: ", spar)
		escreva("\nSomando os números ímpares, temos: ", simp)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 289; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */