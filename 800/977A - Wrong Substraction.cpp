// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>

using namespace std;

// This problem is pretty self-explanatory

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);

    int n, k;
    cin >> n >> k;
    for (int i = 0 ; i < k ; i++){
        if (n%10 == 0)
            n = n / 10;
        else
            n = n - 1;
    }
    cout << n ;
    return 0;
}
