#include <bits/stdc++.h>
using namespace std;
int main()
{
   char rank1,suit1;
   int count=0;
   cin >> rank1 >> suit1;
   char rank[5],suit[5];
   for (int i = 0; i <5;i++)
   {
       cin>>rank[i]>>suit[i];
       if((rank[i]==rank1)||(suit[i]==suit1))
       {
           count++;
       }
   }
   if(count>0)
   {
       cout<<"YES\n";
   }
   else
   {
       cout<<"NO\n";
   }
}