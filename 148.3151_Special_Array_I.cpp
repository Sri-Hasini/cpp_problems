//3151. Special Array I - leetcode (easy) (acc : 82%)
//https://leetcode.com/problems/special-array-i/description/?envType=daily-question&envId=2025-02-01
/*
An array is considered special if every pair of its adjacent elements contains two numbers with different parity.
You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.
 */
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (((nums[i - 1] & 1) == 1 && (nums[i] & 1) == 0) ||((nums[i - 1] & 1) == 0 && (nums[i] & 1) == 1)) continue;
            else return false;
        }
        return true;
    }
};
