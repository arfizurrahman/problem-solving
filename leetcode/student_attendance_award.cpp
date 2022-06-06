#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int att_count = 0;
        for(int i=0; i < s.size(); i++){
            if(s[i] =='A') {
                att_count++;
            }

            if((i+2 < s.size() && s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L') || 
            att_count >= 2){
                return false;
            }
        }

        return true;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution myObj;
    cout << myObj.checkRecord(s) << endl;
}