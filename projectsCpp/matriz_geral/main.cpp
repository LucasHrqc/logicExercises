#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double somap;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    somap = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] > 0){
                somap = somap + mat[i][j];
            }
        }
    }
    cout << endl;
    cout << fixed << setprecision(1);
    cout << "Soma dos valores positivos: " << somap << endl;


    int i;
    cout << endl;
    cout << "Escolha uma linha: ";
    cin >> i;
    cout << "Linha escolhida: ";
    for (int j = 0; j < n; j++){
        cout << mat[i][j] << " ";
    }


    int j;
    cout << endl;
    cout << endl;
    cout << "Escolha uma coluna: ";
    cin >> j;
    cout << "Coluna escolhida: ";
    for (int i = 0; i < n; i++){
        cout << mat[i][j] << " ";
    }


    cout << endl;
    cout << endl;
    cout << "Diagonal Principal: ";
    for (int i = 0; i < n; i++){
        cout << mat[i][i] << " ";
    }


    cout << endl;
    cout << endl;
    cout << "Matriz Alterada: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] < 0){
                mat[i][j] = mat[i][j] * mat[i][j];
            }
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
