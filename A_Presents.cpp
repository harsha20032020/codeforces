//TITLE: A_Presents.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-07-24
//TIME: 06:21:11
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
    vi numbers;
    int x;
    cin>>x;
    int index[x+5];
    FOR(i,0,x)
    {
        int y;
        cin>>y;
        numbers.pb(y);
        index[y-1]=i+1;
    }
    FOR(i,0,x)
    {
        cout<<index[i]<<" ";
    }
}
