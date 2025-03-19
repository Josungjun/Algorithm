//오큰수

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t+1];
    int ans[t+1];
    stack<int> s;

    for(int i = 0; i < t; i++)
        cin >> arr[i];

    for(int i = t-1; i >= 0; i--)
    {
        while(!s.empty() && s.top() <= arr[i])
            s.pop();

        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();

        s.push(arr[i]);
    }

    for(int i = 0; i < t; i++)
    {
        cout << ans[i] << ' ';
    }

    return 0;
}