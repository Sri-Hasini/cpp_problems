//Streak Star - codechef (1129)
//https://www.codechef.com/problems/STKSTR
/*
The Streak Value of an array B is defined as the maximum length of a non-decreasing subarray, more formally:max ⁡1≤i≤j≤N(j−i+1) where Bi≤Bi+1≤Bi+2≤⋯≤Bj.
1≤i≤j≤N max(j−i+1)whereBi ≤B i+1 ≤Bi+2 ≤⋯≤B j.
Chef has an array A of length N and a magical number X. You are allowed to perform the following operation at most once:
Select an index i, and update the element at Ai by multiplying it with X, i.e., set Ai:=Ai ⋅ X
Your task is to find the maximum possible Streak Value achievable for array A.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector <vector<int>> d(n, vector <int> (n));
        for (int i = 0; i < n; i++) {
            d[i] = v;
            d[i][i] *= x;
        }
        int count = 1, maxi = 1;
        for (int i = 0; i < n; i++) {
            count = 1;
            for (int j = 0; j < n - 1; j++) {
                if (d[i][j]  <= d[i][j + 1]) count++;
                else {
                    if (maxi < count) maxi = count;
                    count = 1;
                }
            }
            if (maxi < count) maxi = count;
        }
        cout << maxi << endl;
    }
}
