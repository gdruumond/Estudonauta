programa
{
	funcao inicio()
	{
		inteiro val[10], pos
			   val[0] = 3

		// DOBRANDO O VALOR A CADA POSIÇÃO
		para(pos=1; pos<10; pos++){
			val[pos] = val[pos-1] * 2
		}

		// ESCREVENDO OS VALORES A CADA POSIÇÃO
		para(pos=0; pos<10; pos++) escreva(val[pos], " -> ")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 248; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {val, 5, 10, 3}-{pos, 5, 19, 3};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */