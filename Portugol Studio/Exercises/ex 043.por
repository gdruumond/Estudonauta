programa
{
	
	funcao inicio()
	{
		inteiro c=1, p=0, i=0, n
		cadeia resp

		faca{
			escreva("Digite o ", c,"º número: ")
			leia(n)

			se(n % 2 != 0){
				se(i == 0){
					i = n
				} senao se(n < i) i = n
			}

			se(n % 2 == 0) p++
			c++
			
			escreva("Deseja continuar? ")
			leia(resp)
		}enquanto(resp == "S" ou resp == "s")
		
		escreva("\nAo todo você digitou ", c-1, " valores\nVocê digitou ", p, " números pares\nO menor valor ímpar digitado foi ", i)

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 425; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */