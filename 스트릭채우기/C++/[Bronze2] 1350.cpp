#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, k, ans = 0;
    cin >> n;
    long long arr[n+1];
    for(int i = 0; i < n; i++)
    	cin >> arr[i];
    cin >> k;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0) continue;
        else
        {
            if(arr[i] % k != 0) ans += k;
            ans += (arr[i] / k) * k;
        }
    }
    cout << ans;
}
