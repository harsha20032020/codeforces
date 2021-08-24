#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int testac=test;
    int count[test+1]={0};
    int x,counter=0;
    int p,q;
    cin>>p;
    while(p--)
    {
        int x;
        cin>>x;
        count[x]++;
    }
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        count[x]++;
    }
    while(test--)
    {
        if(count[test+1]>0)
        {
            counter++;
        }
    }
    if(counter==testac)
    {
        cout<<"I become the guy.\n";
    }
    else
    {
        cout<<"Oh, my keyboard!\n";
    }
}