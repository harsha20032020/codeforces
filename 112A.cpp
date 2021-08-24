#include <bits/stdc++.h>
using namespace std;
string convert(string s)
{
    string sedit;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>=97)&&(s[i]<=132))
        {
            sedit[i]=s[i]-32;
        }
        else
        {
            sedit[i]=s[i];
        }
    }
    return sedit;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<convert(s1)<<" "<<convert(s2)<<endl;
    if(s1>s2)
    {
        cout<<"1\n";
    }
    else if (s1<s2)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<"O\n";
    }
}
