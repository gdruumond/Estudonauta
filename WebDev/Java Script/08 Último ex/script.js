// Variaveis globais
let num = document.querySelector('input#fnum')
let lista = document.querySelector('select#tab')
let res = document.querySelector('div#res')
let p = document.querySelector('p#p')
let valor = []

// Retorna se é um número válido dentro das condições estabelecidas
function isNumero(n) {
    if(Number(n) >=1 && Number(n) <= 100) {
        return true
    } else {
        return false
    }
}

// Retorna se o número já está na lista
function inLista(n, l) {
    if (l.indexOf(Number(n)) != -1) {
        return true
    } else {
        return false
    }
}

// Adiciona número na tabela
function adicionar() {
    p.innerHTML = ''
    if (isNumero(num.value) && !inLista(num.value, valor)) {
        valor.push(Number(num.value))
        let item = document.createElement('option')
        item.text = `Valor ${num.value} adicionado.`
        lista.appendChild(item)
        res.innerHTML = ''
    } else{
        p.innerHTML = 'Valor inválido ou já na lista'
    }
    num.value = ''
    num.focus()
    num.innerHTML = ''
}

// Analisa os dados inseridos e retorna o resultado da analise
function analisar(){
    if (valor.length == 0) {
        p.innerHTML = 'Adicione valores antes de analisar'
    } else {

    let maior = valor[0]
    let menor = valor [0]
    let soma = 0

    for(let c in valor) {
        soma += valor[c]
        if (valor[c] > maior){
            maior = valor[c]
        }
        if (valor[c] < menor){
            menor = valor[c]
        }

        res.innerHTML = ''
        res.innerHTML += `<p>${valor.length} itens cadastrados</p>`
        res.innerHTML += `<p>Maior valor: ${maior}</p>`
        res.innerHTML += `<p>Menor valor: ${menor}</p>`
        res.innerHTML += `<p>Soma dos valores: ${soma}</p>`
        res.innerHTML += `<p>Média dos valores: ${soma / tot}</p>`
        p.innerHTML = ''
    }
    }
}