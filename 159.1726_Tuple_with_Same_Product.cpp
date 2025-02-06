//1726. Tuple with Same Product - leetcode (medium) (acc : 67%)
//https://leetcode.com/problems/tuple-with-same-product/
/*
Given an array nums of distinct positive integers, return the number of tuples (a, b, c, d) such that a * b = c * d where a, b, c, and d are elements of nums, and a != b != c != d.
*/
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int cnt = 0;
        vector <int> v;
        map <int,int> m;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                v.push_back(nums[i] * nums[j]);
            }
        }
        for (auto i : v) {
            m[i]++;
        }
        for (auto i : m) {
            if (i.second >= 2) {
                cnt += i.second*(i.second - 1) / 2;
            }
        }
        return cnt*8;
    }
};
