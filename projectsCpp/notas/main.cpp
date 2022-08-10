#include <bits/stdc++.h>

using namespace std;

int main()
{
    double nota1, nota2, notaf;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    notaf = nota1 + nota2;

    cout << endl;
    cout << fixed << setprecision(1);

    if (notaf < 60){
        cout << "Reprovado." << endl;
    }
    else {
        cout << "Nota Final: " << notaf << endl;
    }

    return 0;
}
