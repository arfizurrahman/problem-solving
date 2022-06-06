#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long t;
    cin >> t;
    
    while(t--){
        long n,c=1;
        string s;
        cin >> n >> s;

        for(long i=0; i < n-1; i++){
            if(s[i] != s[i+1]){
                c++;
            }
        }

        cout <<  c << endl;
    }
}