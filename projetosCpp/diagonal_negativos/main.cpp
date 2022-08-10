#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, contneg;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << endl;
    cout << "Diagonal Principal: " << endl;

    for (int i = 0; i < n; i++){
        cout << mat[i][i] << " ";
    }

    contneg = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] < 0){
                contneg = contneg + 1;
            }
        }
    }
    cout << endl;
    cout << "Quantidade de negativos: " << contneg << "." << endl;

    return 0;
}
