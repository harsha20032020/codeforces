#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int cl1=0,cl2=0,cr1=0,cr2=0,x,y;
    while(test--)
    {
       cin>>x>>y;
       if(x==1)
       {
           cl1++;
       }
       else 
       {
           cl2++;
       }
       if(y==1)
       {
           cr1++;
       }
       else
       {
           cr2++;
       }
    }
    cout<<min(cr1,cr2)+min(cl2,cl1)<<endl;
}