#include <bits/stdc++.h>
using namespace std;
int isodd(int x)
{
    if (x % 2 == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y;
        cin>>x>>y;
        if ((isodd(x) == 1 && isodd(y) == 1) || (isodd(x) == 0) && (isodd(y) == 0))
        {
            cout << "1\n";
        }
        else if (x == y)
        {
            cout << "0\n";
        }
        else
        {
            cout << "2\n";
        }
    }
}