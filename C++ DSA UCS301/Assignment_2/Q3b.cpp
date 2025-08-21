// Arnav Chandla 
// 1024170259
// Design the Logic to Find a Missing Number in a Sorted Array. (b) Using binary search.

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int findMissingNumberWithBinarySearch(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // If the middle element is not in its correct place
        // (i.e., arr[mid] should be mid + 1)
        if (arr[mid] != mid + 1)
        {
            // And if it's the first element that's wrong, or the one before it is correct
            if (mid == 0 || arr[mid - 1] == mid)
            {
                return mid + 1;
            }
            // If the element at mid is wrong, the missing number is in the left half
            right = mid - 1;
        }
        else
        {
            // If the element at mid is correct, the missing number is in the right half
            left = mid + 1;
        }
    }
    // If no number is missing in the 1 to n-1 range, then n is the missing number.
    return n + 1;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8}; // Missing 5
    int sz = sizeof(arr) / sizeof(arr[0]);

    cout << "The array is: ";
    for(int i=0; i<sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Missing number (Binary Search): " << findMissingNumberWithBinarySearch(arr, sz) << endl;

    return 0;
}
