programa
{
	inclua biblioteca Util --> u
	funcao inicio()
	{
		inteiro n[4][4], l, c, soma

		//GERANDO MATRIZ
		escreva("A matriz gerada foi: \n")
		para(l=0; l<u.numero_linhas(n); l++){
			para(c=0; c<u.numero_colunas(n); c++){
				n[l][c] = sorteia(0,10)
				escreva(n[l][c], "\t")
			}
			escreva("\n")

		}
		
		//SOMANDO LINHAS
		para(l=0; l<u.numero_linhas(n); l++){
			soma=0
			escreva("Somando a ", l+1, "º linha: ")
			para(c=0; c<u.numero_colunas(n); c++){
				escreva(n[l][c])
				soma += n[l][c]
				se(c != u.numero_colunas(n) - 1) escreva(" + ")
				senao escreva(" = ")
			}
			escreva(soma, "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 621; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {c, 6, 22, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */