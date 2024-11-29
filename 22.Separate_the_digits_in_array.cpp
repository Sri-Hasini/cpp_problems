// Separate the Digits in an Array -leetcode (acc : 79%) (easy)
https://leetcode.com/problems/separate-the-digits-in-an-array/description/
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector <int> ans;
        int n = nums.size();
        for (int i = 0; i < n ; i++) {
            vector <int> x;
            while (nums[i] > 0) {
                int r = nums[i] % 10;
                x.push_back(r);
                nums[i] /= 10;
            }
            reverse(x.begin(), x.end());
            for (auto i : x) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
