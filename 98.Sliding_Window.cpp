// Sliding window technique - finding maximum sum of a subarray of size 4
#include <bits/stdc++.h>
using namespace std;

int max_sarr(vector<int>& nums, int k) {
    int maxi = INT_MIN;
    int win_sum = 0;
    for (int i = 0; i < k; i++) {
        win_sum += nums[i];
    }
    for (int j = k; j < nums.size(); j++) {
        win_sum += nums[j] - nums[j - k];
        maxi = max(maxi, win_sum);
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    vector <int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int win_size;
    cin >> win_size;
    int ans = max_sarr(nums, win_size);
    cout << "The maximum sum of a subarray of size 3 is : " << ans;
}
// input 
/*
9
8 8 1 9 6 5 3 9 2
4
*/

//output
/*
The maximum sum of a subarray of size 3 is : 24
*/
