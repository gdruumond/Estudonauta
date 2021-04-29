programa
{
	
	funcao inicio()
	{

		inteiro num, n[10], pos, n1 = 0
		
		escreva("Digite um valor: ")
		leia(num)

		// DECLARANDO O PRIMEIRO VALOR DO VETOR
		n[0] = num

		// ATRIBUINDO VALORES DE 5 EM 5
		para(pos=1; pos<10; pos++){
			n[pos] = n[pos-1] + 5
		}

		// ESCREVENDO OS VALORES
		para(pos=0; pos<10; pos++){
			escreva(n[pos], " -> ")
		}

		escreva("\n\n")

		// MOSTRANDO O INDICE E VALORES RESPECTIVOS
		para(pos=0; pos<10; pos++){
			escreva(pos, ";{", n[pos], "} ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 260; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {n, 7, 15, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */