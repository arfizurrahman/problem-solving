#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    string concat = str1 + str2;
    cout << str1.size() << " " << str2.size() << endl;
    cout << concat << endl;
    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;
    concat = str1 + " " + str2;
    cout << concat << endl;
}