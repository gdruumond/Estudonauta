programa
{
	
	funcao inicio()
	{
		inteiro fib[15], pos
		
		fib[0] = 0
		fib[1] = 1
		
		para(pos=0; pos<13; pos++){
			fib[pos+2] = fib[pos] + fib[pos+1]
		}

		escreva("Os 15 primeiros elesmentos Fibonacci são: ")
		para(pos=0; pos<13; pos++){
			escreva(" [", fib[pos], "]")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 89; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {fib, 6, 10, 3};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */