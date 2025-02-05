//217A_Beautiful_year - codeforces (800)
//https://codeforces.com/problemset/problem/271/A
/*
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.
Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.
  */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = n + 1; i <= 10000; i++) {
        map <int,int> v;
        int x = i;
        while (x != 0) {
            int r = x % 10;
            v[r]++;
            x /= 10;
        }
        if (v.size() == 4) {
            ans = i;
            break;
        }
    }
    cout << ans;
}
