#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks=(k*l)/(n*nl);
    int salt=(p/n*np);
    int lemon=(c*d)/n;
    int max1=min(drinks,salt);
    int maxr=min(max1,lemon);
    cout<<maxr<<endl;
}