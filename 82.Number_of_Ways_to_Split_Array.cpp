//Number of Ways to Split Array - leetcode (acc:54%)(medium)
//https://leetcode.com/problems/number-of-ways-to-split-array/description/
/*
You are given a 0-indexed integer array nums of length n.
nums contains a valid split at index i if the following are true:
The sum of the first i + 1 elements is greater than or equal to the sum of the last n - i - 1 elements.
There is at least one element to the right of i. That is, 0 <= i < n - 1.
Return the number of valid splits in nums.
*/
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        long long x = 0;
        int cnt = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            x += nums[i];
            if (x >= sum - nums[i]) cnt++;
            sum -= nums[i];
        }
        return cnt;
    }
};
