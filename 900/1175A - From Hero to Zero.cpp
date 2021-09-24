// https://codeforces.com/problemset/problem/1175/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);

    long long t, n, k;   // With int the solution wouldn't work, check the problem constraints.
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long res = 0;
        while (n){
            if (n%k==0){
                res ++;
                n = n/k;
            }
            else{
                /*
                The optimisation of the algorirthm comes at this block ; we are reducing the 
                comlexity from O(n) to O(log5(n)).
                */
                res += n%k;
                n = n- n%k; 
            }
        }
        cout << res << '\n';
    }
    return 0;
}
