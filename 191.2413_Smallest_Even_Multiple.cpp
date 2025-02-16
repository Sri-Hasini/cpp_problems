//2413. Smallest Even Multiple - leetcode (easy) (acc : 88%)
//https://leetcode.com/problems/smallest-even-multiple/description/
/*
Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
*/
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (!(n & 1)) {
            return n;
        }
        return n * 2;
    }
};
