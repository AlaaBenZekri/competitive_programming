//https://codeforces.com/contest/1343/problem/C

#include <bits/stdc++.h>
using namespace std;
 
//Look at the input as a serie of alternating sequences, the sequences being of the same sign
//The longest alternating subsequence will be created using a number from each of those sequences (of the same sign)
//Now in case we've got more than one subsequence having that length, the one with the maximum sum can be got using
//the biggest number from each sequence.
//Example: say the input is in the format of ABCD where A and B contain only positive integers and C and D containing
//only negative integers, the longest alternating subsequence will be got by taking an element from A, an element from B
//an element from C and an element from D. Now for the maximum sum, we could achieve it with the choice of the biggest element
//from A, biggest element from B...
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);
    int n, t;
    long long input, last, maxi, sum;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> input;
        maxi = input;
        sum = 0;
        last = input;
        for (int i =1 ; i < n ; i++){
            cin >> input;
            if (input*last>0){
                if (input>maxi)
                    maxi = input;
            }
            else{
                sum += maxi;
                maxi = input;
            }
            last = input;
        }
        cout << sum + maxi << '\n';
    }
    return 0;
}
