//A. Hit the Lottery - codeforces (800)
//https://codeforces.com/problemset/problem/996/A
/*
Allen has a LOT of money. He has n
 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1
, 5
, 10
, 20
, 100
. What is the minimum number of bills Allen could receive after withdrawing his entire balance?
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int cnt = 0;
    while (n > 0) {
        if (n > 0 && n >= 100) {
            cnt += n/100;
            n = n % 100;
        }
        else if (n > 0 && n >= 20) {
            cnt += n/20;
            n = n % 20;
        }
        else if (n > 0 && n >= 10) {
            cnt += n / 10;
            n = n % 10;
        }
        else if (n > 0 && n >= 5) {
            cnt += n / 5;
            n = n % 5;
        }
        else if (n > 0 && n >= 1) {
            ++cnt;
            --n;
        }
    }
    cout << cnt;
}
