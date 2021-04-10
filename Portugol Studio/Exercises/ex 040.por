programa
{
	
	funcao inicio()
	{
		inteiro n1, n2, opc = 9

		enquanto(opc == 9){
			escreva("Operando 1: ")
			leia(n1)
			escreva("Operando 2: ")
			leia(n2)
			opc++
			
			enquanto(opc != 9 e opc != 5){
				escreva("\n\n=== ESCOLHA UMA OPERAÇÃO ===\n[ 1 ] Soma\n[ 2 ] Subtração\n[ 3 ] Multiplicação\n[ 4 ] Entrar com novos dados\n[ 5 ] Sair\nSUA OPÇÃO ==> ")
				leia(opc)

				se(opc == 1) escreva("\nA soma entre ", n1, " + ", n2, " = ", n1 + n2)
				se(opc == 2) escreva("\nA subtação entre ", n1, " - ", n2, " = ", n1-n2)
				se(opc == 3) escreva("\n A multiplicação entre ", n1, " * ", n2, " = ", n1*n2)
				se(opc == 4) opc = 9
				se(opc == 5) escreva("\n=== FIM ===")
				se(opc != 1 e opc != 2 e opc != 3 e opc != 4 e opc != 5 e opc !=9) escreva("\n=== OPÇÃO INVÁLIDA===")
			}
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 737; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */