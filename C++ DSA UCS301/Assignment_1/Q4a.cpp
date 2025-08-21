// Arnav Chandla 
// 1024170259
// Implement the logic to a. Reverse the elements of an array

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void reverseTheArray()
{
    int n;
    cout << "Enter number of elements for reversal: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    reverseTheArray();
    return 0;
}
