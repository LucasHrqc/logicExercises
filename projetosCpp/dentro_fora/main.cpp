#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, contd, contf;

    cout << "Quantidade de numeros: ";
    cin >> n;

    contd = 0;
    contf = 0;

    for (int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> x;
        if (x >= 10 && x <= 20){
            contd = contd + 1;
        }
        else
            contf = contf + 1;
    }

    cout << endl;
    cout << "Dentro: " << contd << endl;
    cout << "Fora: " << contf << endl;

    return 0;
}
