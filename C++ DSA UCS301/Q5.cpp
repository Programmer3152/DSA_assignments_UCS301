#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int evalPostfix(const string &postfix) 
{
    stack<int> st;
    for (char c : postfix) 
    {
        if (isdigit(c))
            st.push(c - '0');
        else 
        {
            int b = st.top(); 
                st.pop();
            int a = st.top(); 
                st.pop();
            switch (c) 
            {
                case '+': 
                    st.push(a + b); break;
                case '-': 
                    st.push(a - b); break;
                case '*': 
                    st.push(a * b); break;
                case '/': 
                    st.push(a / b); break;
                case '^':
                    st.push(static_cast<int>(pow(a, b))); break;
                default:
                    break;
            }
        }
    }
    return st.top();
}

int main() 
{
    string postfix;
    cout << "Enter postfix expression (single digit operands): ";
    getline(cin, postfix);
    cout << "Evaluated value: " << evalPostfix(postfix) << endl;
    return 0;
}