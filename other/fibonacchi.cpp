#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned long long ull;

int fibonacci(int n){
    if(n <= 1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}


int fibonacci_loop(int n){
    int first_num=0, second_num=1, num;
    for (int i = 0; i <= n; i++)
    {
        if(i <= 1)
        {
            num = i;
        }
        else{
            num = second_num + first_num;
            first_num = second_num;
            second_num = num;
        }
    }

    return second_num;
}


int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  fast_cin();
  ll num;
  cin >> num;

  cout << fibonacci_loop(num);
}