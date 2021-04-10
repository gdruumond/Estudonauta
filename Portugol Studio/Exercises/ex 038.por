programa
{
	
	funcao inicio()
	{
		inteiro n, c=1, h=0, m=0, hiv=0, hij=0, miv=0, mij=0
		cadeia nome, sex, hnv="", hnj="", mnv="", mnj="", sexove="", sexonov=""

	enquanto(c <= 5){
		escreva("\n------------------")
		escreva("\n--- ", c, "º PESSOA ---")
		escreva("\n------------------")
		escreva("\nNome: ")
		leia(nome)
		escreva("\nIdade [anos]: ")
		leia(n)
		escreva("\nSexo [M/F]: ")
		leia(sex)

		se(sex == "M" ou sex == "m"){
			se(h == 0){
				hiv = n
				hij = n
				hnv = nome
				hnj = nome	
			} senao{
				se(n > hiv){
					hiv = n
					hnv = nome
				}
				se(n < hij){
					hij = n
					hnj = nome
				}
			}
			h++
		}

		se(sex == "F" ou sex == "f"){
			se(m == 0){
				miv = n
				mij = n
				mnv = nome
				mnj = nome
			} senao{
				se(n > miv){
					miv = n
					mnv = nome
				}
				se(n < mij){
					mij = n
					mnj = nome
				}
			}
			m++
		}
		c++	
	}

		escreva("\nAo todo tivemos ", h," homens e ", m, " mulheres.")
		escreva("\nO homem mais velho é o ", hnv,", com ", hiv, " anos")
		escreva("\nO homem mais jovem é o ", hnj,", com ", hij, " anos")
		escreva("\nA mulher mais velha é a ", mnv,", com ", miv, " anos")
		escreva("\nA mulher mais jovem é a ", mnj,", com ", mij, " anos") 
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 937; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */