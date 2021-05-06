function carregar(){
    var msg = document.getElementById('msg')
    var img = document.getElementById('img')
    var hora = new Date().getHours()
    var title = document.getElementById('title')

    msg.innerHTML = `Agora são ${hora} horas`

    if (hora >= 0 && hora < 12){
        title.innerText = "Bom dia!"
        img.src = 'manha.jpg'
        document.body.style.background = '#FFFF00'
    } else if (hora >= 12 && hora <= 18){
        title.innerText = "Boa tarde!"
        img.src = 'tarde.jpg'
        document.body.style.background = '#0000FF'
    } else {
        title.innerText = "Boa noite!"
        img.src = 'noite.jpg'
        document.body.style.background = '#000000'
    }
}