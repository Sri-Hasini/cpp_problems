// Equilibrium using prefix sum 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = -1;
    int total_sum = 0, leftsum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    // cout << total_sum << " ";
    for (int i = 0; i < n; i++) {
        total_sum -= arr[i];
        if (leftsum == total_sum) {
            ans = i + 1;
            break;
        }
        leftsum += arr[i];
    }
    cout << "at " << " position : " << ans << endl;
}
