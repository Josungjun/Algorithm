//제로

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    stack<int> s;

    while(t--)
    {
        int n;
        cin >> n;
        
        if(n == 0)
        {
            if(!s.empty())
                s.pop();
        }
        else
            s.push(n);
    }
    
    int ans = 0;

    while(!s.empty())
    {
        ans += s.top();
        s.pop();
    }

    cout << ans;
    return 0;
}