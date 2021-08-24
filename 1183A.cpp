#include <bits/stdc++.h>
using namespace std;
int sumn(int n)
{
    int sum=0;
    while (n > 0)
    {
        int m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int s;
    cin >> s;
    int sum1=sumn(s);
    if (sum1 % 4 == 0)
    {
        cout << s << endl;
    }
    else if (sumn(s+1)%4==0)
    {
        cout << s+1 << endl;
    }
    else if (sumn(s+2)%4==0)
    {
        cout << s+2 << endl;
    }
    else if (sumn(s+3)%4==0)
    {
        cout << s+3 << endl;
    }
    else 
    {
        cout << s+4 << endl;
    }
}