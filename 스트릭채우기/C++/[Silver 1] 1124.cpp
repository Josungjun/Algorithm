/*
2초 - 6~10억
128 - 3000천만
*/

#include <bits/stdc++.h>

using namespace std;

#define maxN 100001

int arr[maxN];

int eratosthenes(int x)
{
    arr[0] = 1, arr[1] = 1;
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(arr[i] == 1)
            continue;
        
        for(int j = 2 * i; j <= x; j += i) 
        {
            if(arr[j]) continue;
            arr[j] = 1;
        }
    }
    
    return 0;
}

int factorization(int num)
{
    int cnt = 0;
    for(int i = 2; i <= num; i++)
    {
        if(arr[i] == 1) continue;
        
        while(num % i == 0)
        {
            num /= i;
            cnt++;
        }
        
        if(num == 1) break;
    }
    
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int low, high, ans = 0;
    cin >> low >> high;
    
    eratosthenes(high);
    
    for(int i = low; i <= high; i++)
    {
        if(arr[factorization(i)] == 1) continue;
        ans++;
    }
    
    cout << ans << '\n';
    return 0;
}

/*
이 코드의 개선점으로, count를 하는 부분에서 memoization을 이용하면 메모리는 물론 더 사용하겠지만, 더 짧은 시간내에 처리 가능하다.
이 문제는, 소인수분해와 에네토스테네스의 체를 구현하면 전부이다.
*/
