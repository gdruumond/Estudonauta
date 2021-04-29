programa
{
	
	funcao inicio()
	{
	inteiro n[4][4], l, c, soma=0

	//GERANDO MATRIZ	
	para(l=0; l<4; l++){
		para(c=0; c<4; c++){
			n[l][c] = sorteia(0,10)
			escreva(n[l][c], "\t")
		}
		escreva("\n")
	}

	//SOMA COLUNAS
	para(c=0; c<4; c++){
		escreva("Somando a coluna ", c, ": ")
		para(l=0; l<4; l++){
			escreva(n[l][c])
			soma += n[l][c]
			se(l!= 4-1) escreva (" + ")
		}
		escreva(" = ", soma, "\n")
		soma=0
	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 376; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {n, 6, 9, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */