// Arnav Chandla 
// 1024170259
// Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements.

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int removeDuplicateElements(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int temp[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];

    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }

    return j;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    n = removeDuplicateElements(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
