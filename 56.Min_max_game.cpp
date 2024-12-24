//Min Max Game - leetcode(63%)(easy)
//https://leetcode.com/problems/min-max-game/description/
/*
You are given a 0-indexed integer array nums whose length is a power of 2.
Apply the following algorithm on nums:
Let n be the length of nums. If n == 1, end the process. Otherwise, create a new 0-indexed integer array newNums of length n / 2.
For every even index i where 0 <= i < n / 2, assign the value of newNums[i] as min(nums[2 * i], nums[2 * i + 1]).
For every odd index i where 0 <= i < n / 2, assign the value of newNums[i] as max(nums[2 * i], nums[2 * i + 1]).
Replace the array nums with newNums.
Repeat the entire process starting from step 1.
Return the last number that remains in nums after applying the algorithm.
*/
class Solution {
public:
    vector <int> fun(vector <int> &ans) {
        vector <int> v;
        if (ans.size() == 1) {
            return v;
        }
        bool x = false;
        for (int i = 0; i < ans.size()-1; i+=2) {
            if (x == false) {
                v.push_back(min(ans[i], ans[i + 1]));
                x = true;
            }
            else {
                v.push_back(max(ans[i], ans[i + 1]));
                x = false;
            }
        }
        return v;
    }
    int minMaxGame(vector<int>& nums) {
        int y = 0;
        if (nums.size() == 1) return nums[0];
        else {
            int x = log2(nums.size());
            vector <int> ans;
            for(int i = 0; i < nums.size(); i++) {
                ans.push_back(nums[i]);
            }
            while(x--) {
                vector <int> d = fun(ans);
                ans.swap(d);
                if (ans.size() == 1) {
                    y = ans[0];
                    break;
                }
            }
        }
        return y;
    }
};
