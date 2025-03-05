//uninteresting number - codeforces ROund 991 (Div 3) (5-dec-2024)
/*
You are given a number n with a length of no more than 10 power 5
You can perform the following operation any number of times: choose one of its digits, square it, and replace the original digit with the result. The result must be a digit (that is, if you choose the digit x
, then the value of x2
 must be less than 10 power 5).
Is it possible to obtain a number that is divisible by 9
through these operations?
*/
//https://codeforces.com/contest/2050/problem/C
#include <bits/stdc++.h>
using namespace std;
bool isValid(long long x, long long cnt1, long long cnt2) {
    if (x == 1) {
        return (cnt1 >= 4 || (cnt2 >= 1 && cnt1 >= 1 ));
    }
    if (x == 2) {
        return ((cnt1  >= 5 && cnt2 >= 1) || (cnt1 >= 2 && cnt2 >= 2) || (cnt1 >= 8));
    }
    if (x == 3) {
        return (cnt2 >= 1 || cnt1 >= 3);
    }
    if (x == 4) {
        return (cnt1 >= 7 || (cnt1 >= 4 && cnt2 >= 1) ||(cnt1 >=1 && cnt2 >= 2));
    }
    if (x == 5) {
        return (cnt1 >= 2 || cnt1 >=11 || (cnt2 >= 3 && cnt1 >= 2) || (cnt2 >= 2 && cnt1 >= 5) || (cnt2 >=1 && cnt1 >= 8));
    }
    if (x == 6) {
        return (cnt1 >= 6 || cnt2 >= 2 ||(cnt1 >= 3 && cnt2 >= 1));
    }
    if (x == 7) {
        return ((cnt2 >= 3 && cnt1 >= 1) || (cnt1 >= 10) || (cnt1 >= 1) || (cnt1 >= 4 && cnt2 >= 2) || (cnt1 >= 7 && cnt2 >= 1));
    }
    if (x == 8) {
        return (cnt1 >= 5 || (cnt1 >= 2 && cnt2 >= 1) || (cnt1 >= 2 && cnt2 >= 4));
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long cnt1 = 0, cnt2 = 0;
        long long n = s.size();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += s[i] - '0';
            if (s[i] == '2') cnt1++;
            if (s[i] == '3') cnt2++;
        }
        int x = sum % 9;
        if (x == 0) cout << "YES\n";
        else if (!isValid(x, cnt1, cnt2)) cout << "NO\n";
        else cout << "YES\n";
    }
}
