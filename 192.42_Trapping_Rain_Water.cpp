//42. Trapping Rain Water - leetcode (hard) (acc : 64%)
//https://leetcode.com/problems/trapping-rain-water/
/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector <int> left(n);
        vector <int> right(n);
        left[0] = height[0];//initially stored the 1st height 
        right[n - 1] = height[n - 1];//initially stored the last height
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], height[i]);//calculating the max height from left 
        }
        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], height[i]);//calculating the max height from right
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += min(left[i], right[i]) - height[i];//calculating the difference between min(leftmaximum height, rightmaximum height) and current height
        }
        return ans;
    }
};
