// Arnav Chandla 
// 1024170259
// (d) Write a program to sort the strings in alphabetical order.

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cout << "Enter a string to sort: ";
    getline(cin, s);
    
    sort(s.begin(), s.end());
    
    cout << "Sorted string: " << s << endl;
    return 0;
}
