#include <bits/stdc++.h>

using namespace std;

#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const int n = 1e7; // Global array size
int a[n];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast_cin();

    // local array size
    // int n = 1e5; // order of 5
    a[n - 1] = 7;
    cout << a[n - 1];
}