#include <bits/stdc++.h>

using namespace std;

int main()
{
    int idade;
    string nome;

    cout << "Digite a sua idade: ";
    cin >> idade;
    cout << "Digite o seu nome completo: ";
    cin.ignore(INT_MAX, '\n');    // ------------ limpeza de buffer
    getline(cin, nome);

    cout << endl;
    cout << idade << endl;
    cout << nome << endl;
    return 0;
}
