// Arnav Chandla 
// 1024170259
// (c) Write a program to delete all the vowels from the string.

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string res_str = "";
    cout << "Enter a string to delete vowels from: ";
    getline(cin, s);
    
    for (char ch : s)
    {
        char lower_ch = tolower(ch);
        if (lower_ch != 'a' && lower_ch != 'e' && lower_ch != 'i' && lower_ch != 'o' && lower_ch != 'u')
        {
            res_str += ch;
        }
    }
    
    cout << "String after deleting vowels: " << res_str << endl;
    return 0;
}
