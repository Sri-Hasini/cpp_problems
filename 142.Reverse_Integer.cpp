//Reverse Integer - leetcode (medium) (acc : 29%)
//https://leetcode.com/problems/reverse-integer/description/?source=submission-noac
/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/
class Solution {
public:
    int reverse(int x) {
        long long rev = 0, a = x;
        while (a != 0) {
            int r = a % 10;
            rev = rev * 10 + r;
            a /= 10;
        }
        if (rev > INT_MAX || rev < INT_MIN) return 0;
        return rev;
    }
};
