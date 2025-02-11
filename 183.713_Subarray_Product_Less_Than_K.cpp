//713. Subarray Product Less Than K - leetcode (medium) (acc : )
//https://leetcode.com/problems/subarray-product-less-than-k/description/
/*
Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.
*/
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0, pro = 1, left = 0;
        for (int right = 0; right < nums.size(); right++) {
            pro *= nums[right];
            while (pro >= k) {
                pro /= nums[left];
                left++;
            }
            if (pro < k) {
                cnt += right - left + 1;
            }
        }
        return cnt;
    }
};
