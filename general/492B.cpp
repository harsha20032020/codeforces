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
   int n,l;
   cin>>n>>l;
   int arr[n+1];
   arr[n]=l;
   FOR(i,0,n)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   double soln=0;
   FOR(i,0,n)
   {
        int max=arr[i+1]-arr[i];
        if(max>soln)
        {
            soln=max;
        }
   }
   int z=arr[0];
   int a=arr[n]-arr[n-1];
   int m2=max(z,a);
   if(soln<2*m2)
   {
        soln=2*m2;
   }
   soln/=2;
   printf("%.10f\n",soln);
}