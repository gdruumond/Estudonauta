programa
{
	
	funcao inicio()
	{
	
		caracter  op
		real kg

		escreva("Digite o seu peso aqui na terra (Kg): ")
		leia(kg)
		
		escreva("\n=======================o")
		escreva("\n1	Mercúrio")
		escreva("\n2	Vênus")
		escreva("\n3	Marte")
		escreva("\n4	Júpter")
		escreva("\n5	Saturno")
		escreva("\n6	Urano")
		escreva("\n=======================o")
		escreva("\nDigite sua opção ==> ")
		leia(op)
		
		escolha(op){
			
			caso '1' :
				escreva("\nNo planeta Mercúrio o seu peso seria de: ", kg * 0.37, " kilos!!")
				pare
							
			caso '2' :
				escreva("\nNo planeta Vênus o seu peso seria de: ", kg * 0.88, " kilos!!")
				pare
							
			caso '3' :
				escreva("\nNo planeta Marte o seu peso seria de: ", kg * 0.38, " kilos!!")
				pare
							
			caso '4' :
				escreva("\nNo planeta Júpter o seu peso seria de: ", kg * 2.64, " kilos!!")
				pare
							
			caso '5' :
				escreva("\nNo planeta Saturno o seu peso seria de: ", kg * 1.15, " kilos!!")
				pare
							
			caso '6' :
				escreva("\nNo planeta Urano o seu peso seria de: ", kg * 1.77, " kilos!!")
				pare

			caso contrario:
				escreva("Opção inválida")
		}
	}
}


/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1128; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */