programa
{
	
	funcao inicio()
	{
		inteiro c = 1, menor = 0, maior = 0, n
		
		enquanto( c<=4 ){
			escreva("Digite um número")
			leia(n)
			se(c == 1){
				menor = n
				maior = n
			} senao{
				se(n < menor) menor = n
				se(n > maior) maior = n
			}
			c++
		}
		escreva("Desses números, o maior é ", maior, " e o menor é ", menor)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 198; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */