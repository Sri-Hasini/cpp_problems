//33. Search in Rotated Sorted Array - leetcode (medium) (acc : 42%)
//https://leetcode.com/problems/search-in-rotated-sorted-array/description/
/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.
*/
// M E T H O D -----------------------------> 1
class Solution {
public:
    int search(vector<int>& nums, int target) {
        map <int,int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }
        if (m.find(target) != m.end()) {
            auto itr = m.find(target);
            return itr->second;
        }
        return -1;
    }
};

// M E T H O D ------------------------------> 2
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        vector <pair<int,int>> p(n);
        for (int i = 0; i < nums.size(); i++) {
            p[i].first = nums[i];
            p[i].second = i;
        }
        sort(p.begin(), p.end());
        int left = 0, right = p.size() - 1;
        while (left <= right) {
            int mid = (left + right)/2;
            if (p[mid].first == target) {
                return p[mid].second;
            }
            else if (p[mid].first < target) {
                left = mid + 1;
            }
            else right = mid - 1;
        }
        return -1;
    }
};
