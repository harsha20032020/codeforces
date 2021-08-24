#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> y >> x;
    for(int i = 0; i <y;i++)
    {
        for(int j = 0; j <x;j++)
        {
            if(j==x-1)
            {
                cout<<"#";
            }
            if(i%2==0)
            {
                cout<<"#";
            }
            else
            {
                cout<<".";
            }

        }
        cout<<endl;
    }
}