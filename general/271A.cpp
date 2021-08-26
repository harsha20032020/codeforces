#include <bits/stdc++.h>
using namespace std;
int alldistinct(int year)
{
    int x=year/1000;
    int y=(year-(1000*x))/100;
    int z=(year-(1000*x)-(100*y))/10;
    int a=(year-(1000*x)-(100*y)-(10*z))/1;
    if((x!=y)&&(x!=z)&&(x!=a)&&(y!=z)&&(y!=a)&&(z!=a))
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}
int main()
{
    int y;
    cin>>y;
    while(alldistinct(y+1))
    {
        y++;
    }
    cout<<y+1<<endl;
}