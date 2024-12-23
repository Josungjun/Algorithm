/*
2초 -> 6~10억개
512 -> 1억2000만개
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s, e;
        cin >> s >> e;
        int dist = e - s;
        int max = sqrt(dist);
        if(dist == max * max) cout << max * 2 - 1 << '\n';
        else if(dist <= max * max + max && dist > max * max) cout << max * 2 << '\n';
        else cout << max * 2 + 1 << '\n';
    }
    return 0;
}
