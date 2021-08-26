#include <bits/stdc++.h>
using namespace std;
void distinct(int a[], int num,int b)
{
    for (int i = 0; i < num; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (a[i] == a[j])
                break;
        if (i == j)
            cout << i+1<<" ";
            b--;
            if (b == 0)
            {
                break;
            }
    }
}
int main()
{
    int test,nos;
    cin>>test>>nos;
    int a[test];
    int b[test];
    int counter;
    for(int i = 0; i < test; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    
    sort(b,b+test);
    for(int i=0; i < test-1; i++)
    {
        if((b[i] != b[i+1])&&(b[i]>0))
        {
            counter++;
        }
    }
    if(counter+1>=nos && test>0 )
    {
        cout<<"YES\n";
        distinct(a, test,nos+1);
    }
    else
    {
        cout<<"NO\n";
    }
}
