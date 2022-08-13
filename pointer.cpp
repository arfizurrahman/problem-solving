#include <bits/stdc++.h>

using namespace std;

#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void single_pointer()
{
    int x = 4;
    int *p_x = &x;
    cout << "Address of x: " << &x << endl;
    cout << "Value of p_x: " << p_x << endl;
    cout << "Value of *p_x: " << *p_x << endl;
    *p_x = 5;
    cout << "Value of x: " << x << endl;
    //  cout << "p_x + 1: " << p_x+1 << endl;
}

void double_pointer()
{
    int x = 4;
    int *p_x = &x;
    cout << endl
         << "Double pointer: " << endl;
    int **p_p_x = &p_x;
    cout << "Address p_x: " << &p_x << endl;
    cout << "Value p_p_x: " << p_p_x << endl;
    cout << "Value *p_p_x: " << *p_p_x << endl;
    cout << "Value **p_p_x: " << **p_p_x << endl;
}

void array_pointer()
{
    cout << endl
         << "Array pointer: " << endl;
    int a[10];
    a[0] = 5;
    a[1] = 10;
    cout << "a: " << a << endl;
    cout << "&a[0]: " << &a[0] << endl;
    cout << "a[0]: " << a[0] << endl;
    cout << "*a: " << *a << endl;
    cout << "a + 1 " << a + 1 << endl;
    cout << "&a[1]: " << &a[1] << endl;
    cout << "*(a + 1): " << *(a + 1) << endl;
}

void increment(int *x)
{
    (*x)++;
}

void reference_alt_pointer()
{
    int a = 4;
    cout << a << endl;
    increment(&a);
    cout << a << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast_cin();

    single_pointer();
    // double_pointer();
    // array_pointer();

    reference_alt_pointer();
}