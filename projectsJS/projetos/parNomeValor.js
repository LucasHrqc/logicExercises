// par nome/valor

const saudacao = 'Lucas' // contexto léxico 1
console.log(saudacao)


function nome(){
    const saudacao = 'Como você tá?' // contexto léxico 2
    return saudacao
}
console.log(nome())

// Objetos são grupos aninhados de pares nomes/valor.
    const cliente = {
        nome: 'Lucas',
        idade: 25,
        peso: 65,
        endereco: {
            logradouro: 'Rua 264',
            numero: 199,
            Apartamento: 502 // Cada bloco objeto tem suas variáveis que podem ser repetidas sem sobrepor conteúdo
        }
    }

console.log(cliente)