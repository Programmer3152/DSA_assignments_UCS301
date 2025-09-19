#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

void sortQ(queue<int>& q)
{
    vector<int> v;
    while(!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    sort(v.begin(), v.end());
    for(int x : v) q.push(x);
}

int main()
{
    queue<int> q;
    q.push(11); q.push(5); q.push(4); q.push(21);
    sortQ(q);
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}