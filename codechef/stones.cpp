#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        int jewels_count = 0;
        for(int i=0; i <= str2.size(); i++){
            if(str1.find(str2[i]) != string::npos){
                jewels_count++;
            }
        }
        cout << jewels_count << endl;
    }
    
}