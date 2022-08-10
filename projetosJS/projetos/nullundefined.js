let valor // nao inicializada
console.log(valor) // Declarado, porém não informado (undefined)
// console.log(valor2) Não foi nem declarado, not defined

valor3 = null // Ausência de valor
console.log(valor3) // Foi inicializada e declarada como nula.
// console.log(valor3.toString()) Causará um erro dizendo que não possível acessar um valor nulo.

const produto = {}
console.log(produto.preco) // Produto está definido, mas o preço não, ai undefined
console.log(produto) // Vazio

produto.preco = 3.50
console.log(produto)


