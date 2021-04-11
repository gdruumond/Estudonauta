programa
{
	
	funcao inicio()
	{
		inteiro c=1, s=0, maior=0, menor=0, cinco=0, sort
		cadeia resp
		
		faca{
			sort = sorteia(0,10)
			escreva("\nO ", c, "º número sorteado foi ", sort)
			escreva("\nQuer sortear mais um? [S/N] ")
			leia(resp)

			se(c == 1){
				maior = sort
				menor = sort
			} senao se(sort > maior) maior = sort
			senao se(sort < menor) menor = sort

			se(sort == 5) cinco++

			s += sort	
			c++
		}enquanto(resp == "S" ou resp == "s")
		
		escreva("\nVocê sorteou ", c-1, " valores\nA soma de todos eles é ", s, "\nO maior valor sorteado foi ", maior, " e o menor ", menor, "\nO valor 5 foi sorteado ", cinco, " vezes")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 377; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */