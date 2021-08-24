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
struct nodes{
    string st;
    int count;
};
struct nodes hasherr[9899999]={0};
int hasher(string str)
{
    int sum=0;
    FOR(i,0,sz(str))
    {
        sum+=31*(i+1)*(str[i]+i)%9899999;
    }
    hasherr[sum].st=str;
    hasherr[sum].count++;
    return sum;
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
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        int d=hasher(str);
        if((hasherr[d].st==str)&&(hasherr[d].count>1))
        {
            cout<<str<<d-1<<endl;
        }
        else
        {
            cout<<"OK\n";
        }
    }
}