function tratarErroELancar(erro) {
    throw new Error ('INVALIDO!')
}

function imprimirgrito(obj) {
    try {
        console.log(obj.name.toUpperCase() + '!!!')
    } catch (e) {
        tratarErroELancar(e)
    } finally {
        console.log('Fim!')
    }
}

// const obj = {nome: 'Lucas'} Habilitar para ver resultados com tratamento de erros.
const obj = {name: 'Lucas'}
imprimirgrito(obj)
