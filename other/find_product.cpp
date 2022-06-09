#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int M = 1000000007;
    int n;
    cin >> n;
    long int result = 1;
    while (n--)
    {
        int item;
        cin >> item;
        result = (result * item) % M;
    }
    cout << result << endl;
    
}