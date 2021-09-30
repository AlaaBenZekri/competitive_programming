//https://codeforces.com/problemset/problem/584/A

#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int n, t;
    cin >> n >> t;
    if ((n==1)&&(t==10))    //Trivial case
        cout << -1;
    else if (t<10){         //for any t : t000..000 (0 n-1 times) will be divisible by t and of length n
        cout << t;
        for (int i = 1; i < n; i++)
            cout << 0;
    }
    else{                   //For t=10 : t000..000 (0 n-2 times because t is already composed by digits)
        cout << t;
        for (int i = 2; i < n; i++)
            cout << 0;
    }
    return 0;
}
