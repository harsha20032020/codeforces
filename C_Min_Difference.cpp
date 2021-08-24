//TITLE: C_Min_Difference.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-05
//TIME: 09:19:05
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
    int n,m;
    cin>>n>>m;
    ll a[n];
    ll b[m];
    FOR(i,0,n)
    {
        cin>>a[i];
    }
    FOR(i,0,m)
    {
        cin>>b[i];
    }
    ll min=INF;
    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            if(abs(a[i]-b[j])<min)
            {
                min=abs(a[i]-b[j]);
            }
        }
    }
    cout<<min<<endl;
}