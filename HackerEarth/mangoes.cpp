#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    if(w >= 1 && w <= 1000){
        if(w != 2 && w % 2 == 0){
            cout << "YES";
        }else{
            cout << "NO"; 
        }
    }
    
}