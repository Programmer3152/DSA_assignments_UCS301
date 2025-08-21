// Arnav Chandla 
// 1024170259
// Implement the binary search algorithm.

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int binSearchAlgo(int arr[], int l, int r, int x) //l : left; r : right; x : value; arr[] : array given
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
        {
            return m;
        }
        if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> x;

    int re(arr, 0, n - 1, x);

    if (res == -1)
    {
        cout << "Element not present in array.\n";
    }
    else
    {
        cout << "Element found at index " << res << endl;
    }

    return 0;
}
