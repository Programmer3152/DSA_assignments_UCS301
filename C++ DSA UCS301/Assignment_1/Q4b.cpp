// Arnav Chandla 
// 1024170259
// Implement the logic to b. Find the matrix multiplication

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void multiplyTheMatrices()
{
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible.\n";
        return;
    }

    int m1[r1][c1], m2[r2][c2], res[r1][c2];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    multiplyTheMatrices();
    return 0;
}
