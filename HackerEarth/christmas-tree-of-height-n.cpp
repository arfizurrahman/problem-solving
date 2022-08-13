#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    ll n;
    cin >> n;
    ll a[n][n];
    
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j <= i; j++)
        {
            if(j == 0 || j == i){
                a[i][j] = 1;
            }else{
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  fast_cin();

  ll t;
  cin >> t;
  while (t--){
      solve();
  }
  return 0;
}