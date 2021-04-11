programa
{
	
	funcao inicio()
	{
		inteiro t1 = 0, t2 = 1, c, n, next = 0

		escreva("Quantos elementos você quer exibir? ")
		leia(n)
		para(c=1; c<=n; c++){
			escreva(next, " ")
			t1 = t2
			t2 = next
			next = t1 + t2
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 74; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {t1, 6, 10, 2}-{t2, 6, 18, 2}-{next, 6, 32, 4};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */