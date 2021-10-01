//https://codeforces.com/problemset/problem/1435/A

#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int n, t, current_a, next_a;
    cin >> t;
    while(t--){
        cin >> n;                       //Focus on the fact that the given n is even
        int b[n];                       //So it suffices to work with each pair individually ; a[i] * (-a[i+1]) + a[i+1] * a[i] is always 0
        for (int i = 0; i<n ; i+=2){
            cin >> current_a >> next_a;
            b[i] = -next_a;
            b[i+1] = current_a;
        }
        for (int i = 0; i<n ; i++)
            cout << b[i] << ' ';
        cout << '\n';
    }
    return 0;
}
