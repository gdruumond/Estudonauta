programa
{
	inclua biblioteca Matematica --> m
	inclua biblioteca Tipos --> t
	funcao inicio()
	{
		inteiro n = 0, c = 1, soma = 0, maior = 0
		real media = 0.0
		enquanto(n != 9999){
			escreva(c, "º Valor [9999 FAZ PARAR]\n-------------------------\n ")
			leia(n)
			se(n != 9999){
				soma += n
				se(c == 1) maior = n
				senao se(n > maior) maior = n
				media = t.inteiro_para_real(soma)/c
				c++
			}
		}
		escreva("\nAo todo você digitou ", c-2, " valores")
		escreva("\nA a soma entre eles foi: ", soma)
		escreva("\nE a média foi: ", m.arredondar(media, 2))
		escreva("\nO maior valor digitado foi: ", maior)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 414; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {c, 7, 17, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */