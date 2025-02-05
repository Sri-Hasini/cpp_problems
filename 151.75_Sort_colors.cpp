//Sort colors - leetcode (medium) (acc : 66%)
//https://leetcode.com/problems/sort-colors/
/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) cnt_0++;
            if (nums[i] == 1) cnt_1++;
            if (nums[i] == 2) cnt_2++;
        }
        for (int i = 0; i < cnt_0; i++) {
            nums[i] = 0;
        }
        for (int i = cnt_0; i < cnt_0 + cnt_1; i++) {
            nums[i] = 1;
        }
        for (int i = cnt_1 + cnt_0; i < nums.size(); i++) {
            nums[i] = 2;
        }
    }
};
