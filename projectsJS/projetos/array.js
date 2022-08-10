const valores = [7.7, 8.9, 6.3, 9.2]
console.log(valores[0], valores[3])

console.log()
console.log(valores[4]) // Não existe, mas ele não indica erro.

console.log()
valores [4] = 10
console.log(valores)
console.log(valores.length)

console.log()
valores.push({id: 3}, false, null, 'teste')
console.log(valores)

console.log()
console.log(valores.pop()) // retorna e retira o último valor do array.
delete valores[0] // deleta o valor do índice indicado.

