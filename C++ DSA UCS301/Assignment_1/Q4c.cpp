// Arnav Chandla 
// 1024170259
// Implement the logic to c. Find the Transpose of a Matrix

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void transposeTheMatrix()
{
    int r, c;
    cout << "Enter rows and columns for transpose: ";
    cin >> r >> c;
    int mat[r][c], trans[c][r];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    transposeTheMatrix();
    return 0;
}
