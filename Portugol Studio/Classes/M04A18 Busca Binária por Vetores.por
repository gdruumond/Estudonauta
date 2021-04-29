programa
{
	inclua biblioteca Util --> u
	funcao inicio()
	{

		//SORTEANDO SEM REPETIR (AULA ANTERIOR)
		inteiro n[10], aux, c=0
		logico encontrado
		enquanto(c < u.numero_elementos(n)){
			n[c] = sorteia(0,20)
			encontrado = falso
			para(aux = 0; aux < c; aux++){
				se(n[aux] == n[c]){
					encontrado = verdadeiro
					pare
				}
			}
			se(nao encontrado) c++
		}


		//COLOCANDO EM ORDEM (bubble sort)
		inteiro p, s, auxx = 0
		para(p = 0; p < u.numero_elementos(n) - 1; p++){
			para(s = p + 1; s < u.numero_elementos(n); s++){
				se(n[p] > n[s]){
					auxx = n[s]
					n[s] = n[p]
					n[p] = auxx
				}
			}
		}


		//ESCREVENDO VETOR
		para(c = 0; c < u.numero_elementos(n); c++) escreva(n[c], " ")


		//BUSCA BINARIA
		inteiro chave = 18, init = 0, fim = u.numero_elementos(n), meio = 0
			   encontrado = falso				// Chave == 1
											//  	0		1		2		3		4		5		6
		enquanto(init <= fim){					//	Init						Meio						Fim
			meio = (init + fim) / 2				//	0		1		2		3	
			se(n[meio] == chave){				// Init		Meio				Fim
					encontrado = verdadeiro		// Achou a chave
					pare
			} senao{
				se(chave > n[meio]) init = meio + 1
				senao fim = meio - 1
			}
		}
		
		se(encontrado == verdadeiro) escreva("\nChave encontrada na posição ", meio)
		senao escreva("\nChave não encontrada")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 983; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */