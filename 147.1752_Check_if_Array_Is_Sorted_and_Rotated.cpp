//1752. Check if Array Is Sorted and Rotated - leetcode (easy) (acc : 54%)
//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/?envType=daily-question&envId=2025-02-02
/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.
  */
class Solution {
public:
    bool check(vector<int>& nums) {
        vector <int> x(nums);
        sort(x.begin(), x.end());
        int size = nums.size();
        int last;
        // cout << size << endl;
        while (size--) {
            last = x[nums.size() - 1];
            cout << last << " ";
            for (int i = nums.size() - 1; i > 0; i--) {
                x[i] = x[i - 1];
            }
            x[0] = last;
            if (x == nums) return true;
        }
        return false;
    }
};
