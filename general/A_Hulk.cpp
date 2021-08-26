//TITLE: A_Hulk.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-07-24
//TIME: 06:42:15
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
    string send="I hate it";
    string s="I hate that";
    string rend="I love it";
    string r="I love that";
    int x;
    cin>>x;
    FOR(i,0,x)
    {
       if(i%2==0 && i!=x-1)
       {
           cout<<s<<" ";
       }
       if(i%2==1 && i!=x-1)
       {
           cout<<r<<" ";
       }
       if(i%2==0 && i==x-1)
       {
           cout<<send<<" ";
       }
       if(i%2==1 && i==x-1)
       {
           cout<<rend<<" ";
       }
    }

}