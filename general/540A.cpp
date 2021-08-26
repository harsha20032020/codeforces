#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int a[l],b[l];
    int count=0;
    for(int i=0; i<l;i++)
    {
        scanf("%1d",&a[i]);
    }
    for(int i=0; i<l;i++)
    {
        scanf("%1d",&b[i]);
        int m=min(abs(a[i]-b[i]),abs(10-abs(b[i]-a[i])));
        count+=m;
    }
    cout<<count<<endl;
}