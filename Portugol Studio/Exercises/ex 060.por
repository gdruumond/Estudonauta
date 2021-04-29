programa
{
	
	funcao inicio()
	{
		inteiro n[10], p, somapar = 0, somaimpar = 0, maior = 0, cont=0
		
		escreva("Vou sortear 10 números...\n")
		
		// Dando valor aos vetores
		para(p=0; p<10; p++){
			n[p] = sorteia(1,5)
			escreva(n[p], "... ")

			se(p==0) maior = n[p]
			senao se(n[p] > maior) maior = n[p]
		}

		escreva("\n\nAvaliando os valores sorteados...")

		// Dados dos pares
		escreva("\n-> Valores pares nas posições: ")
		para(p=0; p<10; p++){
			se(n[p] % 2 == 0){
			escreva(p, " ")
			somapar += n[p]
			}
		}
		escreva("\n\t-> A soma dos valores pares é: ", somapar)

		// Dados dos impares
		escreva("\n-> Valores ímpares nas posições: ")
		para(p=0; p<10; p++){
			se(n[p] % 2 != 0){
			escreva(p, " ")
			somaimpar += n[p]
			}
		}
		escreva("\n\t-> A soma dos valores ímpares é: ", somaimpar)

		//Dado do maior valor
		escreva("\n-> O maior valor é ", maior, ".\n\t-> Ocorreu nas posições: ")
		para(p=0; p<10; p++){
			se(n[p]==maior){
				escreva(p, " ")
				cont++
			}
		}
		escreva("\n\t-> Total de ocorrências: ", cont)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 848; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {somapar, 6, 20, 7}-{somaimpar, 6, 33, 9}-{maior, 6, 48, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */