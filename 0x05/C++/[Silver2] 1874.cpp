//스택 수열

#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    int n, count = 0, num = 1;
    bool flag = true;
    vector<char> ans;
    
    cin >> n;
    int correct[n];

    for(int i = 0; i < n; i++)
        cin >> correct[i];

    while(count < n && flag)
    {
        if(!s.empty() && s.top() == correct[count])
        {
            ans.push_back('-');
            s.pop();
            count++;
        }
        else if(num <= n)
        {
            s.push(num++);
            ans.push_back('+');
        }
        else
        {
            flag = false;
        }
    }

    if(flag)
    {
        for(auto a : ans)
            cout << a << '\n';
    }
    else
        cout << "NO" << '\n';

    return 0;
}