programa
{
	
	funcao inicio()
	{
		inteiro c = 1, s, maior = 0, div3 = 0, n
		escreva("\nQuantos números você quer que eu sorteie? ")
		leia(s)
		escreva("\nOs ", s, " números sorteados, são: ")
		enquanto(c <= s){
			n = sorteia(0,10)
			escreva(n, ", ")
			se(n > 5) maior++
			se(n % 3 == 0) div3++
			c++
		}
		escreva("\n", maior, " são maior que cinco\n", div3, " são divisiveis por três\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 329; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */