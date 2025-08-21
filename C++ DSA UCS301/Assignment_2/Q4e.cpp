// Arnav Chandla 
// 1024170259
// (e) Write a program to convert a character from uppercase to lowercase.

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    cout << "Enter an uppercase character: ";
    cin >> c;
    
    if (c >= 'A' && c <= 'Z')
    {
        cout << "Lowercase: " << (char)tolower(c) << endl;
    }
    else
    {
        cout << "Not an uppercase character.\n";
    }
    
    return 0;
}
