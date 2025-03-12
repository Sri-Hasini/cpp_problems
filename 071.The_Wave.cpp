//The Wave - cpdechef (1518)
//https://www.codechef.com/problems/WAV2?tab=statement
/*
The question is asked to find whether the final polynomial value is positive or negative or 0 after substituting those values.
we first need to sort that vector in order to perform binary search.
we checked if the mid element equals our checking element, if yes, we will just print 0 and keep the flag value as 1, because for other cases,
even we get into this condition and break our loop, there is a chance of printing again by satisfying the conditions outside.
If our mid value - checking value is less than 0, we keep index as mid and move low to mid + 1. else we will move high to mid - 1.
finally check if flag not equals to 1 , and check if index is odd , print as POSITIVE other wise print as NEGATIVE
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector <long long> s(q);
    for (int i = 0; i < q; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < q; i++) {
        int low = 0, high = n - 1;
        int index = 1;
        int flag = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] == s[i]) {
                cout << 0 << endl;
                flag = 1;
                break;
            }
            else if (v[mid] - s[i] < 0) {
                index = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        if (!flag) {
            if (index % 2 == 1) cout << "POSITIVE\n";
            else cout << "NEGATIVE\n";
        }
    }
}
