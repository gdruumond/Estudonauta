function contagem(){
    // window.alert("chamou")
    var entInit = document.getElementById('init')
    var init = Number(entInit.value)
    var entFim = document.getElementById('fim')
    var fim = Number(entFim.value)
    var entPasso = document.getElementById('passo')
    var passo = Number(entPasso.value)
    var res = document.getElementById('res')
    res.innerHTML = ""


    if (entInit.value.length == 0 || entFim.value.length == 0 || entPasso.value.length == 0){
        window.alert("Preencha todas os campos")
    } else{

        if(passo == 0){
            window.alert("Não é possível ter o passo 0, então vamos considerar, passo = 1 !")
            passo = 1
        }

        if(init < fim){
            for(var c = init; c <= fim; c += passo){
                res.innerHTML += `${c} \u{1F449} `
            }
        } else{
            for(var c = init; c >= fim; c -= passo){
                res.innerHTML += `${c} \u{1F449} `
            }
        }
        

        res.innerHTML += " \u{1F3C1}"
    }
}