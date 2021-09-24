// https://codeforces.com/problemset/problem/50/A

#include <bits/stdc++.h>

using namespace std;

/*
There are 2 cases that appear in this problem:
- The first case is where at least one of M and N is even ; all the piles 
(M*N) can be filled with dominos. With a domino piece taking 2 piles, the
number of dominos needed is M*N/2.
- The second case is where both N and M are odd ; one of the piles won't
be filled, so M*N/2 (integer division) dominos will be the maximum number
to be used.
*/

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);

    int n, m;
    cin >> n >> m;
    cout << n * m /2;
    return 0;
}
