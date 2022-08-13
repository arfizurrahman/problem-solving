#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int N;
    string s;

    cin>> N >> s;
    ll decimal_num = 0, power = 1;

    for(int i=N-1;i>=0;i--){
        decimal_num += ((int)s[i]-'0') * (ll)pow(2,N-1-i);
    }
    cout<<decimal_num<<endl;
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