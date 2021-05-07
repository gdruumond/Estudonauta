function verificar(){
    var ano = new Date().getFullYear()
    // fano -> ano do Formulário
    var fano = document.getElementById('ano')
    var res = document.getElementById('res')
    var fsex = document.getElementsByName('radsex')
    var idade = ano - Number(fano.value)
    var gen = ''
    var img = document.createElement('img')


    if (fano.value.length == 0 || fano.value > ano){
        window.alert('[ERRO] Verifique o ano inserido e tente novamente')
    } else{
        if(fsex[0].checked){
            gen = 'Homem'
            
            if (idade >= 0 && idade < 30){ 
               img.setAttribute('src', 'hominovo.jpg')
            } else if (idade >= 30 && idade <= 120){
                img.setAttribute('src', 'homivelho.jpg')
            } else{
                res.innerHTML = 'Acho que isso não é um ser humano. '
            }
        } else{
            gen ='Mulher'

            if (idade >= 0 && idade < 30){
                img.setAttribute('src', 'mulhenova.jpg')
             } else if (idade >= 30 && idade <= 120){
                 img.setAttribute('src', 'mulhevelha.jpg')
             } else{
                 res.innerHTML = 'Acho que isso não é um ser humano. '
             }
        }
        res.innerHTML = `${gen} com ${idade} anos <br>`
        // appendChild -> adicionar <img> na <tag> de id 'res'
        res.appendChild(img)
    }
}