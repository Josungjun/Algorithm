#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    for(i = 1; i*2 <= n; i=i*2);
    cout << i << '\n';
    return 0;
}
