const escola = "Lucas"

console.log(escola.charAt(4)) // retorna a letra na posição 4, começando em 0
console.log(escola.charCodeAt(3)) // retorna o código da tabela UNICODE
console.log(escola.indexOf('c')) // retorna a posição da letra C na palavra, começando em zero.
console.log(escola.substring(1)) // retorna a partir do string 1
console.log(escola.substring(0, 3)) // retorna a partir de 0 até 4

console.log('Escola '.concat(escola).concat("!")) // Concatenação de strings e variáveis.
console.log('Escola ' + escola + "!") // Concatenar simples
console.log(escola.replace('s', 10)) // troca a variavel s por 10.

console.log('Ana,Maria,Pedro'.split(','))