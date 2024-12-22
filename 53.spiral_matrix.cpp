// Spiral matrix - leetcode, gfg (medium) (acc:51%,35%)
//https://leetcode.com/problems/spiral-matrix/description/
//https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    
    int i = 0, j = 0;
    vector <int> ans;
    if (m == n && n == 1) ans.push_back(mat[0][0]);
    else {
        int cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        while(cnt < (m * n)) {
            if (i == cnt1 && j == cnt4 && cnt < m * n) {
                while(j < (n - cnt2)) {
                    ans.push_back(mat[i][j]);
                    cnt++;
                    j++;
                    if (j == (n - cnt2)) {
                        i++;
                        cnt1++;
                    }
                }
                j--;
            }
            if (i == cnt1 && j == (n - cnt2 - 1) && cnt < m * n) {
                while(i < (m - cnt3)) {
                    ans.push_back(mat[i][j]);
                    cnt++;
                    i++;
                    if (i == (m - cnt4)) {
                        j--;
                        cnt2++;
                    }
                }
                i--;
            }
            if (i == (m - cnt3 - 1) && j == (n - cnt2 - 1) && cnt < m * n) {
                while(j >= cnt4) {
                    ans.push_back(mat[i][j]);
                    cnt++;
                    j--;
                    if (j < cnt4) {
                        i--;
                        cnt3++;
                    }
                }
                j++;
            }
            if (i == (m - cnt3 - 1) && j == cnt4 && cnt < m * n) {
                while(i >= cnt1) {
                    ans.push_back(mat[i][j]);
                    cnt++;
                    i--;
                    if (i < cnt1) {
                        j++;
                        cnt4++;
                    }
                }
                i++;
            }
        }
    }
    for (auto i : ans) cout << i << " ";
}
