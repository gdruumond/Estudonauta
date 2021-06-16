 const cores = ["Vermelho", "Verde", "Azul"]

console.log(cores)

console.log("")

for (let index in cores){
    console.log(cores)
}

console.log("")

for (let index in cores){
    console.log(index,cores[index])
}

console.log("")

for (let cor of cores){
    console.log(cor)
}

console.log("")

var i = 0
for (let cor of cores){
    console.log(i++,cor)
}