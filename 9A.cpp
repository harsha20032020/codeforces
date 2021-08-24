#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int d=7-max(x,y);
    int m=__gcd(d,6);
    cout<<d/m<<"/"<<6/m<<endl;
}