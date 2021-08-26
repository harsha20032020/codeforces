#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l;
    cin >> l;
    int a[26]={0};
    int count=0;
    cin >> s;
    if (l < 26)
    {
        cout << "NO\n";
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            int x;
            x=s[i];
            {
                if (x >= 'a' || x < 'z')
                {
                    a[x - 'a']++;
                }
                else
                {
                    a[x - 'A']++;
                }
            }
        }
    }

    for (int i = 0; i < l; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    if(count==26)
    {
        cout<<count<< endl;
        cout<<"YES\n";
    }
    else
    {
        cout<<count<< endl;
        cout<<"NO\n";
    }
}