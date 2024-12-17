/*
시간 1초 : 3~5억
메모리 제한 : 3000만
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n >> x;
    
    while(n--)
    {
        int tmp;
        cin >> tmp;
        if(tmp < x) cout << tmp << ' ';
    }
}
