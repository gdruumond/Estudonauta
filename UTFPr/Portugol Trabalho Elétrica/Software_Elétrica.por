programa
{
	inteiro req = 0, r1 = 0, r2 = 0, r3 = 0, iT = 0, i1 = 0, i2 = 0, i3 = 0, uT = 0, u1 = 0, u2 = 0, u3 = 0, p1 = 0, p2 = 0, p3 = 0, i = 0, o = 0, c = 0, num = 0


	funcao fserie(){
		req = r1 + r2 +r3
		
		i1 = uT / req
		i2 = uT / req 
		i3 = uT / req
		
		u1 = r1 * i1
		u2 = r2 * i2
		u3 = r3 * i3
		
		p1 = u1 * i1
		p2 = u2 * i2
		p3 = u3 * i3	
	}

	funcao fparalelo(){
		req = ((r1 * r2 / (r1 + r2)) * r3) / (( r1 * r2 / (r1 + r2)) + r3)
		
		i1 = uT / r1
		i2 = uT / r2 
		i3 = uT / r3
		
		u1 = uT
		u2 = uT
		u3 = uT
		
		p1 = u1 * i1
		p2 = u2 * i2
		p3 = u3 * i3
	}

	funcao fmistoum(){
		req = r1 + (r2 * r3 / (r2 + r3))

		iT = uT / req
		i1 = iT
		
		u1 = r1 * i1
		u2 = uT - u1
		u3 = uT - u1
		
		i2 = u2 / r2 
		i3 = u3 / r3
		
		p1 = u1 * i1
		p2 = u2 * i2
		p3 = u3 * i3
	}

	funcao fmistodois(){
		req = (r1 + r2) * r3 / (r1 + r2 + r3)
		
		iT = uT / req

		u3 = uT
		
		i3 = u3 / r3
		i1 = iT - i3
		i2 = iT - i3

		u1 = r1 * i1
		u2 = r2 * i2

		p1 = u1 * i1
		p2 = u2 * i2
		p3 = u3 * i3
	}
	
	funcao inicio()
	{
		
		// Validação r1
		faca{
		se (i == 1){
			escreva(">>> Digite um valor não nulo positivo >>>")
			i = 0
		}
		se (o == 1){
			escreva(">>> Digite um valor abaixo de 10000 >>>")
			o = 0
		}
		escreva("\nValor da 1º resistência: ")
		leia(r1)
		se (r1 <= 0){
			i++
			limpa()
		} senao se (r1 >= 10000){
			o++
			limpa()
		} senao c = 0
		limpa()
		} enquanto(r1 <= 0 ou r1 >= 10000)

		// Validação r2
		faca{
		se (i > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva(">>> Digite um valor não nulo positivo >>>")
			i = 0
		}
		se (o > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva(">>> Digite um valor abaixo de 10000 >>>")
			o = 0
		}
		se (c == 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			c++
		}
		escreva("\nValor da 2º resistência: ")
		leia(r2)
		se (r2 <= 0){
			i++
			limpa()
		} senao se (r2 >= 10000){
			o++
			limpa()
		} senao c = 0
		limpa()		
		} enquanto(r2 <= 0 ou r2 >= 10000)

		// Validação r3
		faca{
		se (i > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva("\nValor da 2º resistência: ", r2, "\n")
			escreva(">>> Digite um valor não nulo positivo >>>")
			i++
			i = 0
		}
		se (o > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva("\nValor da 2º resistência: ", r2, "\n")
			escreva(">>> Digite um valor abaixo de 10000 >>>")
			o++
			o = 0
		}
		se (c == 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva("\nValor da 2º resistência: ", r2, "\n")
			c++
		}
		escreva("\nValor da 3º resistência: ")
		leia(r3)
		
		se (r3 <= 0){
			i++
			limpa()
		} senao se (r3 >= 10000){
			o++
			limpa()
		} senao c = 0
		limpa()
		} enquanto(r3 <= 0 ou r3 > 10000)
	
		// Validação ddp
		faca{
		se (i > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva("\nValor da 2º resistência: ", r2, "\n")
			escreva("\nValor da 2º resistência: ", r3, "\n")
			escreva(">>> Digite um valor não nulo positivo >>>")
			i = 0
		}
		se (o > 0){
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva("\nValor da 2º resistência: ", r2, "\n")
			escreva("\nValor da 3º resistência: ", r3, "\n")
			escreva(">>> Digite um valor abaixo de 12 >>>")
			o = 0
		}
		se (c == 0){
		escreva("\nValor da 1º resistência: ", r1, "\n")
		escreva("\nValor da 2º resistência: ", r2, "\n")
		escreva("\nValor da 3º resistência: ", r3, "\n")
		c++
		}
		escreva("\nValor da tensão: ")
		leia(uT)
		
		se (uT <= 0){
			i++
			limpa()
		} senao se (uT >= 12){
			o++
			limpa()
		}
		} enquanto(uT <= 0 ou uT >= 12)
		
		// Mostra a tabela de seleção do circuito
		faca{
			escreva("\nValor da 1º resistência: ", r1, "\n")
			escreva("\nValor da 2º resistência: ", r2, "\n")
			escreva("\nValor da 3º resistência: ", r3, "\n")
			escreva("\nValor da tensão: ", uT, "\n")
			
	
			escreva("\n\n=============================")
			escreva("\n[1] Resistores em série")
			escreva("\n[2] Resistores em paralelo")
			escreva("\n[3] Resistores misto 1")
			escreva("\n[4] Resistores misto 2")
			escreva("\n=============================")

			faca{
				escreva("\n\n Escreva o número de umas das opções a cima")
			 	leia(num)
			} enquanto (num >= 5 ou num <= 0)
			
		} enquanto(falso)

		// Selecione um opção da seleção do circuito
		escolha (num) {
			caso 1 :
				fserie()
				pare
			caso 2 : 
				fparalelo()
				pare
			caso 3 : 
				fmistoum()
				pare
			caso 4 :
				fmistodois()
				pare
		
			
		}
		
		// Saída de valores para o usuário
		faca{
			escreva("\n=======================================")
			escreva("\nResistor Equivalente: ", req)
			escreva("\nCorrente parcial no resistor 1: ", i1)
			escreva("\nCorrente parcial no resistor 2: ", i2)
			escreva("\nCorrente parcial no resistor 3: ", i3)
			escreva("\nTensão parcial no resistor 1: ", u1)
			escreva("\nTensão parcial no resistor 2: ", u2)
			escreva("\nTensão parcial no resistor 3: ", u3)
			escreva("\nPotência parcial no resistor 1: ", p1)
			escreva("\nPotência parcial no resistor 1: ", p2)
			escreva("\nPotência parcial no resistor 1: ", p3)
			escreva("\n=======================================")
			

			
			
		} enquanto(falso)

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 84; 
 * @DOBRAMENTO-CODIGO = [5, 21, 37, 55, 78, 120, 100, 128, 162, 196, 218, 236];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */