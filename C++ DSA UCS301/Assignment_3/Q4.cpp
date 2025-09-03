#include <iostream>
#include <stack>
#include <string>
using namespace std;
int precedence(char op) 
{
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}
string infixToPostfix(const string &infix) 
{
    stack<char> st;
    string postfix;
    for (char c : infix) 
    {
        if (isalnum(c))
            postfix += c;
        else if (c == '(')
            st.push(c);
        else if (c == ')') 
        {
            while (!st.empty() && st.top() != '(') 
            {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        } 
        else 
        { 
            while (!st.empty() && precedence(c) <= precedence(st.top())) 
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) 
    {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main() 
{
    string infix;
    cout << "Enter infix expression: ";
    getline(cin, infix);
    cout << "Postfix expression: " << infixToPostfix(infix) << endl;
    return 0;
}