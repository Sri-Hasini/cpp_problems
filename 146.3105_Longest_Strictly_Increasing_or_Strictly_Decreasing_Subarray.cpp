//3105. Longest Strictly Increasing or Strictly Decreasing Subarray - leetcode (easy) (acc : 65%)
//https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/?envType=daily-question&envId=2025-02-03
/*
You are given an array of integers nums. Return the length of the longest subarray of nums which is either strictly increasing or strictly decreasing
  */
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLen = 0, cnt = 1;
        int cnt1 = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] > nums[i]) {
                cnt1++;
            }
            else {
                if (maxLen < cnt1) {
                    maxLen = cnt1;
                }
                cnt1 = 1;
            }
        }
        
        if (maxLen < cnt1) {
            maxLen = cnt1;
        }
        // cout << maxLen << " ";
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) {
                cnt++;
            }
            else {
                if (maxLen < cnt) {
                    maxLen = cnt;
                }
                cnt = 1;
            }
            // cout << cnt << " ";
        }
        if (maxLen < cnt) {
            maxLen = cnt;
        }
        // cout << maxLen << endl;
        return maxLen;
    }
};
