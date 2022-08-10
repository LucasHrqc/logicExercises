#include <bits/stdc++.h>
#define PI 3.14156

using namespace std;

int main()
{
    double r, area;
    cout << "Digite o valor do raio: ";
    cin >> r;

    area = PI *  pow(r, 2.0);

    cout << fixed << setprecision(4);
    cout << endl;
    cout << "Area: " << area << endl;

    return 0;
}
