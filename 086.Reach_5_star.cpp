//Reach 5 star - codechef (313)
//https://www.codechef.com/problems/R5S
/*
Chef loves giving contests on Codechef. Chef wants to become 5 star rated. Currently his rating on Codechef is X.
After today's contest, his rating will increase by Y.
Note that Y can be negative which means that Chef's rating will decrease.
Find whether Chef will become 5 star rated after today's contest.
Chef will be considered 5 star rated if his rating is greater than or equal to 2000.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a += b;
    if (a >= 2000) cout << "Yes\n";
    else cout << "No\n";
}
