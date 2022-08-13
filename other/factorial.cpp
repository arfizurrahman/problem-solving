#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int factorial(int n){
    if(n==1) return n;
    return n * factorial(n-1);
}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  fast_cin();
  int n;
  long long f = 1;
  cin >> n;
 
  for (int i = 1; i <= n; i++)
  {
    f *= i;
  }
  
  cout << f << endl;
  cout << factorial(n);
}