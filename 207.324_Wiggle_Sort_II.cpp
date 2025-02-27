//324. Wiggle Sort II - leetcode (medium) (acc : 35%)
//https://leetcode.com/problems/wiggle-sort-ii/description/
/*
Given an integer array nums, reorder it such that nums[0] < nums[1] > nums[2] < nums[3]....

You may assume the input array always has a valid answer.
*/
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector <int> num = nums;
        sort(num.begin(), num.end());
        int low, high = nums.size() - 1, mid = (nums.size() + 1) / 2;
        low = mid - 1;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) nums[i] = num[low--];
            else nums[i] = num[high--];
        }
    }
};
