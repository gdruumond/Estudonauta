programa
{
	
	funcao inicio()
	{
		inteiro p, acimalimite = 0, homens = 0, mulheres = 0, hl = 0, ml = 0, c = 1
		real kg, peso
		
		caracter sexo
		escreva("Quantas pessoas vamos cadastrar? ")
		leia(p)
		escreva("Qual é o peso de referencia? ")
		leia(kg)

		enquanto(c <= p){
			escreva("\n\n\n-------------------------")
			escreva("\n    PESSOA ", c," DE ", p)
			escreva("\n-------------------------")
			escreva("\nPeso [Kg]: ")
			leia(peso)
			escreva("\nSexo [M/F]: ")
			leia(sexo)

			se(peso <= kg) escreva("\n===DENTRO DO LIMITE (", kg," Kg)===")
			senao{
				escreva("\n====ACIMA DO LIMITE (", kg," Kg)====")
				acimalimite++
				se(sexo == 'M') hl++
				senao ml++
			}

			se(sexo == 'M') homens++
			senao mulheres++

			c++
		}
		escreva("\n\n\n========   RESULTADO  ========")
		escreva("\n", acimalimite, " pessoas estão acima do limite")
		escreva("\nDas quais, ", hl, " são homens e, ", ml, " são mulheres")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 792; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */