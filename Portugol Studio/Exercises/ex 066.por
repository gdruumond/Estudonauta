programa
{
	
	funcao inicio()
	{
		inteiro n[3][3], maior=n[0][0], l, c

		para(l=0; l<3; l++){
			para(c=0; c<3; c++){
				escreva("Digite o valor para a posição [", l , "][", c, "]: ") 
				leia(n[l][c])
				se(n[l][c] > maior) maior = n[l][c]
			}
		}

		escreva("\nO maior valor encontrado foi: ", maior, ", nas posições: ")
		para(l=0; l<3; l++){
			para(c=0; c<3; c++){
				se(n[l][c] == maior) escreva("[",l, "][", c, "]; ")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 71; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {n, 6, 10, 1}-{maior, 6, 19, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */