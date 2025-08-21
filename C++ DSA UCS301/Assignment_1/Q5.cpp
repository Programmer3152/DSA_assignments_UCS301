// Arnav Chandla 
// 1024170259
// Write a program to find sum of every row and every column in a two-dimensional array.

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int matrix[r][c];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrimatrix[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < c; j++)
        {
            row_sum += matrix[i][j];
        }
        cout << "Sum of row " << i << " is " << row_sum << endl;
    }

    for (int j = 0; j < c; j++)
    {
        int col_sum = 0;
        for (int i = 0; i < r; i++)
        {
            col_sum += matrix[i][j];
        }
        cout << "Sum of column " << j << " is " << col_sum << endl;
    }

    return 0;
}
