//시간 : 0.3 초 1억~2억
//메모리 : 512MB 1억 2천만
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int n;
    cin >> s >> n;
    list<char> l;
    for(char c : s)
    {
        l.push_back(c);
    }

    auto it = l.end();

    for(int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if(c == 'L')
        {
            if(it != l.begin()) it--;
        }
        else if(c == 'D')
        {
            if(it != l.end()) it++;
        }
        else if(c == 'B')
        {
            if(it != l.begin())
            {
                it = l.erase(--it);
            }
        }
        else if(c == 'P')
        {
            char in;
            cin >> in;
            l.insert(it, in);
        }
    }

    for (auto it = l.begin(); it != l.end(); ++it) 
    {
        std::cout << *it;
    }
    return 0;
}