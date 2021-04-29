programa
{
	
	funcao inicio()
	{
		inteiro p
		real sal[3]
		cadeia sexo[3], nome[3]

		para(p=0; p<3; p++){
			escreva("==CADASTRO ",p+1, "==\n")
			faca{
				escreva("Nome: ")
				leia(nome[p])
			}enquanto(nome[p] == "")
			faca{
				escreva("Sexo [M/F]: ")
				leia(sexo[p])
			}enquanto(sexo[p] != "M" e sexo[p] != "F")
			escreva("Salário: R$")
			leia(sal[p])
			escreva("\n")
		}

		limpa()
		escreva("\t\tTABELA\n------------------------------------\nNOME\t\t SEXO\t SALÁRIO\n------------------------------------")
		para(p=0; p<3; p++){
			escreva("\n", nome[p], "\t\t   ", sexo[p], "\t    ", sal[p])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 387; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */