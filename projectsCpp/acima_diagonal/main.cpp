#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, soma;
    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    soma = 0;

    for (int i = 0; i < n; i ++){
        for (int j = i+1; j < n; j++){
                soma = soma + mat[i][j];
        }
    }

    cout << endl;
    cout << "Soma dos elementos acima da diagonal principal: " << soma << "." << endl;

    return 0;
}
