//Minimum Number of Operations to Make Elements in Array Distinct - leetcode()
//https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/
/*
You are given an integer array nums. You need to ensure that the elements in the array are distinct. To achieve this, you can perform the following operation any number of times:
Remove 3 elements from the beginning of the array. If the array has fewer than 3 elements, remove all remaining elements.
Note that an empty array is considered to have distinct elements. Return the minimum number of operations needed to make the elements in the array distinct.
*/
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        map <int,int> m;
        for (auto i : nums) {
            m[i]++;
        }
        int cnt = 0;
        for (auto i : m) {
            if (i.second == 1) {
                cnt++;
            }
        }

        if (cnt == n) return 0;
        else {
            int cnt1 = 0;
            while(nums.size() > 3) {
                nums.erase(nums.begin());
                nums.erase(nums.begin());
                nums.erase(nums.begin());
                map <int, int> m1;
                for (auto i : nums) {
                    m1[i]++;
                }
                cnt1++;
                if (m1.size() == nums.size()) {
                    return cnt1;
                }
            }
            map<int,int> m2;
            for (auto i : nums) {
                m2[i]++;
            }
            if (nums.size() == m2.size()) {
                return cnt1;
            }
            else {
                return cnt1 + 1;
            }
        }
    }
};
