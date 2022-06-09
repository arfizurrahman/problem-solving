#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ul,c=0,m=0;
    cin >> n;
    ul=n+(n-1);

    for(int i=0; i< ul; i++){
        c = i > n-1 ? (n-1)-i+(n-1) : i;
        m=0;
        for(int j=0; j < ul; j++){
            cout << n-m << " ";
            if(c > j){
                m++;
            }else if(j+1 >= ul-c){
                m--;
            }
        }
        cout << endl;
    }
}