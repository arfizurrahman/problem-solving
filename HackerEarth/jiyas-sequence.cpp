#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n;
    ll result = 1;
    cin >> n;

    while (n--)
    {
        int Ai;
        cin >> Ai;
        result *= Ai;
    }

    int lsd = result % 10;
    if(lsd == 2 || lsd == 3 || lsd == 5 ) 
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
     
}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  fast_cin();
  int t;
  cin >> t;
  while (t--){
      solve();
  }
}