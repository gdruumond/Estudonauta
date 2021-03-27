programa
{
	inclua biblioteca Tipos --> t
	funcao inicio()
	{	
		caracter op
		inteiro n1, n2
		
		escreva("\n=======================o")
		escreva("\n+	Adição")
		escreva("\n-	Subtração")
		escreva("\n*	Multiplicação")
		escreva("\n/	Dvisião")
		escreva("\n=======================o")
		escreva("\nDigite sua opção ==> ")
		leia(op)
		
		escolha(op){
			
			caso '+' :
				escreva("\nVocê escolheu adição [+]")
				escreva("\nDigite o primeiro número: ")
				leia(n1)
				escreva("\nDigite o segundo número: ")
				leia(n2)

				escreva("\n------------------------")
				escreva("\nO resuldado da soma é ", n1 + n2)
				escreva("\n------------------------")
				escreva("\n     VOLTE SEMPRE!      ")
				pare
			
			caso '-' :
				escreva("\nVocê escolheu adição [-]")
				escreva("\nDigite o primeiro número: ")
				leia(n1)
				escreva("\nDigite o segundo número: ")
				leia(n2)

				escreva("\n------------------------")
				escreva("\nO resuldado da subtração é ", n1 - n2)
				escreva("\n------------------------")
				escreva("\n     VOLTE SEMPRE!      ")
				pare
			
			caso '*' :
				escreva("\nVocê escolheu adição [*]")
				escreva("\nDigite o primeiro número: ")
				leia(n1)
				escreva("\nDigite o segundo número: ")
				leia(n2)

				escreva("\n------------------------")
				escreva("\nO resuldado da multiplicação é ", n1 * n2)
				escreva("\n------------------------")
				escreva("\n     VOLTE SEMPRE!      ")
				pare
			
			caso '/' :
				escreva("\nVocê escolheu adição [/]")
				escreva("\nDigite o primeiro número: ")
				leia(n1)
				escreva("\nDigite o segundo número: ")
				leia(n2)

				escreva("\n------------------------")
				escreva("\nO resuldado da divisão é ", t.inteiro_para_real(n1) / n2)
				escreva("\n------------------------")
				escreva("\n     VOLTE SEMPRE!      ")
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
 * @POSICAO-CURSOR = 1869; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */