#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,  mult;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for (int i = 1; i <= 10; i++){
        mult = n * i;
        cout << n << " x " << i << " = " << mult << endl;
    }

    return 0;
}
