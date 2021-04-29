programa
{
	
	funcao inicio()
	{
		inteiro n[10], pos
		
		escreva("Vou sortear 10 números...\n")

		para(pos=0; pos<10; pos++){
			n[pos] = sorteia(0,20)
		}

		escreva("\nNúmeros sorteados:")
		para(pos=0; pos<10; pos++){
			escreva(pos, ";{", n[pos], "} ")
		}

		escreva("\n\nNḿeros na ordem inversa: ")
		para(pos=9; pos>=0; pos--){
			escreva(pos, ";{", n[pos], "} ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 390; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {n, 6, 10, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */