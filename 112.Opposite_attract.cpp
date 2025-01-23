//Opposite attract - codechef(671)
//https://www.codechef.com/problems/P2169
/*
just we need to print the opposite binary digit...normal thing we can do is to create another string for storing purpose and print that string which take more space... so we can directly print it like this
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
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
}
