//탑

#include <bits/stdc++.h>

#define X first
#define Y second

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    stack<pair<int, int>> s;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;

        while(!s.empty() && s.top().Y <= num)
            s.pop();

        if(s.empty())
            cout << 0 << ' ';    
        else
            cout << s.top().first << ' ';

        s.push({i, num});
    }
    return 0;
}