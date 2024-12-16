#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    	cin >> arr[i];
    
    for(int i = 0; i < n; i++)
    	for(int j = i+1; j < n; j++)
    	{
    	    if(arr[i] + arr[j] == 100)
    	    {
    	    	cout << 1 << '\n';
    	    	return 0;
    	    }
    	    
    	}
    	
    cout << 0 << '\n';
}
