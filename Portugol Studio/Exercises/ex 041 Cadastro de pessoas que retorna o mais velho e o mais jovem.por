programa
{
	inclua biblioteca Matematica --> m
	inclua biblioteca Tipos --> t
	inclua biblioteca Texto --> txt
	funcao inicio()
	{
		inteiro idade, yearsold = 0, yearsyoung = 0, soma = 0, c = 0
		cadeia nome, jovem = "", velho = ""
		real media
		
		enquanto(verdadeiro){
			escreva("\n--- NOVO AMIGO ---")
			escreva("\nNome: ")
			leia(nome)
			// interrupção
			se(txt.caixa_alta(nome) == "ACABOU"){
				escreva("\n*** INTERROMPIDO ***")
				pare
			}
			escreva("Idade: ")
			leia(idade)
			//definindo valores
			se(c==0){
				velho = nome
				jovem = nome
				yearsold = idade
				yearsyoung = idade
			} senao se(idade>yearsold){
				velho = nome
				yearsold = idade
			}
			senao se(idade<yearsyoung){
				jovem = nome
				yearsyoung = idade
			}
			soma += idade
			c++
		}
		media = t.inteiro_para_real(soma) / c
		escreva("\n=== RESULTADO ===")
		escreva("\n\nTotal de amigos cadastrados: ", c)
		escreva("\nSeu amigo mais velho é: ", velho, " com ", yearsold, " anos")
		escreva("\nSeu amigo mais jovem é: ", jovem, " com ", yearsyoung, " anos")
		escreva("\nA média da idade dos seus amigos é: ", media, " anos")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 491; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
