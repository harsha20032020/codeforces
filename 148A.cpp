#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int count1,count2,count3,count4;
    count1=(d/a)+(d/b)+(d/c)+(d/d);
    count2=(d/(a*b))+(d/(a*c))+(d/(a*d))+(d/(b*c))+(d/(d*b))+(d/(c*d));
    count3=(d/(a*b*c))+(d/(b*a*d))+(d/(b*d*c))+(d/(d*a*c));
    count4=(d/(a*c*d*b));
    cout<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<endl;
}