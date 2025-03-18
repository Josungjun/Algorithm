//스택

#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> stk;
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        if(s == "push")
        {
            int num;
            cin >> num;
            stk.push(num);
        }
        else if(s == "top")
        {
            if(!stk.empty())
                cout << stk.top() << '\n';
            else
                cout << -1 << '\n';
        }
        else if(s == "pop")
        {
            if(!stk.empty())
            {
                cout << stk.top() << '\n';
                stk.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if(s == "size")
        {
            cout << stk.size() << '\n';
        }
        else if(s == "empty")
        {
            if(stk.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
    }
    return 0;
}