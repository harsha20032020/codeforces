#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int test;
    cin>>test;
    int arr[test];
    int copyarr[test];
    for (int i =0; i<test; i++)
    {
        cin>>arr[i];
        copyarr[i]=arr[i];
    }
    sort(arr,arr+test);
    int min=arr[0];
    int max=arr[test-1];
    int ind1,ind2;
    for(int i=0;i<test;i++)
    {
        if(min==copyarr[i])
        {
            ind1=i;
            //break;
        }
    }
    for(int i=0;i<test;i++)
    {
        if(max==copyarr[i])
        {
            ind2=i;
            break;
        }
    }
    printf("%d %d\n",ind1,ind2);
    printf("%d\n",ind2+test-ind1-2);
}