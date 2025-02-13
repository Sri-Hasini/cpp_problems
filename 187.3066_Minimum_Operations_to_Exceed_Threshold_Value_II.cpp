//3066. Minimum Operations to Exceed Threshold Value II - leetcode (medium) (acc : 37%)
//https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/
/*
You are given a 0-indexed integer array nums, and an integer k.

In one operation, you will:

Take the two smallest integers x and y in nums.
Remove x and y from nums.
Add min(x, y) * 2 + max(x, y) anywhere in the array.
Note that you can only apply the described operation if nums contains at least two elements.

Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.
*/
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue <long long, vector <long long>, greater <long long>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        long long a, b, c, cnt = 0;
        while (!pq.empty() && pq.top() < k && pq.size() >= 2) {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            c = min(a, b) * 2 + max(a, b);
            pq.push(c);
            cnt++;
        }
        return cnt;
    }
};
