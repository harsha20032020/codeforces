#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.length()-1;i++)
    {
        int m=min(abs(s[i]-s[i+1]),abs(26-abs(s[i+1]-s[i])));
        count+=m;
    }
    cout<<count<<endl;
}