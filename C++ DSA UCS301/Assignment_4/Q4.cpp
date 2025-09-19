#include <iostream>
#include <string>
#include <queue>

using namespace std;

void findFirstNonRepeating(string stream)
{
    int charCount[26] = {0};
    queue<char> q;

    for (char ch : stream)
    {
        q.push(ch);
        charCount[ch - 'a']++;
        while (!q.empty())
        {
            if (charCount[q.front() - 'a'] > 1) q.pop();
            else
            {
                cout << "First non-repeating char is: " << q.front() << endl;
                break;
            }
        }
        if (q.empty()) cout << "-1" << endl;
    }
}

int main()
{
    string stream = "aabc";
    findFirstNonRepeating(stream);
    return 0;
}s