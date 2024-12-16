// Broken telephone - codechef (1204)
//https://www.codechef.com/problems/BROKPHON
/*
Maintain some variable x and keep it initially false. if 0th index and 1st index is not equal then initially increase count by 2, because the number at 0th index and 1st index is included, 
and keep x as true indicating it as some operation has happened. then run a loop from 1st position to last - 1 position and then check if that value is not equal to the next value and if x is false,
then icrement value by 2 and keep x as true. or else if x is already true, that means some operation has already been done, so now increment count by 1 and keep x as true. else keep x as false print count
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
        int cnt = 0;
        bool x = false;
        if (a[0] != a[1]) {
            cnt+=2;
            x = true;
        }
        for (int i = 1; i < n - 1; i++) {
            if (a[i] != a[i + 1] && x == false) {
                cnt+=2;
                x = true;
            }
            else if (a[i] != a[i + 1] && x == true) {
                cnt++;
                x = true;
            }
            else x = false;
        }
        cout << cnt << endl;
    }
}
