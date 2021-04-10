programa
{
	inclua biblioteca Matematica --> m
	inclua biblioteca Tipos --> t
	funcao inicio()
	{
		//declaração de variavel
		inteiro sal = 0, c = 0, homens = 0, mulheres = 0, mulheresmais1k = 0, homemmaiorsal = 0, somahomemsal = 0
		real mediasalhomens = 0.0
		cadeia nome = "", homemburgues = "", sexo = "", opn = ""

		//repetição
		enquanto(verdadeiro){
			//input's
			escreva("\nNome: ") 
			leia(nome)
			escreva("Sexo [M/F]: ") 
			leia(sexo)
			escreva("Sálario: R$") 
			leia(sal)
	
			//Calculos
			se(sexo == "M" ou sexo == "m"){
				se(c == 0){
					homemburgues = nome
					homemmaiorsal = sal
				} senao se(sal > homemmaiorsal){
					homemmaiorsal = sal
					homemburgues = nome
				}
				somahomemsal += sal
				homens++
			} senao se(sexo == "F" ou sexo == "f"){
				se(sal > 1000) mulheresmais1k++
				mulheres++
			}

			mediasalhomens = t.inteiro_para_real(somahomemsal) / homens

			escreva("Deseja continua [S/N]: ")
			leia(opn)
			escreva("----------------------")
			se(opn == "N" ou opn == "n") pare

			c++
		}
		//outputzada
		escreva("\n\nTotal de pessoas cadastradas: ", c++, "\nTotal de homens: ", homens, "\nTotal de mulheres: ", mulheres, "\nMédia salárial dos homens: R$", mediasalhomens,"\nMulheres que ganham mais de R$1k: ", mulheresmais1k, "\nMaior salário entre os homens é o ", homemburgues, " com R$", homemmaiorsal)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 750; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {mulheres, 8, 38, 8}-{mulheresmais1k, 8, 52, 14};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */