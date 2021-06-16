const express = require("express") // puxa a função express
const app = express() // função express

// Definindo ROTAS
app.get("/", function(req, res){
    res.send("Main page") // enviar uma mensagem para o cliente na rota principal
})

app.get("/sobre", function(req,res){
    res.send("Page Sobre") // envia mensagem para rota sobre
})

app.get("/blog", function(req,res){
    res.send("Page Blog") // envia a mensagem de Page Blog para rota Blog
})

// criar servidor; tem que ser sempre a ultima linha do código
app.listen(8081, function(){
    console.log("Servidor rodando na porta 8081")
}) 

// o segundo parametro da função é uma função de callback, ou seja, quando a função de app.listen for executada, vai retornar o a function(){...} */