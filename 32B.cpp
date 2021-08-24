#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for (int i = 0; i < (n); i++)
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string s, r;
    cin >> s;
    int n{0}, i{0};
    n = s.size();
    for (i = 0; i < n - 1; ++i)
    {
        if (s[i] == '.')
            r += '0';
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            r += '1';
            ++i;
        }
        else
        {
            r += '2';
            ++i;
        }
    }
    if (i != n)
        r += '0';

    cout << r << endl;
    return 0;
}