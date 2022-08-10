#include <bits/stdc++.h>

using namespace std;

int main()
{
    double b, h, area, perimetro, diag;

    cout << "Base do retangulo: ";
    cin >> b;
    cout << "Altura do retangulo: ";
    cin >> h;

    area = b * h;
    perimetro = 2 * (b+h);
    diag = sqrt(b*b + h*h);

    cout << endl;
    cout << fixed << setprecision(4);
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Diagonal: " << diag << endl;
    return 0;
}
