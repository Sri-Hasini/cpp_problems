//162. Find Peak Element - leetcode (medium) (acc : 46%)
//https://leetcode.com/problems/find-peak-element/description/
/*
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.
You must write an algorithm that runs in O(log n) time.
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {  // No need for left <= right
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1]) {
                // Peak is in the left part
                right = mid;
            } else {
                // Peak is in the right part
                left = mid + 1;
            }
        }
        return left; // or return right (both will be same at the end)
    }
};
