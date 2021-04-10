programa
{
	funcao inicio()
	{
		inteiro cont = 1, fim
		escreva("Deseja contar até quando? ")
		leia(fim)

		enquanto (cont <= fim){
			se(cont%4 != 0){
				escreva(cont, " - ")
			} senao{
				escreva("PIN!\n")
			}
				cont++
		}
		escreva("FIM")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 247; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */