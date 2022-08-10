#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double soma, media;

    cout << "Quantidade de numeros digitados: ";
    cin >> n;

    double vet[n];

    for (int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl;
    cout << fixed << setprecision(1);
    cout << "Valores do vetor: ";
    for (int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }

    cout << endl;
    soma = 0;
    for (int i = 0; i < n; i++){
        soma = soma + vet[i];
    }

    media = (double)soma / n;

    cout << fixed << setprecision(2);
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;
}
