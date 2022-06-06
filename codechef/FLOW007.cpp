#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int reversed = 0;
        while(n > 0){
            int last_digit = n % 10;
            reversed = reversed * 10 + last_digit;
            n = n / 10;
        }
        cout << reversed << endl;
    }
    
}