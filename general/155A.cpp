#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int x[test];
    int max=0,min=0,count=0;
    for(int i=0; i<test;i++)
    {
        cin>>x[i];
        if(i==0)
        {
            min=x[i];
            min=x[i];
        }
        if(x[i]>max)
        {
           max=x[i];
           count++;
        }
        else if (x[i]<min)
        {
            min=x[i];
            count++;
        }
        if((test==1)||(max==0))
        {
            count=1;
        }
    }
    cout<<count-1<<endl;
}