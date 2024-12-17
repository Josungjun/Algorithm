//[Silver1] 1105.cpp
//[팥] - 그리디

/*
2초 - 6~10억
512mb - 6000만
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string L, R;
    cin >> L >> R;
    int L_L = L.length();
    int R_L = R.length();
    
    if(L_L != R_L)
    {
        cout << 0 << '\n';
    }
    else
    {
        int count = 0;
        for(int i = 0; i < R_L; i++)
        {
            if(L[i] == R[i])
            {
                if(L[i] == '8') count++;
                else continue;
            }
            else break; 
        }
        
        cout << count << '\n';
    }
}

/*
숫자의 경우 앞에서 부터 같으면 뒤에를 비교할 필요가 있지만 그게 아니라면 굳이 비교해볼 필요가 없음을 통함
반례 1280 1281의 경우를 통과하기 위해 if(L[i] == '8' && R[i] == '8') 을 위의 코드와 같이 수정했음.
*/
