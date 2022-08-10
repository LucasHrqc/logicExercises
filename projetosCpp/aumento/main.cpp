#include <bits/stdc++.h>

using namespace std;

int main()
{
    double sal, nsal, aumento, paumento;

    cout << "Digite o salario do funcionario: R$";
    cin >> sal;

    if (sal <= 1000.0){
        paumento = 20.0;
    }
    else if (sal <= 3000.0){
        paumento = 15.0;
    }
    else if (sal <= 8000.0){
        paumento = 10.0;
    }
    else {
        paumento = 5.0;
    }

    aumento = sal * paumento / 100;
    nsal = sal + aumento;

    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Novo salario: R$" << nsal << endl;
    cout << "Aumento: R$" << aumento << endl;
    cout << fixed << setprecision(0);
    cout << "Porcentagem: " << paumento << "%" << endl;

    return 0;
}
