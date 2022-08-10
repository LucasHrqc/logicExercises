#include <bits/stdc++.h>

using namespace std;

int main()
{
    int idade, soma, cont;
    double media;

    cout << "Digite as idades: " << endl;
    cin >> idade;

    soma = 0;
    cont = 0;

    if (idade < 0){
        cout << endl;
        cout << "Impossivel calcular" << endl;
    }
    else {
        while (idade >= 0){
        soma = soma + idade;
        cont = cont + 1;
        cin >> idade;
    }

    media = (double)soma / cont;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Media das idades: " << media << endl;

    }



    return 0;
}
