#include <iostream>
#include <stack>
using namespace std;

void pushAtBottm(stack<int> &s, int val)
{
    if (s.size() == 0)
    {
        s.push(val);
        return;
    }
    int x=s.top();
    s.pop();
    pushAtBottm(s, val);
        // cout << x << " ";
    s.push(x);
}

void displayRec(stack<int> temp)
{
    if (temp.size() == 0)
    {
        return;
    }

    int x = temp.top();

    temp.pop();
    displayRec(temp);
    cout << x << " ";
    temp.push(x); // used to matain the oriiganl stack
                  // otherwise stack will become empty
}
int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
       displayRec(st);
    pushAtBottm(st, 50);
    cout<<endl;
  displayRec(st);
    return 0;
}