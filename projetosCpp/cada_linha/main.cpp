#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double mat[n][n], maior;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << endl;
    cout << "Maior valor de cada linha: " << endl;

    for (int i = 0; i < n; i++){
        maior = mat[0][0];
        for (int j = 0; j < n; j++){
            if (mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
        cout << maior << endl;

    }

    return 0;
}
