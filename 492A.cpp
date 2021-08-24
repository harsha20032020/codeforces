#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int sum = 0;
    for (int i=0;i<=x;i++)
    {
        sum+=(i*(i+1))/2;
        if(sum>x)
        {
            cout<<i-1<<endl;
            break;
        }
        if(sum==x)
        {
            cout<<i<<endl;
            break;
        }
        if(x==1)
        {
            cout<<"1"<<endl;
            break;
        }
    }
}