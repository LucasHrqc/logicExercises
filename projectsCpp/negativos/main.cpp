#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cout << "Quantidade de numeros: ";
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> x[i];
    }

    cout << endl;
    cout << "Negativos: " << endl;
    for (int i = 0; i < n; i++){
        if (x[i] < 0){
            cout << x[i] << endl;
        }
    }

    return 0;
}
