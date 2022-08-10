#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout << "Quantidade de alunos: ";
    cin >> n;

    string nomes[n];
    double nf, nota1[n], nota2[n];

    for (int i = 0; i < n; i++){
        cout << "Digite o nome, primeira e segunda nota do " << i+1 << "o aluno:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Nota 1: ";
        cin >> nota1[i];
        cout << "Nota 2: ";
        cin >> nota2[i];
    }

    cout << endl;
    cout << "Alunos aprovados: " << endl;

    for (int i = 0; i < n; i++){
        nf = (nota1[i] + nota2[i]) / 2.0;
        if (nf >= 6.0){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
