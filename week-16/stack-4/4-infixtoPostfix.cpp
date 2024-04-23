#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prority(char ch)
{
    if (ch == '/' || ch == '*')
        return 2;
    else
        return 1;
}

string solve(char ch,string val1,string val2){
    string ans="";
    ans+=val1;
    ans+=val2;
    ans+=ch;// bas yha pr change hai order mai

    return ans;

}
int main()
{

    string s = "2+6*4/8-3"; // infix expression
                            // we need to two stacks ,1 for val and 2 for opertor
    //  string s = "9+6*4/2-3";
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        // check  if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        { // digit
            val.push(to_string(s[i]-48));
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
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();

                    string ans = solve(ch,val1,val2) ;// string Concatenation
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
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();

        string ans = solve(ch,val1,val2) ;// string Concatenation
        val.push(ans);
    }
    cout << "Answer is " << val.top();
    return 0;
}