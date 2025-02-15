//3258. Count Substrings That Satisfy K-Constraint I - leetcode (easy) (acc : 80%)
//https://leetcode.com/problems/count-substrings-that-satisfy-k-constraint-i/description/?envType=problem-list-v2&envId=sliding-window
/*
You are given a binary string s and an integer k.
A binary string satisfies the k-constraint if either of the following conditions holds:
The number of 0's in the string is at most k.
The number of 1's in the string is at most k.
Return an integer denoting the number of 
substrings of s that satisfy the k-constraint.
*/
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int left = 0, right = 0;
        int n = s.size(), cnt = 0;
        unordered_map <char, int> m;
        while (right < n) {
            m[s[right]]++;
            while (m['0'] > k && m['1'] > k && m.size() > 1) {
                m[s[left]]--;
                left++;
            }
            cnt += right - left + 1;
            right++;
        }
        return cnt;
    }
};
