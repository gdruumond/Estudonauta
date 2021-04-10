programa
{
	
	funcao inicio()
	{
		
		inteiro idade, c = 1, mvelho = 0, mnovo = 0
		cadeia nome, nvelho = " ", njovem = " "
		
		enquanto(c <= 3){
			escreva("\n\n--- ", c, "º PESSOA ---")
			escreva("\nNome: ")
			leia(nome)
			escreva("\nIdade: ")
			leia(idade)
			
			se(c == 1){
				mvelho = idade
				mnovo = idade
				njovem = nome
				nvelho = nome
				
			} senao{
				se(idade > mvelho){
					mvelho = idade
					nvelho = nome
				}
				se(idade < mnovo){
					mnovo = idade
					njovem = nome
				}
			}
			c++
		}
	escreva("\n", nvelho, " é a pessoa mais velha, com ", mvelho, " anos.")
	escreva("\n", njovem, " é a pessoa mais jovem, com ", mnovo, " anos.")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 35; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */