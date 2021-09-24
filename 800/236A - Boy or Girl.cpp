// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.precision(30);

    string s;
    cin >> s;
    int t[26] = {0}, res;       // Initialize the table with zeros
    for (int i = 0 ; i < s.size() ; i++){
        if (t[s[i]-'a']==0){    // s[i]-'a' gives us the order of the letter in the alphabet
            res++;
            t[s[i]-'a'] = 1;
        }
    }
    if (res%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
