#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int one,five,ten,twe,hun;
    hun=x/100;
    twe=(x-(100*hun))/20;
    ten=(x-(100*hun)-(20*twe))/10;
    five=(x-(100*hun)-(20*twe)-(10*ten))/5;
    one=(x-(100*hun)-(20*twe)-(10*ten)-(5*five))/1;
    cout<<hun+twe+ten+five+one<<endl;
}