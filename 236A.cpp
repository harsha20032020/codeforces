#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[26]={0};
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int x;
        if(x=s[i])
        {
            a[x-97]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]>0)
        {
           count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }
}