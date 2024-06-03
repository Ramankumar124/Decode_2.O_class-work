#include <iostream>
#include <stack>
using namespace std;

int prority(char ch)
{
    if (ch == '/' || ch == '*')
        return 2;
    else
        return 1;
}

int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
int main()
{

    string s = "2+6*4/8-3"; // infix expression
                            // we need to two stacks ,1 for val and 2 for opertor
    //  string s = "9+6*4/2-3";
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        // check  if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {                        // digit
            val.push(s[i] - 48); // convert char to integer
        }
        else
        { // s[i] is + ,- ,/, *
            if (op.size() == 0)
                op.push(s[i]);
                
            else if (prority(s[i]) > prority(op.top()))
                op.push(s[i]);
            else
            { // prority(s[i]) < priority(op.top()
                // work
                while (op.size() > 0 && prority(s[i]) <= prority(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();

                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // now shyyad operator stack can have values
    while (op.size() > 0)
    {
        // work
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();

        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<"Answer is "<<val.top();
    return 0;
}