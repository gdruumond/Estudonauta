programa
{
	
	funcao inicio()
	{
		cadeia nom
		real sal
		inteiro rea
		
		escreva("Nome do funcionário: ")
		leia(nom)
		escreva("Salário: R$")
		leia(sal)
		escreva("Reajuste (%): ")
		leia(rea)

		real amais = sal*rea/100
		real nsal = sal + amais

		escreva("\n----RESULTADO-----\n")
		escreva(nom, " ganhava R$", sal)
		escreva("\nCom o aumento de ", rea + "%")
		escreva("\nPassará a ganhar R$", amais, " a mais, sendo o salário total R$", nsal)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 252; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */