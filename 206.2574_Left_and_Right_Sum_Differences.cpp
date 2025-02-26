//2574. Left and Right Sum Differences - leetcode (easy) (acc : 87%)
//https://leetcode.com/problems/left-and-right-sum-differences/description/
/*
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.
*/
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> left(nums.size());
        vector <int> right(nums.size());
        left[0] = 0, right[nums.size() - 1] = 0;
        for (int i = 1; i < nums.size(); i++) {
            left[i] = nums[i - 1] + left[i - 1];
            // cout << left[i] << " ";
        }
        for (int i = nums.size() - 2; i >= 0; i--) {
            right[i] = nums[i + 1] + right[i + 1];
            // cout << right[i] << " ";
        }
        vector <int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = abs(left[i] - right[i]);
        }
        return ans;
    }
};
