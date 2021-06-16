const pessoa = {
    nome: "Biel",
    idade: 18,
    sexo: "masculino"
}

console.log(pessoa)

console.log("")

for(let key in pessoa){
    console.log(pessoa)
}

console.log("")

for(let key in pessoa){
    console.log(pessoa[key])
}

console.log("")

for(let key in pessoa){
    console.log(key,"->",pessoa[key])
}