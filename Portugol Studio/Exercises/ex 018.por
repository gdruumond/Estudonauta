programa
{
	
	funcao inicio()
	{
		inteiro d, pkm1, pkm2
		escreva("Informe a distância da viagem em Km: ")
		leia(d)

		se(d >= 200){
			pkm2 = 0.35 * d
			escreva("Uma viagem de ", d, "Km, vai custar R$0,35/Km. O valor total será: R$", pkm2)
		} senao{
			pkm1 = 0.5 * d
			escreva("Uma viagem de ", d, "Km, vai custar R$0,50/Km. O valor total será: R$", pkm1)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 159; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */