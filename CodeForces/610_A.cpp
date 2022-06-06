#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, counter = 0;
    cin >> n;
    if(n >= 6){
        long long int x = n - 2;
        if(x%2 == 0){
            long long int first_num = 1, second_num = x/2;
            while(first_num < second_num){
                first_num++;
                second_num--;
                counter++;
            }
        }
    }
    cout << counter << endl;
}