#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void interleave(queue<int>& q)
{
    if (q.size() % 2 != 0) return;
    stack<int> s;
    int half = q.size() / 2;
    for (int i = 0; i < half; i++)
    {
        s.push(q.front()); q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top()); s.pop();
    }
    for (int i = 0; i < half; i++)
    {
        q.push(q.front()); q.pop();
    }
    for (int i = 0; i < half; i++)
    {
        s.push(q.front()); q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top()); s.pop();
        q.push(q.front()); q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(11); q.push(12); q.push(13); q.push(14);
    interleave(q);
    while (!q.empty())
    {
        cout << q.front() << " "; q.pop();
    }
    cout << endl;
    return 0;
}