programa
{
	
	funcao inicio()
	{
	     // Declaração de variáveis
		cadeia nome
		inteiro ano
		real salario

		// Entrada de dados (input)
		escreva("Nome do funcionário:")
		leia(nome)
		escreva("Ano de nascimento:")
		leia(ano)
		escreva("Salário:")
		leia(salario)

          // Saída de dados (output)
		escreva(" --- FICHA FUNCIONAL --- \nNOME:" + nome + "\nNASCIMENTO em " + ano + "\nSALÁRIO de R$" + salario + "\n------------------------")
		
	}
}