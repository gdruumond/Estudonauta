programa
{
	
	funcao inicio()
	{

		inteiro c, n, d = 0
		
		escreva("Digite um número: ")
		leia(n)

		para(c = 1; c <= n; c++){
			se(n % c == 0){
				escreva(" [", c, "]")
				d++ 
			} senao escreva(" ", c)
		}
		se(d > 2) escreva("\nEsse número foi dividi ", d, " vezes, logo não é PRIMO!")
		senao se(d == 2) escreva("\nEsse número foi dividido apenas 2 vezes, logo é PRIMO!")
		senao se(d == 1) escreva("\nO número 1 não é PRIMO :p")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 317; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */