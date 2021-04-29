programa
{
	funcao f_contagem (inteiro i, inteiro f, inteiro p){
		
		inteiro c=0, n=0
		
		escreva("\n==== CONTANDO DE ", i, " ATÉ ", f, " COM PASSO ", p, " ====\n")

		se(p<0) p *= -1
		
		se(i<f){
			para(c=i; c<f; c += p) escreva(c, " -> ")
			escreva(" FIM!")
		} senao{
			para(c=i; c>f; c -= p) escreva(c, " -> ")
			escreva(" FIM!")
		}
	}


	
	funcao inicio()
	{
		f_contagem(0, 10, 2)
		f_contagem(10, 50, 5)
		f_contagem(10, 2, 1)
		f_contagem(50, 0, -10)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 229; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */