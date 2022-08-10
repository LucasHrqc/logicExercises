// Destructuring é utilizado para remover informações e dados de um objeto.

const pessoa = {
    nome: 'Lucas',
    idade: 25,
    endereco: {
        logradouro: 'Rua 264',
        numero: 1000
    }
}

const { nome, idade } = pessoa // Destructuring do objeto "pessoa".
console.log(nome, idade)

const { nome: n, idade: i } = pessoa // Destructuring do objeto criando novas variaveis
console.log()
console.log(n, i)

const { endereco: { logradouro, numero } } = pessoa // Destructuring do objeto dentro do objeto.
console.log()
console.log(logradouro, numero)


// Retirando atributo que não existe no objeto

const { sobrenome, bemHumorada } = pessoa
console.log()
console.log(sobrenome, bemHumorada)

