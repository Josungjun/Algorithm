#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int alpha[26];
    fill(alpha, alpha + 26, 0);
    for(auto a : s)
    	alpha[a - 'a']++;
 
    for(int i = 0; i < 26; i++)
        cout << alpha[i] << ' ';
    return 0;
}
