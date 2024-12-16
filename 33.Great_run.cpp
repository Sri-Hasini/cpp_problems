// Great run - codechef (1097)
//https://www.codechef.com/problems/PROC18A
/*
we can do this using sliding window and prefix sum and also we can do using two pointers. using two pointers: take a pointer starting at 0 and another pointer starting at k - 1 and run i until n - k - 1. 
take sum - 0 in the outer loop. take inner loop starting at i and less than equal to j and calculate sum as a[k]. calculate maximum out of all moves. print maximum
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxi = 0;
        for (int i = 0, j = k - 1; i < n - (k - 1) && j < n; i++, j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += a[k];
            }
            if (maxi < sum) maxi = sum;
        }
        cout << maxi << endl;
    }
}
