//stack 구현해보기

#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int stk[MX];
int pos = 0;

void push(int x)
{
    stk[pos++] = x;
}

void pop()
{
    pos--;
}

int top()
{
    return stk[pos-1];
}

void test()
{
    push(5); push(4); push(3);
    cout << top() << '\n';
    pop(); pop();
    cout << top() << '\n';
    push(10); push(12);
    cout << top() << '\n';
    pop();
    cout << top() << '\n';
}

int main()
{
    test();
    return 0;
}