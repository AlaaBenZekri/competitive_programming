//https://codeforces.com/problemset/problem/1345/A

#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int n, t, m;
    cin >> t;
    while(t--){     //Focus on the provided examples, they are the only possible ones ;)
        cin >> n >> m;
        if ((n==1)||(m==1)||((n==2)&&(m==2)))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
