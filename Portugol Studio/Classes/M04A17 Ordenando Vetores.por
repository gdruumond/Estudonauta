programa
{
	
	funcao inicio()
	{

		//SORTEANDO SEM REPETIR (AULA ANTERIOR)
		inteiro n[5], auxiliar, contador=0
		logico encontrado
		enquanto(contador < 5){
			n[contador] = sorteia(0,10)
			encontrado = falso
			para(auxiliar = 0; auxiliar < contador; auxiliar++){
				se(n[auxiliar] == n[contador]){
					encontrado = verdadeiro
					pare
				}
			}
			se(nao encontrado) contador++
		}


		//COLOCANDO EM ORDEM (bubble sort)
		inteiro principal = 0, secundario = 1, aux = 0
		para(principal = 0; principal < 5 - 1; principal++){ // "5-1", pois o principal vai até o penultimo indice
			para(secundario = principal + 1; secundario < 5; secundario++){ // "principal+1", pois o secundario inicia no segundo indice
				se(n[principal] > n[secundario]){	//SWAP aqui!
					aux = n[secundario]
					n[secundario] = n[principal]
					n[principal] = aux
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 392; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {n, 8, 10, 1}-{principal, 24, 10, 9}-{secundario, 24, 25, 10}-{aux, 24, 41, 3};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */