//Little Chef and Sums - codechef (1252)
//https://www.codechef.com/problems/CHEFSUM?tab=statement
/*
The question was to find us the minimum index when returns minimum value when we do prefix and suffix sum 
Rather than just doing whole process, we can find the minimum element. if we think logically, in the above 2 testcases given, the index (1 - bsaed) of minimum value is the answer. 
So we calculated the minimum value and returned its position
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
        int mini = a[0];
        int index = 1;
        for (int i = 1; i < n; i++) {
            if (mini > a[i]) {
                mini = a[i];
                index = i + 1;
            }
        }
        cout << index << endl;
    }
}
