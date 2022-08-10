// Armazenando uma função em uma variável

const imprimirSoma = function (a, b) {
    console.log(a + b)
}
imprimirSoma(2, 3)



console.log()
// Armazenando uma função arrow em uma variavel
const soma = (a, b) => {
    return a + b
}
console.log(soma(10, 5))



console.log()
// Retorno Implícito
const subtracao = (a, b) => a - b // retorna uma única linha de código, nesse caso a - b.
console.log(subtracao(20, 10))