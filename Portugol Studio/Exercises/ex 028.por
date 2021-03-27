programa
{
	
	funcao inicio()
	{
	
		caracter  op
		real vi

		escreva("Digite o preço do produto: ")
		leia(vi)
		
		escreva("\n=============================o")
		escreva("\n1	Carnaval	[+10%]")
		escreva("\n2	Férias		[+5]")
		escreva("\n3	Black Friday	[-30%]")
		escreva("\n4	Natal		[-5%]")
		escreva("\n=============================o")
		escreva("\nDigite sua opção ==> ")
		leia(op)
		
		escolha(op){
			
			caso '1' :
				escreva("\nNo carnaval o preço do produto vai para R$", vi * 1.1)
				pare
							
			caso '2' :
				escreva("\nNas férias o preço do produto vai para R$", vi * 1.05)
				pare
							
			caso '3' :
				escreva("\nDurante a Black Friday o produto custa R$", vi * 0.7)
				pare
							
			caso '4' :
				escreva("\nNo período de Natal o produto custa R$", vi * 0.95)
				pare

			caso contrario : 
				escreva("Fora de períodos comemorativos o preço se mantem normal")
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 892; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */