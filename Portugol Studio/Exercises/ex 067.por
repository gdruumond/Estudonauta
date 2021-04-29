programa
{
	inclua biblioteca Util --> u
	inclua biblioteca Tipos --> t
	funcao inicio()
	{
		inteiro n[5][5], soma=0, l, c
		real media = 0.0

		//GERANDO MATRIZ
		para(l=0; l<u.numero_linhas(n); l++){
			para(c=0; c<u.numero_colunas(n); c++){
				n[l][c] = sorteia(0,10)
				escreva(n[l][c], "\t")
				soma += n[l][c]
			}
			escreva("\n")
		}

		//TIRANDO MÉDIA
		media = t.inteiro_para_real(soma) / (u.numero_colunas(n) * u.numero_linhas(n))
		escreva("\nA media dos valores da matriz é: ", media)

		//ACIMA DA MEDIA 2º LINHA
		escreva("\n\nNa segunda linha os valores acima da média são: \n")
		para(c=0; c<u.numero_colunas(n); c++){
			l=1
			se(n[l][c] > media) escreva("[", l, "][", c, "] = ", n[l][c], "\n")
		}

		//ABAIXO DA MÉDIA 3º COLUNA
		escreva("\nNa terceira coluna os valores abaixo da média são: \n")
		para(l=0; l<u.numero_linhas(n); l++){
			c=2
			se(n[l][c] < media) escreva("[", l, "][", c, "] = ", n[l][c], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 40; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */