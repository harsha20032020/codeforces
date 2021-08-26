#include <bits/stdc++.h>
using namespace std;
int isprime(int x)
{
    int count = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % 2 == 0)
        {
            count++;
        }
    }
    if (count > 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int x, y;
    int count = 0;
    cin >> x >> y;
    int dum = 0;

    for (int i = x + 1; i <= y; i++)
    {
        if (isprime(i))
        {
            if (i == y)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        break;
    }
    cout << "NO\n";
}