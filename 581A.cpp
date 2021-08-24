#include <bits/stdc++.h>
using namespace std;
int main()
{
    int red,blue;
    cin >> red >> blue;
    int m=max(red,blue);
    int n=min(red,blue);
    cout<<n<<" "<<(m-n)/2<<endl;
}