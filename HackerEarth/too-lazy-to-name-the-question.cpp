#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int lcm(int a, int b){
    int lcm = a > b ? a : b;

    while(1){
        if(lcm%a == 0 && lcm%b == 0){
            return lcm;
        }
        lcm++;
    }
}

int get_step(int start, int a, int b){

  if(start%a == 0 && start%b == 0) return lcm(a,b);
  
  if(start%a == 0) return a;
  
  if(start%b == 0) return b;

  return 0;
}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  fast_cin();
  
  int a, b, c;
  cin >> a >> b >> c;
  int arr[c];
  
  int j = 1, i = 0;
  
  while(i < c){
    if(j%a == 0 || j%b == 0){
      arr[i++] = j;
    }
    j++;
  }
  
   int start = arr[c-1];
   int step = get_step(start,a,b);
   
   while (start >= 0)
   {
      cout << start << " ";
      start -= step;
   }
   

}