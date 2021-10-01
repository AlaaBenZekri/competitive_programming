//https://codeforces.com/contest/702/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int n, seq = 1, max_seq = 1;
    cin >> n;
    long long input, last=0;
    cin >> input;
    last = input;
    n--;
    while(n--){
        cin >> input;
        if (input>last){          //Basically we go through the array and if we're going through a strictly increasing subarray we increment
            seq++;                //a length variable by 1, if it surpasses the maximum length (at first initiated by 1) it will become our
            if (seq>=max_seq)     //new maximum length, otherwise if encounter a number that is not strictly greater than the one before it
                max_seq=seq;      //we reset the length variable to 1.
        }
        else
            seq = 1;
        last = input;
    }
    cout << max_seq;
    return 0;
}
