//189. Rotate Array - leetcode (medium) (acc : 42%)
//https://leetcode.com/problems/rotate-array/description/
/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();//instead of using the technique of circular queue, we can write this for k itself
        vector <int> store;
        int n = nums.size();
        for (int i = n - k; i < n; i++) {
            store.push_back(nums[i]);
        }
        int x = n - 1;
        for (int i = n - k - 1; i >= 0; i--) {
            nums[x--] = nums[i];
        }
        for (int i = 0; i < k; i++) nums[i] = store[i];
    }
};
