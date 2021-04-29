programa
{
	inclua biblioteca Util --> u
	funcao f_analise(inteiro n[]){
		
		escreva("\nO vetor possui ", u.numero_elementos(n), " elementos")
		
		escreva("\n\nOs elementso são: ")
		para(inteiro c=0; c<u.numero_elementos(n); c++) escreva("  [", c, "] -> ", n[c])
		
		escreva("\n\nValores pares nas posições:")
		para(inteiro c=0; c<u.numero_elementos(n); c++) se(n[c] % 2 == 0) escreva(" ", c)
		
		escreva("\n\nValores impares nas posições:")
		para(inteiro c=0; c<u.numero_elementos(n); c++) se(n[c] % 2 != 0) escreva(" ", c)
		
	}


	
	funcao inicio()
	{
		inteiro vet[] = {2, 8, 7, 4, 3, 1}
		f_analise(vet)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 244; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */