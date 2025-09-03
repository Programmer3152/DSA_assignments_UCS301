#include <iostream>
#include <vector>
#include <stack>

using namespace std;
//function to find nearest smallest element
void findNSE(vector<int>& arr)
{
    stack<int> s;
    vector<int> res(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        while (!s.empty() && s.top() >= arr[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            res[i] = -1;
        }
        else
        {
            res[i] = s.top();
        }

        s.push(arr[i]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " --> " << res[i] << endl;
    }
}

int main()
{
    vector<int> arr = {4, 5, 2, 10, 8};
    findNSE(arr);
    return 0;
}
