programa
{
	
	funcao inicio()
	{
		inteiro n1, n2, n3, maior = 0, meio = 0, menor = 0
		escreva("Digite um valor: ")
		leia(n1)
		escreva("Digite um valor: ")
		leia(n2)
		escreva("Digite um valor: ")
		leia(n3)

		se(n1 > n2){
			se(n3 > n1){
				maior = n3
				meio = n1
				menor = n2
			} senao se (n3 > n2){
				maior = n1
				meio = n3
				menor = n2
			} senao se(n2 > n3){
				maior = n1
				meio = n2
				menor = n3
			}
		// A partir daqui, automaticamente n2 > n1
		} senao se(n3 > n1){
			maior = n2
			meio = n3
			menor = n1
		} senao se(n3 > n2){
			maior = n3
			meio = n2
			menor = n1
		} senao se(n2 > n3){
			maior = n2
			meio = n3
			menor = n1
		}
		escreva("Os números em ordem são: ", menor, ", ", meio, ", ", maior)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 740; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */