// remove all the elements present at even postiton in queu
// Consider 0-based indexing

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void display(queue<int> &q)
{

    for (int i = 0; i < q.size(); i++)
    {
        int val = q.front();
        cout << val << " ";
        q.pop();
        q.push(val);
    }
}
int main()
{

    queue<int> q;
    stack<int> st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int n = q.size();

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
    }
    display(q);

    return 0;
}