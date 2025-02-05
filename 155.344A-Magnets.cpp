//344A - Magnets - codeforces (800)
//https://codeforces.com/problemset/problem/344/A
/*
Mad scientist Mike entertains himself by arranging rows of dominoes. He doesn't need dominoes, though: he uses rectangular magnets instead. Each magnet has two poles, positive (a "plus") and negative (a "minus"). 
If two magnets are put together at a close distance, then the like poles will repel each other and the opposite poles will attract each other.
Mike starts by laying one magnet horizontally on the table. During each following step Mike adds one more magnet horizontally to the right end of the row. Depending on how Mike puts the magnet on the table, 
it is either attracted to the previous one (forming a group of multiple magnets linked together) or repelled by it (then Mike lays this magnet at some distance to the right from the previous one). 
We assume that a sole magnet not linked to others forms a group of its own.
Mike arranged multiple magnets in a row. Determine the number of groups that the magnets formed.
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
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] != a[i]) cnt++;
    }
    cout << cnt;
}
