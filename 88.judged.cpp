//Judged - codechef (453)
//https://www.codechef.com/problems/ADVITIYA2
/*
The tech fest of IIT Ropar, Advitiya, has a talent show as part of the festivities.
The preliminary round of the talent show has participants being evaluated by 5 judges, and only those participants whose performance was liked by at least 4 judges will qualify for the next round.
Anuj participated in the talent show, and now wants to know if he'll qualify or not. You are given the responses of all 5 judges — help Anuj decide whether he qualified!
Each judge's response is given to you as a binary integer, where:
0 means the judge didn't like Anuj's performance.
1 means the judge liked Anuj's performance.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        map <int, int> m;
        m[0] = 0;
        m[1] = 0;
        m[a]++;
        m[b]++;
        m[c]++;
        m[d]++;
        m[e]++;
        if (m[1] >= 4) cout << "yes\n";
        else cout << "No\n";
    }
}
