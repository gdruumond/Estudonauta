programa
{
	inclua biblioteca Util --> u
	inclua biblioteca Texto --> txt

	funcao f_linha (inteiro tam){
		inteiro c
		para(c=0;c<tam; c++){
			escreva("-")
			u.aguarde(50)
		}
	}

	
	funcao f_escreva (cadeia mensagem){
		inteiro tam, c
		
		tam = txt.numero_caracteres(mensagem)
		f_linha(tam)
		escreva("\n")
		para(c=0;c<tam;c++){
			 escreva(txt.obter_caracter(mensagem, c))
			 u.aguarde(100)
		}
		escreva("\n")
		f_linha(tam)
		escreva("\n")
		
		
	}


	
	funcao inicio()
	{
		f_escreva("Olá, tudo bem?")
		f_escreva("Eu sou aluno Estudonauta!")
		f_escreva("Estou aprendendo a progamar :)")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 160; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */