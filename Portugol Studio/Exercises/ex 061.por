programa
{
	inclua biblioteca Tipos --> t
	inclua biblioteca Texto --> txt
	funcao inicio()
	{
		cadeia nome[6]
		caracter oi
		inteiro p, totlet=0, totvog=0, tots = 0

		// Cadastros
		para(p=0; p<6; p++){
			escreva("Nome da pessoa posição [", p, "]: ")
			leia(nome[p])
		}

		// Menos 6 letras
		escreva("\n\nNomes com menos de 6 letras\n")
		para(p=0; p<6; p++){
			se(txt.numero_caracteres(nome[p]) < 6){
				escreva("[", p, "] ", nome[p], " ")
				totlet++
			}
		}
		escreva("  TOTAL = ", totlet)

		// Começa Vogal
		escreva("\n\nNomes que começam com vogal\n")
		para(p=0; p<6; p++){
			oi = txt.obter_caracter(nome[p], 0)
			se(oi == 'a' ou oi == 'e' ou oi == 'i' ou oi == 'o' ou oi == 'u'){
				escreva("[", p, "]", nome[p], " ")
				totvog++
			}
		}
		escreva("  TOTAL = ", totvog)

		// S no nome
		escreva("\n\nNomes que possuem letra S\n")
		para(p=0;p<6;p++){
			se(txt.posicao_texto("s", nome[p], 0) != -1){
				escreva("[", p, "]", nome[p], " ")
				tots++
			}
		}
		escreva("  TOTAL = ", tots)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 603; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */