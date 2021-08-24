//TITLE: A_Arrival_of_the_General.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-05
//TIME: 13:24:17
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
    int x;
    cin>>x;
    int arr[x];
    int b[x];
    FOR(i,0,x)
    {
        cin>>arr[i];
        b[i]=arr[i];
    }
    sort(b,b+x);
    int mi=b[0];
    int ma=b[x-1];
    int ind1,ind2;
    FOR(i,0,x)
    {
        if(arr[i]==mi)
        {
            ind1=i+1;
        }
        if(arr[i]==ma)
        {
            ind2=i+1;
        }
    }
    cout<<ind1<<" "<<ind2<<endl;
    cout<<x-ind1+ind2-1<<endl;
}