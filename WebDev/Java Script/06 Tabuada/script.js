function tabuada(){
    var entrada = document.getElementById('num')
    var num =  Number(document.getElementById('num').value)
    var tab = document.getElementById('tab')
    tab.innerHTML = ''

    if(entrada.value.length == 0){
        window.alert('Insira um número no campo')
    } else{
        for(var c=1; c<=10; c++){
            /*para um Select, é necessário ter "Options", então aqui vamos criar uma a cada repetição*/
            var item = document.createElement('option')
            //colocar texto no item
            item.text = `${num} x ${c} = ${num*c}`
            //options, precisam de ter values, e na linha seguinte vamos fazer essa marcação
            item.value = `tab${c}`
            // appendChild -> agora, vamos subir a tag <itemn> para a tag #tab
            tab.appendChild(item)
        }
    }
}