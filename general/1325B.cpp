#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int dis=0;
    while(test--)
    {
        int x;
        dis=0;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }
        sort(a,a+x);
        for(int i=0;i<x;i++)
        {
            if(a[i]!=a[i+1])
            {
                dis++;
            }
        }
        cout<<dis<<endl;
    }
}
