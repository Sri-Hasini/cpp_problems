//Swish Game - codechef (1188)
//https://www.codechef.com/problems/SWISHGAME
/*
They asked to find the number of rings they might have in total....
For that first we need to count the number of 'S' in the given string
if we observe the pattern, we got to know that, the number of swishes it have in the given string is final and we need to find the N in such a way that. 
If he won by the given string, we can directly print the given size, otherwise we need to add the size of the current string to how many more swishes he need to win -1........
  */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int count_s = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'S') count_s++;
        }
        if (count_s >= b) cout << a << endl;
        else {
            cout << (b - count_s - 1) + a << endl;
        }
    }
    
}
