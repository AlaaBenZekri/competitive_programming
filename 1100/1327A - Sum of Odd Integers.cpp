//https://codeforces.com/problemset/problem/1327/A

#include <bits/stdc++.h>
using namespace std;

//Prepare yourselves for some maths
//Necessarily n = sum(2*i+1) for i in set I, I is consisting of k different integers
//Then n = 2*sum(i)+k for i in I, from this line we get that n and k are necessarily of the same parity
//(n-k)/2 = sum(i) for i in I >= sum(i) for i between 0 and k-1 (that's the smallest sum we can get of i)
//Then we need (n-k)/2>=k*(k-1)/2 => n>=k*k

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if (n>=k*k)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
