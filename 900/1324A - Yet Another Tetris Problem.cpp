//https://codeforces.com/problemset/problem/1324/A

#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int n, t, parity_test;
    cin >> t;
    while(t--){
        cin >> n;
        int t[n];
        if (n==1){              //Trivial case : if we have only one column it will be automatically cleared, we don't need to add any piece
            cin >> t[0];
            cout << "YES" << '\n';
        }
        else{                   //We don't have any constraints on the number of pieces to be used or the maximum height, so we've to get all
            parity_test = 1;    //the columns to the same height with pieces that are of height 2 (increasing the height of the column by 2).
            cin >> t[0];        //Thus it suffices to check if the height difference between each 2 neighboring columns is even.
            for (int i =1 ; i<n; i++){
                cin >> t[i];
                if (abs(t[i]-t[i-1])%2==1)
                    parity_test=0;
            }
            if (parity_test==1)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}
