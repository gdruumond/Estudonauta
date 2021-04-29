programa
{
	inclua biblioteca Util --> u
	inclua biblioteca Tipos --> t
	funcao inicio()
	{
		inteiro idade[4], p, soma=0, maior=0
		cadeia nome[4]
		real media

		// Cadastro
		para(p=0; p<u.numero_elementos(nome); p++){
			escreva("Nome da ", p+1, "º pessoa: ")
			leia(nome[p])
			escreva("Idade de ", nome[p],": ")
			leia(idade[p])
			soma += idade[p]

			//Guardando valor maior
			se(p==0){
				maior = idade[p]
			} senao se(idade[p]>maior) maior = idade[p]
		}

		//Média de idade
		media = t.inteiro_para_real(soma) / p
		escreva("\n\n\t ANALISANDO....\n\nMédia de idade: ", media, "\nPessoas acima da média")
		para(p=0; p<u.numero_elementos(nome); p++){
			se(idade[p]>media) escreva("\n\t-> ", nome[p])
		}

		//Maior idade
		escreva("\n\nA maior idade do grupos é: ", maior, "\nPessoas com a maior idade: ")
		para(p=0; p<u.numero_elementos(nome); p++){
			se(idade[p]==maior) escreva("\n\t-> ", nome[p])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 146; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */