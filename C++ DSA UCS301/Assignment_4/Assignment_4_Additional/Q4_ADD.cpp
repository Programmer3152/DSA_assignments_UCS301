#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int countStudents(vector<int>& studs, vector<int>& sands)
{
    queue<int> q;
    for (int s : studs) q.push(s);
    stack<int> st;
    for (int i = sands.size() - 1; i >= 0; i--) st.push(sands[i]);
    
    int unable = 0;
    while (!q.empty() && unable < q.size())
    {
        if (q.front() == st.top())
        {
            q.pop(); st.pop(); unable = 0;
        }
        else
        {
            q.push(q.front()); q.pop(); unable++;
        }
    }
    return q.size();
}

int main()
{
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};
    cout << countStudents(students, sandwiches) << endl;
    return 0;
}