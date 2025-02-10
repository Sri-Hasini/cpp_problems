//A. Arrival of the General - codeforces (800)
//https://codeforces.com/contest/144/problem/A
/*
A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int n;
    cin >> n;
    set <int> s;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    int m;
    cin >> m;
    vector <int> b(n);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        s.insert(b[i]);
    }
    if (s.size() == t) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}
