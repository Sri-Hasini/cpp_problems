//	1030A - In Search of an Easy Problem - codeforces (100)
//https://codeforces.com/problemset/problem/1030/A
/*
When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked n
 people about their opinions. Each person answered whether this problem is easy or hard.
If at least one of these n
 people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt_1 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) cnt_1++;
    }
    if (cnt_1 != 0) cout << "HARD";
    else cout << "EASY";
}
