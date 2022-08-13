#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
typedef long long ll;
typedef unsigned long long ull;

int lcm(int a, int b){
    int lcm = a > b ? a : b;

    while(1){
        if(lcm%a == 0 && lcm%b == 0){
            return lcm;
        }
        lcm++;
    }
}


int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  fast_cin();
  int a, b;
  cin >> a >> b;

  cout << lcm(a,b);
  return 0;
}