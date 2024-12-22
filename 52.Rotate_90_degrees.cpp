// Rotate array 90 degrees anti clockwise - gfg (easy) (acc:35%)
//https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    int cnt1 = 0, j;
    while(cnt1 < (n/2)) {
        for (j = cnt1; j < (n - cnt1 - 1); j++) {
            int cur = mat[cnt1][j], cnt2 = 0, k = n - j - 1, x = cnt1;
            while(cnt2 < 4) {
                int temp = mat[k][x];
                mat[k][x] = cur;
                cur = temp;
                int q = k;
                k = n - x - 1;
                x = q;
                cnt2++;
            }
        }
        if (n - cnt1 - 1 == j) {
            cnt1++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
