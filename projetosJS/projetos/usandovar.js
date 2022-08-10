{
    {
        {
            {
                var sera = 'Será???' // A variável VAR fica visível mesmo fora do bloco
            }
        }
    }
}

console.log(sera)


function teste() {
    var local = 123 // Variável VAR dentro de funções não tem escopo global
    console.log(local)
}
// console.log(local) não funciona porque a variável VAR fica somente no escopo da função