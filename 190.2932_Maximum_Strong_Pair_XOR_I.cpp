//2932. Maximum Strong Pair XOR I - leetcode (easy) (acc : 80%)
//https://leetcode.com/problems/maximum-strong-pair-xor-i/description/?envType=problem-list-v2&envId=sliding-window
/*
You are given a 0-indexed integer array nums. A pair of integers x and y is called a strong pair if it satisfies the condition:
|x - y| <= min(x, y)
You need to select two integers from nums such that they form a strong pair and their bitwise XOR is the maximum among all strong pairs in the array.
Return the maximum XOR value out of all possible strong pairs in the array nums.
Note that you can pick the same integer twice to form a pair.
*/
class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxi = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(nums[i] - nums[j]) <= min(nums[i], nums[j])) {
                    if (maxi < (nums[i] ^ nums[j])) maxi = (nums[i] ^ nums[j]);
                }
            }
        }
        return maxi;
    }
};
