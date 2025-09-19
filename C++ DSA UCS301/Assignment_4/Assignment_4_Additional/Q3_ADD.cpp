#include <iostream>
#include <queue>
#include <stack>

using namespace std;

bool checkSorted(queue<int>& q)
{
    stack<int> s;
    int expected = 1;
    while (!q.empty())
    {
        int f = q.front(); q.pop();
        if (f == expected) expected++;
        else if (!s.empty() && s.top() < f) return false;
        else s.push(f);
        
        while (!s.empty() && s.top() == expected)
        {
            s.pop(); expected++;
        }
    }
    return true;
}

int main()
{
    queue<int> q;
    q.push(5); q.push(1); q.push(2); q.push(3); q.push(4);
    cout << (checkSorted(q) ? "Yes" : "No") << endl;
    return 0;
}