#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int space[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    sort(arr, arr + n);
    int ans = 1;
    
    for(int i = 0; i < n; i++)
    {
        int k = 1;
        for(int j = i + 1; j < i + 5; j++)
        {
            if(j >= n) break;
            if(arr[j] - arr[i] < 5) k++;
        }
        ans = max(ans, k);
    }
    if(ans == 5) cout << 0;
    else cout << 5 - ans;
    
    return 0;
}

/*
5연속이라는 것을 망각하면 상당히 어려워지는 문제
*/
