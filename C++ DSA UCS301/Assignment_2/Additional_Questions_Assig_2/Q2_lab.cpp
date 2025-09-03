#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(const string &str) {
    stack<char> st;
    for (char c : str) st.push(c);
    string rev;
    while (!st.empty()) {
        rev += st.top();
        st.pop();
    }
    return rev;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Reversed string: " << reverseString(s) << endl;
    return 0;
}