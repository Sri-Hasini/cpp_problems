//Longest Common Pattern - codechef (1284)
//https://www.codechef.com/problems/LCPESY
/*
The question was to find the longest common characters in both the strings. For that we can maintain 2 maps one for each.
we can run a loop on second map and find whether that same character present in the first map or not and we add the minimum value of those occurances in both the maps to our count 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string h;
        cin >> h;
        map <char, int> m;
        for (auto i : s) {
            m[i]++;
        }
        map <char, int> m1;
        for (auto j : h) {
            m1[j]++;
        }
        int cnt = 0;
        for (auto i : m1) {
            if (m.find(i.first) != m.end()) {
                cnt += min(m[i.first], i.second);
            }
        }
        cout << cnt << endl;
    }
}
