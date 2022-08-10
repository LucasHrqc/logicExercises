#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;

    cout << "Linhas da Matriz: ";
    cin >> m;
    cout << "Colunas da Matriz: ";
    cin >> n;

    double mat[m][n];
    double vet[m];

    for (int i = 0; i < m; i++){
        cout << "Digite os elementos da " << i+1 << "a linha:" << endl;
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    cout << endl;
    cout << fixed << setprecision(1);
    cout << "Vetor Gerado: " << endl;
    for (int i = 0; i < m; i++){
        vet[i] = 0;
        for (int j = 0; j < n; j++){
            vet[i] = vet[i] + mat[i][j];
        }
        cout << vet[i] << endl;
}

    return 0;
}
