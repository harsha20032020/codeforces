#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int sx=0,sy=0,sz=0;
    int x,y,z;
    while(test--)
    {
        cin>>x>>y>>z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    if(sx==0 && sy==0 && sz==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}