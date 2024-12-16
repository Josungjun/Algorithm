#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i*i <= n; i++)
    {
    	if(i*i == n) 
    	{
    	    cout << 1 << '\n';
            return 0;
    	}
    }
    cout << 0 << '\n';
}
