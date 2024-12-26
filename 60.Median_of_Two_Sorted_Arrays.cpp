//Median of Two Sorted Arrays - leetcode(hard)(acc:42%)
//https://leetcode.com/problems/median-of-two-sorted-arrays/description/
/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        double ans;
        if ((nums1.size())&1 == 1) {
            ans = nums1[nums1.size() / 2];
        }
        else {
            ans = (nums1[nums1.size() / 2] + nums1[(nums1.size() / 2) - 1]) / 2.0;
        }
        return ans;
    }
};
