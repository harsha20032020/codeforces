//TITLE: A_Lucky_Division.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-05
//TIME: 14:39:28
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define mp make_pair
#define pb push_back
#define S second
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FO(x) for (int i = 0; i < x; i++)
#define ROF(x) for (int i = x; i >= 0; i--)
#define sz(a) (ll)(a.size())
#define all(a) a.begin(), a.end()
const int mod = 1e9 + 7;
const ll INF = 1e18;
int lucky(int x)
{
    string s=to_string(x);
    FOR(i,0,sz(s))
    {
        if(s[i]!='7' || s[i]!='4')
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    /*for fastness*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /*if input file is given and output file needs to be generated
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
    int x;
    cin>>x;
    bool flag=false;
    FOR(i,1,x+1)
    {
        //cout<<lucky(4)<<endl;
        if(lucky(i))
        {
            //cout<<i<<endl;
            cout<<i<<endl;
            if(x%i==0)
            {
                
                flag=true;
            }
        }
    }
    if(flag==true)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}