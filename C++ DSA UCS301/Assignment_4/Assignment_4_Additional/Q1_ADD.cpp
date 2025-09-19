#include <iostream>
#include <string>
#include <queue>

using namespace std;

void genBin(int n)
{
    queue<string> q;
    q.push("1");
    for(int i = 0; i < n; i++)
    {
        string curr = q.front();
        cout << curr << " ";
        q.pop();
        q.push(curr + "0");
        q.push(curr + "1");
    }
    cout << endl;
}

int main()
{
    int n = 5;
    genBin(n);
    return 0;
}
