#include <bits/stdc++.h>

using namespace std;

int main()
{
    double precoun, pago, troco;
    int qtd;

    cout << "Preco unitario do produto: R$";
    cin >> precoun;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: R$";
    cin >> pago;

    troco = pago - precoun * qtd;

    cout << fixed << setprecision(2);

    if (troco < 0){
        troco = precoun * qtd - pago;
        cout << endl;
        cout << "Faltou: R$" << troco;
    }
    else {
        cout << endl;
        cout << "Troco: R$" << troco;
    }

    return 0;
}
