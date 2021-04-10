programa
{
	inclua biblioteca Matematica --> m
	funcao inicio()
	{
		inteiro c = 1 , n, qp = 0, qi = 0
		real mpar, mimp, spar = 0.0, simp = 0.0
		enquanto(c <= 5){
			escreva("Digite o ", c, "º valor: ")
			leia(n)
				se(n % 2 == 0){
					spar += n
					qp++
				} senao{
					simp += n
					qi++
				}
			c++
		}
		mpar = spar / qp
		mimp = simp / qi
		escreva("\nSoma dos ", qp," números pares: ", spar, ". E a média dos valores pares é: ", m.arredondar(mpar,2))
		escreva("\nSoma dos ", qi," números ímpares: ", simp, ". E a média dos valores ímpares é: ", m.arredondar(mimp,2))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 555; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */