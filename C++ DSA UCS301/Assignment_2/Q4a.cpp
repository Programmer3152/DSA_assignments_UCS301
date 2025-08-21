// Arnav Chandla 
// 1024170259
// (a) Write a program to concatenate one string to another string.

#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    
    string final_str = str1 + str2;
    cout << "Concatenated string: " << final_str << endl;
    return 0;
}
