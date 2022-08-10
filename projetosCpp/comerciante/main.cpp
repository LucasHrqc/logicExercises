#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, abaixo, entre, acima;
    double vtcompra, vtvenda, lucro, pl;
    cout << "Quantos produtos? ";
    cin >> n;

    string nomep[n];
    double pc[n], pv[n];

    for (int i = 0; i < n; i++){
        cout << "Produto " << i+1 << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomep[i]);
        cout << "Preco de compra: ";
        cin >> pc[i];
        cout << "Preco de venda: ";
        cin >> pv[i];
    }

    vtcompra = 0;
    vtvenda = 0;

    for (int i = 0; i < n; i++){
        vtcompra = vtcompra + pc[i];
        vtvenda = vtvenda + pv[i];
    }

    lucro = vtvenda - vtcompra;

    abaixo = 0;
    entre = 0;
    acima = 0;
    for (int i = 0; i < n; i++){
        pl = pv[i] / pc[i] - 1;
        if (pl < 0.1){
            abaixo = abaixo + 1;
        }
        else if (pl <= 0.2){
            entre = entre + 1;
        }
        else {
            acima = acima + 1;
        }
    }

    cout << endl;
    cout << "Relatorio Final:" << endl;
    cout << "Lucro abaixo de 10%: " << abaixo << endl;
    cout << "Lucro entre 10% e 20%: " << entre << endl;
    cout << "Lucro acima de 20%: " << acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << vtcompra << endl;
    cout << "Valor total de venda: " << vtvenda << endl;
    cout << "Lucro Total: " << lucro << endl;

    return 0;
}
