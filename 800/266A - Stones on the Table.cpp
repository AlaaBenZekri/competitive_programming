// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>

using namespace std;

// You can try it manually on some examples and you'll find that it works.

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int res=0;
    for (int i = 0 ; i < n-1 ; i++){
        if (s[i]==s[i+1])
            res++;

    }
    cout << res;
    return 0;
}
