programa
{
	inclua biblioteca Matematica --> m
	
	funcao inicio()
	{
		real preco
		inteiro desc
		
		escreva("Preço do produto: ")
		leia(preco)
		escreva("Quantos % de desconto? ")
		leia(desc)

		escreva("O valor final do produto é de R$", (preco - m.arredondar(preco*desc/100, 2)))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 285; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */