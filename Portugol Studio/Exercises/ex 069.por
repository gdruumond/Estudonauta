programa
{

	funcao f_margem(inteiro margem){
		escolha(margem){
			caso 1: escreva("\n+-------========-------+") pare
			caso 2: escreva("\n=======:::::::=========") pare
			caso 3: escreva("\n<<<<<<<------->>>>>>>") pare
		}
	}

	
	funcao f_escreva(cadeia frase, inteiro repetir, inteiro margem){
		f_margem(margem)
		para(inteiro c = 0; c < repetir; c++) escreva(frase)
		f_margem(margem)
	}

	
	funcao inicio()
	{
		f_escreva("\nSou Estudonauta", 1, 1)
		f_escreva("\nEstou aprendendo a programar", 3, 2)
		f_escreva("\nE estou adorando", 2, 3)
		f_escreva("\nSucesso total!", 5, 0)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 396; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */