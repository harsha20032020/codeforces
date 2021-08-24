//TITLE: B_Pleasant_Pairs.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-07-24
//TIME: 15:55:58
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
    
    while(test--)
    {
        int ctr=0;
        int x;
        cin>>x;
        int arr[x+5]={-1};
        int flag=0;
        FOR(i,1,x+1)
        {
            cin>>arr[i];
        }
        FOR(i,1,x+1)
        {
            FOR(j,1,x+1)
            {
                //cout<<i<<" "<<j<<" "<<arr[i]*arr[j]<<endl;
                if(i<j && (arr[i]*arr[j]==i+j))
                {
                    ctr++;
                }
                if(i*j>2*(x+1))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }

        }
        cout<<ctr<<endl;
    }
}