//Phone prices - codechef (1269)
//https://www.codechef.com/problems/S10E
/*
The question is given that whether the price is strictly less than atmost previous 5 prices. As the initial price doesnt have any price to compare before, we can include that in count by default. 
Then we can check for all elements from that index to backwards upto atmost 5 indices and increment our count according to it.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            int x = 0;
            int y = 0;
            for (int j = i; j > i - 5; j--) {
                if (j == 0) break;
                // cout << a[i] << " " << a[j - 1] << endl;
                if (a[i] < a[j - 1]) x++;
                y++;
            }
            if (x == y) cnt++;
        }
        cout << cnt << endl;
    }
}
