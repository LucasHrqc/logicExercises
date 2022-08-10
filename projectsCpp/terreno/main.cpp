#include <bits/stdc++.h>

using namespace std;

int main()
{
    double l, c, area, valor, preco;

    cout << "Digite a largura do terreno: ";
    cin >> l;
    cout << "Digite o comprimento do terreno: ";
    cin >> c;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valor;

    area = l * c;
    preco = l * c * valor;

    cout << fixed << setprecision(2);
    cout << "Area do terreno: " << area << endl;
    cout << "Preco do terreno: R$" << preco << endl;

    return 0;
}
