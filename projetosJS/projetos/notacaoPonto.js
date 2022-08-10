console.log(Math.ceil(6.1)) // Arredonda

const obj1 = {}
obj1.nome = 'Carro'
// obj1['nome'] = 'Carro2' Permite atribuir através da identificação por string.

function Obj(nome) {
    this.nome = nome
}

const obj2 = new Obj('Cadeira')
const obj3 = new Obj('Mesa')
console.log(obj2.nome)
console.log(obj3.nome)
