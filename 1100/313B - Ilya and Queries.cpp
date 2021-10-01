//https://codeforces.com/problemset/problem/313/B

#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int n, t;
    cin >> n >> t;
    int n = s.size(), l, r;
    int dp[n]={0};
    for(int i=1; i<n ; i++){       //This is a pure DP (dynamic programming) problem,
        if (s[i]==s[i-1])          //First we get a table named dp of the same length of the string
            dp[i] = dp[i-1] + 1;   //We initiate the first value with 0, and at each position we will put the number of s[i]==s[i+1]
        else                       //that were in the string before that position, after filling the whole table we will start getting the queries
            dp[i] = dp[i-1];       //for each l and r we will return dp[r-1]-dp[l-1] to get the number of times we had s[i]==s[i+1] between them.
    }
    for (int i = 0 ; i<n ; i++){
        cout << dp[i] << ' ';
    }
    cout << '\n';
    while(m--){
        cin >> l >> r;
        cout << dp[r-1]-dp[l-1] << '\n';
    }
    return 0;
}
