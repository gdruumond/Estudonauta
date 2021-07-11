programa
{
	inclua biblioteca Matematica --> m
	real req = 0.0, r1 = 0.0, r2 = 0.0, r3 = 0.0, iT = 0.0, i1 = 0.0, i2 = 0.0, i3 = 0.0, uT = 0.0, u1 = 0.0, u2 = 0.0, u3 = 0.0, p1 = 0.0, p2 = 0.0, p3 = 0.0
	inteiro i = 0, o = 0, c= 0, num = 0
	cadeia circuito = "", ampere1 = " A", ampere2 = " A", ampere3 = " A", wats1 = " W", wats2 = " W", wats3 = " W"
	
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

	funcao ffiltro(){
		se (i1 < 0.1){
			i1 *= m.potencia(10.0, 3.0)
			ampere1 = " mA"
		}
		se (i2 < 0.1){
			i2 *= m.potencia(10.0, 3.0)
			ampere2 = " mA"
		}
		se (i3 < 0.1){
			i3 *= m.potencia(10.0, 3.0)
			ampere3 = " mA"
		}
		se (p1 < 0.1){
			p1 *= m.potencia(10.0, 3.0)
			wats1 = " mW"
		}
		se (p2 < 0.1){
			p2 *= m.potencia(10.0, 3.0)
			wats2 = " mW"
		}
		se (p3 < 0.1){
			p3 *= m.potencia(10.0, 3.0)
			wats3 = " mW"
		}
		
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
		escreva("\nValor da 1º resistência em ohms: ")
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
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			escreva(">>> Digite um valor não nulo positivo >>>")
			i = 0
		}
		se (o > 0){
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			escreva(">>> Digite um valor abaixo de 10000 >>>")
			o = 0
		}
		se (c == 0){
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			c++
		}
		escreva("\nValor da 2º resistência em ohms: ")
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
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			escreva("\nValor da 2º resistência: ", r2, " Ω\n")
			escreva(">>> Digite um valor não nulo positivo >>>")
			i++
			i = 0
		}
		se (o > 0){
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			escreva("\nValor da 2º resistência: ", r2, " Ω\n")
			escreva(">>> Digite um valor abaixo de 10000 >>>")
			o++
			o = 0
		}
		se (c == 0){
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			escreva("\nValor da 2º resistência: ", r2, " Ω\n")
			c++
		}
		escreva("\nValor da 3º resistência em ohms: ")
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
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			escreva("\nValor da 2º resistência: ", r2, " Ω\n")
			escreva("\nValor da 2º resistência: ", r3, " Ω\n")
			escreva(">>> Digite um valor não nulo positivo >>>")
			i = 0
		}
		se (o > 0){
			escreva("\nValor da 1º resistência: ", r1, "Ω\n")
			escreva("\nValor da 2º resistência: ", r2, "Ω\n")
			escreva("\nValor da 3º resistência: ", r3, "Ω\n")
			escreva(">>> Digite um valor abaixo de 12 >>>")
			o = 0
		}
		se (c == 0){
		escreva("\nValor da 1º resistência: ", r1, " Ω\n")
		escreva("\nValor da 2º resistência: ", r2, " Ω\n")
		escreva("\nValor da 3º resistência: ", r3, " Ω\n")
		c++
		}
		escreva("\nValor da tensão em volts: ")
		leia(uT)
		
		se (uT <= 0){
			i++
			limpa()
		} senao se (uT > 12){
			o++
			limpa()
		} senao limpa()
		} enquanto(uT <= 0 ou uT > 12)
		
		// Mostra a tabela de seleção do circuito
		faca{
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			escreva("\nValor da 2º resistência: ", r2, " Ω\n")
			escreva("\nValor da 3º resistência: ", r3, " Ω\n")
			escreva("\nValor da tensão: ", uT, " V\n")
			escreva("\n\n=============================")
			escreva("\n[1] Resistores em série")
			escreva("\n[2] Resistores em paralelo")
			escreva("\n[3] Resistores misto 1")
			escreva("\n[4] Resistores misto 2")
			escreva("\n=============================\n\n")

			se (i == 1){
				escreva(">>> Opção inválida >>>")
			}
			
			escreva("\nEscreva o número de umas das opções a cima: ")
		 	leia(num)
		 	i = 0
		 	
			se (num >= 5 ou num <= 0){
			 	i++
			 	limpa()
			 }
		} enquanto(num >= 5 ou num <= 0)

		// Selecione um opção da seleção do circuito
		escolha (num) {
			caso 1 :
				fserie()
				circuito = "em serie"
				pare
			caso 2 : 
				circuito = "em paralelo"
				fparalelo()
				pare
			caso 3 : 
				circuito = "de forma mista 1"
				fmistoum()
				pare
			caso 4 :
				circuito = "de forma mista 2"
				fmistodois()
				pare
		
			
		}
		
		// Saída de valores para o usuário
		faca{
			ffiltro()
			limpa()
			
			escreva("\nValor da 1º resistência: ", r1, " Ω\n")
			escreva("\nValor da 2º resistência: ", r2, " Ω\n")
			escreva("\nValor da 3º resistência: ", r3, " Ω\n")
			escreva("\nValor da tensão: ", uT, " V\n")

			escreva("\n\n\n>>> Resistores associados ", circuito, " <<<\n")
			
			escreva("\n===========================================================\n")
			escreva("\nResistor Equivalente: ", m.arredondar(req, 2), " Ω")
			escreva("\n\nCorrente parcial no resistor 1: ", m.arredondar(i1, 2), ampere1)
			escreva("\nCorrente parcial no resistor 2: ", m.arredondar(i2, 2), ampere2)
			escreva("\nCorrente parcial no resistor 3: ", m.arredondar(i3, 2), ampere3)
			escreva("\n\nTensão parcial no resistor 1: ", m.arredondar(u1, 2), " V")
			escreva("\nTensão parcial no resistor 2: ", m.arredondar(u2, 2), " V")
			escreva("\nTensão parcial no resistor 3: ", m.arredondar(u3, 2), " V")
			escreva("\n\nPotência parcial no resistor 1: ", m.arredondar(p1, 2), wats1)
			escreva("\nPotência parcial no resistor 1: ", m.arredondar(p2, 2), wats2)
			escreva("\nPotência parcial no resistor 1: ", m.arredondar(p3, 2), wats3)
			escreva("\n===========================================================\n\n\n\n\n\n\n")
		} enquanto(falso)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1652; 
 * @DOBRAMENTO-CODIGO = [7, 23, 108, 150, 130, 158, 192, 226, 253];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */