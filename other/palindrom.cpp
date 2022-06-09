#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.size()/2; i++){
        if(str[i] != str[(str.size()-1)-i]){
            cout << "NO" << endl;
            break;
        }
        if(i == str.size()/2-1){
            cout << "YES" << endl;
        }
    }

}