#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned long long ull;

void solve(){
}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  fast_cin();
  
  string str;
  getline(cin,str);
  
  for(int i = 0; i < str.length(); i++){
    if(str[i] == ' '){
      cout << endl;
    }else{
      char c = (int)str[i] - 32;
      cout << c;
    }
  }

}