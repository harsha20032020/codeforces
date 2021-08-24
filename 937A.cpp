#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int a[test];
    int counter;
    for(int i = 0; i < test; i++)
    {
        cin>>a[i];
    }
    sort(a,a+test);
    for(int i=0; i < test-1; i++)
    {
        if((a[i] != a[i+1])&&(a[i]>0))
        {
            counter++;
        }
    }
    cout<<counter+1<<endl;
}