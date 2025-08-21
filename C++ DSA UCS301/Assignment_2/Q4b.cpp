// Arnav Chandla 
// 1024170259
// (b) Write a program to reverse a string.

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cout << "Enter a string to reverse: ";
    getline(cin, s);
    
    reverse(s.begin(), s.end());
    
    cout << "Reversed string: " << s << endl;
    return 0;
}
