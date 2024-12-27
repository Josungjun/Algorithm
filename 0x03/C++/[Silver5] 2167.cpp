#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n+1][m+1] = {0,};
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> arr[i][j];
    
    int k;
    cin >> k;
    while(k--)
    {
        int a, b, c, d, sum = 0;
        cin >> a >> b >> c >> d;
        for(int i = a; i <= c; i++)
        {
            for(int j = b; j <= d; j++)
            {
                sum += arr[i][j];
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
