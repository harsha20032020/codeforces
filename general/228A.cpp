#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    int counter=4;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    for(int i=0;i<4;i++)
    {
        if(a[i]==a[i+1])
        {
            counter--;
        }
    }
    cout<<4-counter<<endl;
}
