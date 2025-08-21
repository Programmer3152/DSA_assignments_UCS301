// Arnav Chandla 
// 1024170259
// Code the Bubble sort with the following elements: "64","34","25","12","22","11","90"

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void performBubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    printArray(arr, n);

    performBubbleSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
