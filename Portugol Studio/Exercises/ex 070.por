programa
{
	
	funcao quadrado(inteiro x){
		inteiro b, h
		
		para(b=0; b<x; b++){
			para(h=0; h<x; h++){
				escreva("■ ")
			}
			escreva("\n")
		}
		escreva(x, "x", x, "\n\n")
	}

	
	funcao inicio()
	{
		quadrado(1)
		quadrado(2)
		quadrado(5)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 62; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */