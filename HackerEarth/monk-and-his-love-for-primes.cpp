#include <bits/stdc++.h> 
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
bool prime(int n){
    if(n == 0 || n == 1) return 1;
    
    for (int i = 2; i < n/2; i++)
    {
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  fast_cin();
  
    int num=0;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        int ascii = (int)str[i];
        
        if(ascii >= 97){
           num += (ascii-32);
        }else{
            num -= (ascii+32);
        }
    }
    
    
    cout << prime(abs(num));
    

}