#include <bits/stdc++.h>

using namespace std;

int main()
{
    string command;
    cin >> command;
    string result;
    for(int i=0; i < command.size(); i++){
        if(command[i] == '(' && command[i+1] == ')'){
            result.push_back('o');
            i++;
        }else if(command[i] == '(' && command[i+1] == 'a'){
            result.push_back('a');
            result.push_back('l');
            i += 3;
        }else{
            result.push_back('G');
        }
    }
    cout << result << endl;
}