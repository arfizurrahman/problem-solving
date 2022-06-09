#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    for(int i=0; i <= str2.size(); i++){
        str1.erase(remove(str1.begin(), str1.end(), str2[i]), str1.end());
    }
    cout << str1 << endl;
}