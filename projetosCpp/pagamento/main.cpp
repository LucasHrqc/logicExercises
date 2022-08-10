#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome;
    double salario, total;
    int qtd;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Pago por hora: R$";
    cin >> salario;
    cout << "Horas trabalhadas: ";
    cin >> qtd;

    total = salario * qtd;

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "O pagamento para " << nome << " deve ser R$" << total << "." << endl;

    return 0;
}
