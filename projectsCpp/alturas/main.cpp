#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, contmenor;
    double media, soma, pmenor;

    cout << "Quantas pessoas? ";
    cin >> n;

    string nomes[n];
    int idades [n];
    double alturas[n];

    for (int i = 0; i < n; i++){
        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    soma = 0;
    for (int i = 0; i < n; i++){
        soma = soma + alturas[i];
    }

    media = (double)soma / n;

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Altura media: " << media << endl;

    contmenor = 0;
    for (int i = 0; i < n; i++){
        if (idades[i] < 16){
            contmenor = contmenor + 1;
        }
    }
    pmenor = (double)contmenor / n * 100.0;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << pmenor << "%" << endl;

    for (int i = 0; i < n; i++){
        if (idades[i] < 16){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
