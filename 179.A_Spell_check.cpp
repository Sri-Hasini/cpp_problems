//A.Spell check - codeforces (800)
//https://codeforces.com/problemset/problem/1722/A
/*
Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name. For example, the following strings are valid spellings of his name: Timur, miurT, Trumi, mriTu. Note that the correct spelling must have uppercased T and lowercased other letters.

Today he wrote string s
 of length n
 consisting only of uppercase or lowercase Latin letters. He asks you to check if s
 is the correct spelling of his name.


*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map <char,int> m;
        m['T'] = 0;
        m['i'] = 0;
        m['m'] = 0;
        m['u'] = 0;
        m['r'] = 0;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        if (m.size() == 5) {
            bool x = true;
            for (auto i : m) {
                if (i.second != 1) {
                    x = false;
                    break;
                }
            }
            if (x) cout << "Yes\n";
            else cout << "No\n";
        }
        else cout << "No\n";
    }
}
