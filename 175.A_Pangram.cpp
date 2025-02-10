//A. Pangram - codeforces (800)
//https://codeforces.com/problemset/problem/520/A
/*
A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26) cout << "NO";
    else {
        map <char,int> m;
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
            m[s[i]]++;
        }
        if (m.size() == 26) cout << "YES";
        else cout << "NO";
    }
}
