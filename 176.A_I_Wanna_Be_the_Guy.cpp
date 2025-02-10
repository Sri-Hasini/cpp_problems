//A. I Wanna Be the Guy - codeforces (800)
//https://codeforces.com/problemset/problem/469/A
/*
There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

Little X can pass only p levels of the game. And Little Y can pass only q levels of the game. You are given the indices of levels Little X can pass and the indices of levels Little Y can pass. Will Little X and Little Y pass the whole game, if they cooperate each other?
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
    vector <int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        s.insert(b[i]);
    }
    if (s.size() == t) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}
