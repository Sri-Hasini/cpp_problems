//	467A - George and Accommodation - codeforces (800)
//https://codeforces.com/problemset/problem/467/A
/*
George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.
George and Alex want to live in the same room. The dormitory has n rooms in total.
At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). Your task is to count how many rooms has free place for both George and Alex.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <pair<int,int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    int cnt = 0;
    for (auto i : v) {
        if (abs(i.first - i.second) >= 2) cnt++;
    }
    cout << cnt;
}
