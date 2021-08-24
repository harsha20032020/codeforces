#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int m1 = max(a, b);
        int m2 = max(m1, c);
        int diff = 3 * m2 - (a + b + c);
        if (((d - diff) % 3 == 0)&&((d-diff)>=0))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}