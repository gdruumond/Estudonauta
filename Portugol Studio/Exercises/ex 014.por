programa
{

	
	funcao inicio()
	{
		real vf
		escreva("Qual o valor total das suas compras? RS")
		leia(vf)
		escreva("Você comprou R$", vf, " na nossa loja. Obrigado!")
		se(vf > 500) {
			real desc = vf * 0.1
			real vt = vf - desc
			escreva("\n====ATENÇÃO====\nPor fazer mais de R$500 em compras, você vai receber R$", desc, "de desconto!")
			escreva("\nO valor total a ser pago é de R$", vt, "! Volte sempre :)")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 185; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */