//키로거

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        string s;
        cin >> s;
        list<char> L;
        auto it = L.begin();

        for(auto c : s)
        {
            if(c == '<')
            {
                if(it != L.begin())
                    it--;
            }
            else if(c == '>')
            {
                if(it != L.end())
                    it++;
            }
            else if(c == '-')
            {
                if(it == L.begin()) continue;
                it = L.erase(--it);
            }
            else
            {
                L.insert(it, c);
            }
        }
        for(auto c : L)
            cout << c;
        cout << '\n';
    }
    
    return 0;
}
