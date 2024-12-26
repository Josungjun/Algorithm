#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, ans;
    cin >> a >> b >> c;
    ans = a * b * c;
    int num[10] = {0, };
    while(ans > 0)
    {
        num[ans % 10]++;
        ans /= 10;       
    }
    
    for(int i = 0; i < 10; i++)
        cout << num[i] << '\n';
        
    return 0;
}
