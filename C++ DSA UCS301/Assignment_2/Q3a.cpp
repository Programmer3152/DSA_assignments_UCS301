// Arnav Chandla 
// 1024170259
// Design the Logic to Find a Missing Number in a Sorted Array. (a) Linear time

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int findMissingNumLinear(int arr[], int n)
{
    // The expected sum of n-1 elements from 1 to n is (n * (n + 1)) / 2
    // Since the array has n-1 elements, the total number of elements including the missing one is 'n'.
    // The size of the given array is actually n-1. So the total count of numbers should be n.
    // The sum of first 'n' natural numbers is n*(n+1)/2.
    // Here, the array has (size) elements, so total elements should be (size + 1).
    int totElems = n + 1;
    int expectedSum = totElems * (totElems + 1) / 2;
    int actuSum = 0;
    for (int i = 0; i < n; i++)
    {
        actuSum += arr[i];
    }
    return expectedSum - actuSum;
}

int main()
{
    int arr[] = {1, 2, 3, 5}; // Missing 4
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "The array is: ";
    for(int i=0; i<arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Missing number (Linear Time): " << findMissingNumLinear(arr, arrSize) << endl;

    return 0;
}
