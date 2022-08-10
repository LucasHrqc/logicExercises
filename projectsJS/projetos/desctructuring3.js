function rand({ min = 0, max = 1000}) {
    const valor = Math.random() * (max - min) + min
    return Math.floor(valor)
}

const obj = {max: 50, min: 40}
console.log(rand(obj))                 // Exibe valores entre 40 e 50
console.log(rand({min:955})) // Exibe valores entre 955 e 1000 por default da função
console.log(rand({}))        // Exibe valores entre 0 e 1000 por default da função
