//TITLE: A_Remove_Smallest.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-04
//TIME: 22:45:47
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
    int test;
    cin>>test;
    bool flag = false;
    while(test--)
    {
        int x;
        cin>>x;
        int arr[x];
        FOR(i,0,x)
        {
            cin>>arr[i];
        };
        sort(arr,arr+x);
        for(int i=1;i<x;i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                cout<<"NO\n";
                flag=true;
            }
        }
        if(flag==false || x==1)
        {
            cout<<"YES\n";
        }
    }
}