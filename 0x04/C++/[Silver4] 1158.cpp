//요세푸스 문제

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    queue<int> q;
    for(int i = 1; i <= n; i++)
        q.push(i);

    while(!q.empty())
    {
        for(int i = 0; i < k-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        ans.push_back(q.front());
        q.pop();
    }
    cout << '<';
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if(i != ans.size() - 1) cout << ", ";
    }
    cout << '>';
}