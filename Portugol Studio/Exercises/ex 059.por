programa
{
	
	funcao inicio()
	{
		real alu[6], soma = 0.0, media
		inteiro p

		// Lendo notas
		para(p=0; p<6; p++){
			escreva("Digite a nota do ", p+1, "º aluno: ")
			leia(alu[p])
			soma += alu[p]
		}

		// declarando média da turma
		media = soma / p
		escreva("\nA média da turma foi ", media)

		escreva("\nOs alunos acima da média são os: ")
		para(p=0; p<6; p++){
			se(alu[p] > media) escreva(p+1, ", ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 413; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */