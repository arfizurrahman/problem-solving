#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,a=0;
    string s,t;
    cin >> n >> s >> t;
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            if(s[i+j]==t[j] && i+j < n){
                a++;
            }
            else{
                if(a > c)
                    c = a;
                a = 0;
                break;
            }
        }   
    }

    cout << n-c << endl;
}