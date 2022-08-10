#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tipoc, conta, contg, contd;

    cout << "Informe um codigo (1, 2, 3) ou 4 para encerrar: ";
    cin >> tipoc;

    conta = 0;
    contg = 0;
    contd = 0;

    while (tipoc != 4){
        if (tipoc == 1){
            conta = conta + 1;
        }
        else if (tipoc == 2){
            contg = contg + 1;
        }
        else if (tipoc == 3){
            contd = contd + 1;
        }
        cout << "Informe um codigo (1, 2, 3) ou 4 para encerrar: ";
        cin >> tipoc;
    }

    cout << endl;
    cout << "Muito Obrigado!" << endl;
    cout << "Alcool: " << conta << endl;
    cout << "Gasolina: " << contg << endl;
    cout << "Diesel: " << contd << endl;

    return 0;
}
