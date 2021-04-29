programa
{
	
	funcao tabuada(inteiro num){
		inteiro c
		escreva("\n-------TABUADA DO ", num, "-------\n")
		para(c=1;c<=10; c++) escreva("\t", c, " x ", num, " = ", c * num, "\n")
		escreva("--------------------------\n")
	}
	
	funcao inicio()
	{
		inteiro num
		escreva("Quer ver a tabuada de qual número?\n")
		leia(num)
		tabuada(num)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 351; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */