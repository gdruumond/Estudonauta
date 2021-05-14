programa
{
	
	funcao inicio()
	{
		inteiro y
		escreva("Digite um ano: ")
		leia (y)

		se(y % 4 == 0 e y % 100 != 0 ou y % 400 == 0){
			escreva("Este ano é bissexto")
		} senao{
			escreva("Este ano não é bissexto")
		}

		/* MINHA RESOLUÇÃO: 
		 
		  se(y % 4 == 0){
			se(y % 100 == 0){
				se(y % 400 == 0){
					escreva("Este ano É bissexto")
				} senao{
					escreva("Este ano NÃO é bissexto")
				}
			} senao{
				escreva("Este ano É bissexto")
			}
		} senao{
			escreva("Este ano NÃO é bissexto")
		}*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 188; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */