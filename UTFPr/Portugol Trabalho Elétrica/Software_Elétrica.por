programa
{
	
	funcao inicio()
	{
		inteiro req = 0, r1 = 0, r2 = 0, r3 = 0, iT = 0, i1 = 0, i2 = 0, i3 = 0, uT = 0, u1 = 0, u2 = 0, u3 = 0, p1 = 0, p2 = 0, p3 = 0, i = 0, o = 0

		// Validação r1
		faca{
		se (i > 0){
			escreva(">>> Digite um valor não nulo positivo >>>")
			i++
			i = 0
		}
		se (o > 0){
			escreva(">>> Digite um valor abaixo de 10000 >>>")
			o++
			o = 0
		}
		
		escreva("\nValor da 1º resistência: ")
		leia(r1)
		escreva("\n")
		
		se (r1 <= 0){
			i++
			limpa()
		}
		se (r1 >= 10000){
			o++
			limpa()
		}
		
		} enquanto(r1 <= 0 ou r1 >= 10000)

		// Validação r2
		faca{
		se (i > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva(">>> Digite um valor não nulo positivo >>>\n")
			i++
			i = 0
		}
		se (o > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva(">>> Digite um valor abaixo de 10000 >>>\n")
			o++
			o = 0
		}
		
		escreva("Valor da 2º resistência: ")
		leia(r2)
		
		se (r2 <= 0){
			i++
			limpa()
		}
		se (r2 >= 10000){
			o++
			limpa()
		}
		
		} enquanto(r2 <= 0 ou r2 >= 10000)

		// Validação r3
		faca{
		se (i > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva("\nValor da 2º resistência: ", r2, "\n")
			escreva(">>> Digite um valor não nulo positivo >>>")
			i++
			i = 0
		}
		se (o > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva("\nValor da 2º resistência: ", r2, "\n")
			escreva(">>> Digite um valor abaixo de 10000 >>>")
			o++
			o = 0
		}
		
		escreva("\nValor da 3º resistência: ")
		leia(r3)
		
		se (r3 <= 0){
			i++
			limpa()
		}
		se (r3 >= 10000){
			o++
			limpa()
		}
		limpa()
		} enquanto(r3 <= 0 ou r3 > 10000)

		escreva("\nValor da 1º resistência: ", r1, "\n")
		escreva("\nValor da 2º resistência: ", r2, "\n")
		escreva("\nValor da 3º resistência: ", r3, "\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 181; 
 * @DOBRAMENTO-CODIGO = [8, 36, 65];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {i, 6, 131, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */