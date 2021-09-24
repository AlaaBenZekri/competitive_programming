// https://codeforces.com/problemset/problem/1213/A

#include <bits/stdc++.h>
using namespace std;

/*
Because of the fact that a move by 2 is for free, we can get all the even
numbers to 0 (chosen arbitrarily, we can choose any other even number)
and all the odd numbers to 1 (same thing). Then we check the cheapest 
choice to do ; moving all 1s to 0 or moving all 0s to 1.
*/

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int n;
    cin >> n;
    long long input;
    int num_odd=0, num_even=0;
    while(n--){
        cin >> input;
        if (input%2)
            num_odd++;
        else
            num_even++;
    }
    cout << min(num_odd, num_even);
    return 0;
}
