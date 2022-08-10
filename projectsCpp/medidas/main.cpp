#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, areaq, areat, areatra;

    cout << "Medida A: ";
    cin >> a;
    cout << "Medida B: ";
    cin >> b;
    cout << "Medida C: ";
    cin >> c;

    areaq = a*a;
    areat = (a*b) / 2.0;
    areatra = (a + b) / 2.0 * c;

    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Area do Quadrado: " << areaq << endl;
    cout << "Area do Triangulo: " << areat << endl;
    cout << "Area do Trapezio: " << areatra << endl;

    return 0;
}
