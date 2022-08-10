#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, coelhos, ratos, sapos, total, qtd;
    char tipoc;
    double pc, pr, ps;

    cout << "Quantos testes serao realizados? ";
    cin >> n;

    coelhos = 0;
    ratos = 0;
    sapos = 0;
    total = 0;

    for (int i = 0; i < n; i++){
        cout << "Quantidade de cobaias: ";
        cin >> qtd;
        cout << "Tipo de cobaia: ";
        cin >> tipoc;
        total = total + qtd;
        if (tipoc == 'C' || tipoc == 'c'){
            coelhos = coelhos + qtd;
        }
        else if (tipoc == 'R' || tipoc == 'r'){
            ratos = ratos + qtd;
        }
        else if (tipoc == 'S' || tipoc == 's'){
            sapos = sapos + qtd;
        }
    }

    pc = (double)coelhos / total * 100;
    pr = (double)ratos / total * 100;
    ps = (double)sapos / total * 100;

    cout << endl;
    cout << "Relatorio:" << endl;
    cout << "Total de Cobaias: " << total << endl;
    cout << "Total de Coelhos: " << coelhos << endl;
    cout << "Total de Ratos: "  << ratos << endl;
    cout << "Total de Sapos: " << sapos << endl;
    cout << fixed << setprecision(1);
    cout << "Percentual de Coelhos: " << pc << "%" << endl;
    cout << "Percentual de Ratos: " << pr << "%" << endl;
    cout << "Percentual de Sapos: " << ps << "%" << endl;

    return 0;
}
