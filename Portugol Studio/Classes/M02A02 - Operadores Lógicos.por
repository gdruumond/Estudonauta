programa
{
	/* questão
	DESENVOLVA O PROBLEMA ATÉ ACHAR OS VALORES DE x,y,k,z */
	funcao inicio()
	{
		inteiro a=5, b=8, c=10, d=2
		logico x = (a > b) ou nao (c % 2 == 0)
		logico y = x ou nao (c < a + b / d)
		logico k = (b < a *2) e (d < c - b)
		logico z = nao x e falso ou (d + a <= b + d)

		escreva(x, y, k, z)
	}
}

		/* resolução simplificada
		 *  x = falso ou nao verdadeiro
		 *  x = falso
		 *  
		 *  y = falso ou nao falso
		 *  y = verdadeiro
		 *  
		 *  k = verdadeiro e falso
		 *  k = falso
		 *  
		 *  z = verdadeiro e falso ou verdadeiro
		 *  z = falso ou verdadeiro
		 *  z = verdadeiro
		 */
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 619; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */