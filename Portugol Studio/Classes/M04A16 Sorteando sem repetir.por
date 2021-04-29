programa
{
	
	funcao inicio()
	{
		inteiro n[5], auxiliar, contador=0
		logico encontrado

		//enquanto -> repetir até preencher os 5 indices (casas)
		enquanto(contador<5){
			n[contador] = sorteia(0,5)
			encontrado = falso
			
			//para -> analisar os números anteriores
			para(auxiliar=0; auxiliar < contador; auxiliar++){
				
				//caso tenha repetido, irá parar o cdóigo e voltar ao sorteio
				se(n[auxiliar] == n[contador]){
					encontrado = verdadeiro
					pare
					
				}
			}
			
			//se -> depois da analise não ter repetido, vai escrever o nº, e, adicionar +1 ao contador da repetição
			se(nao encontrado){
				escreva(n[contador], " ")
				contador++
				
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 695; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {n, 6, 10, 1}-{auxiliar, 6, 16, 8}-{contador, 6, 26, 8}-{encontrado, 7, 9, 10};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */