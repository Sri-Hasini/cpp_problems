//Copy paste - codechef(1280)
//https://www.codechef.com/problems/RRCOPY
/*
indirectly the question was to find the unique elements int the array, for that we can keep those elements in a set and return the size of that set.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        set <int> s;
        s.insert(a.begin(), a.end());
        cout << s.size() << endl;
    }
}
