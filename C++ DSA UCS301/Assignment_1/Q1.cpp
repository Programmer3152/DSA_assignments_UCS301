// Arnav Chandla 
// 1024170259
// Develop a Menu driven program to demonstrate the following operations of Arrays 
// -----------------------MENU 
// 1.CREATE 
// 2. DISPLAY 
// 3. INSERT 
// 4. DELETE 
// 5. LINEAR SEARCH 
// 6. EXIT

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 100;
int arr[MAX_SIZE];
int cur_size = 0;

void createNewArr()
{
    cout << "Enter the number of elements: ";
    cin >> cur_size;
    cout << "Enter " << cur_size << " elements:\n";
    for (int i = 0; i < cur_size; i++)
    {
        cin >> arr[i];
    }
}

void displayArrElems()
{
    if (cur_size == 0)
    {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements are: ";
    for (int i = 0; i < cur_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElem_intoArr()
{
    if (cur_size >= MAX_SIZE)
    {
        cout << "Array is full. Cannot insert.\n";
        return;
    }
    int pos, val;
    cout << "Enter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    if (pos < 0 || pos > cur_size)
    {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = cur_size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    cur_size++;
    cout << "Element inserted.\n";
}

void deleteElementFromArray()
{
    if (cur_size == 0)
    {
        cout << "Array is empty. Cannot delete.\n";
        return;
    }
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    if (pos < 0 || pos >= cur_size)
    {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = pos; i < cur_size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    cur_size--;
    cout << "Element deleted.\n";
}

void linearSearchInArray()
{
    if (cur_size == 0)
    {
        cout << "Array is empty.\n";
        return;
    }
    int val;
    cout << "Enter value to search: ";
    cin >> val;

    for (int i = 0; i < cur_size; i++)
    {
        if (arr[i] == val)
        {
            cout << "Element found at position " << i << endl;
            return;
        }
    }
    cout << "Element not found.\n";
}

int main()
{
    int choice;
    while (true)
    {
        cout << "\n--MENU--\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createNewArr();
            break;
        case 2:
            displayAreElems();
            break;
        case insertElem_intoArr();
            break;
        case 4:
            delElemFromArr();
            break;
        case 5:
            linSearchInArr();
            break;
        case 6:
            exit_func(0);
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}