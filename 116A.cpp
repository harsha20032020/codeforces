#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int testac=test;
    int count[test] = {0};
    int sum={0};
    while (test--)
    {
        int enter, exit;

        cin >> exit >> enter;
        sum+=enter-exit;
        count[testac-test]=sum;
    }
    sort(count,count+testac);
    cout<<count[testac-1];

}