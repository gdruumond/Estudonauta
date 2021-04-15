programa
{
	inclua biblioteca Tipos --> ti
	funcao inicio()
	{
		inteiro soma = 0 , c = 1, n2 = 0
		cadeia resp = "", n1
		
		faca{
			escreva("==============\n", c, "º Valor\n==============\n")

			enquanto(verdadeiro){
				escreva("Digite um número entre 1 a 10: ")
				leia(n1)
				se(ti.cadeia_e_inteiro(n1, 10)){
					n2 = ti.cadeia_para_inteiro(n1, 10)
					se(n2 <= 0 ou n2 > 10) escreva("<< ERRO >> Você deve digitar um número entre 0 e 10\n\n")
					senao pare
				} senao se (nao(ti.cadeia_e_inteiro(n1, 10))) escreva("<< ERRO >> Você deve digitar um número\n\n")
			}
			
			enquanto(verdadeiro){
				escreva("Quer continuar? [S/N] ")
				leia(resp)
				se(nao(resp == "S" ou resp == "s" ou resp == "N" ou resp == "n")) escreva("Responda S ou N por favor\n")
				senao pare
			}
			
			soma += n2
			c++
		}enquanto(resp == "S" ou resp == "s")

		escreva("\nAo todo você digitou ", c-1, " valores\nA soma dos valores é: ", soma)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 814; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */