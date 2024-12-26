#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, maxN = 0;
    cin >> n;
    int num[10] = {0, };
    while(n > 0)
    {
        num[n % 10]++;
        n /= 10;
    }
    num[6] = num[9] = (num[6] + num[9] + 1) / 2;
    for(int i = 0; i < 10; i++)
    {
        maxN = max(num[i], maxN);
    }
    
    cout << maxN;
    
    return 0;
}
